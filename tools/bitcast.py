"""bitcast.py: apply Ghidra bit-reinterpret casts (ExportBitcasts.java -> ghidra_bc/bc/<addr>.tsv) to raw decomp text.
Ghidra prints pcode CAST/SUBPIECE between float and int as `(float)x` / `(int)x`; C would convert numerically.
Each marked cast `(T)operand` becomes `__BC(T, operand)` (memcpy bit-cast, see include/lom.h)."""
import os, re
BCDIR = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), 'ghidra_bc', 'bc')
SUMMARY = os.path.join(os.path.dirname(BCDIR), 'bc_summary.tsv')
_S = None
def summary():
    global _S
    if _S is None:
        _S = {}
        if os.path.exists(SUMMARY):
            for l in open(SUMMARY):
                p = l.split('\t')
                if len(p) >= 4: _S[int(p[0], 16)] = (int(p[1]), int(p[2]), int(p[3]))
    return _S
TYPEWORD = re.compile(r'^\s*[A-Za-z_]\w*(\s+[A-Za-z_]\w*)*\s*\**\s*$')
def _match(s, i):
    d = 0
    for j in range(i, len(s)):
        if s[j] == '(': d += 1
        elif s[j] == ')':
            d -= 1
            if d == 0: return j
    return -1
def unary_end(s, i):
    """end index (exclusive) of the C unary-expression starting at s[i] (cast operand)."""
    while i < len(s) and s[i] == ' ': i += 1
    if i >= len(s): raise ValueError('eol')
    c = s[i]
    if c in '*&~!' or (c == '-' and not s[i + 1:i + 2].isdigit()):
        return unary_end(s, i + 1)
    if c == '(':
        e = _match(s, i)
        if e < 0: raise ValueError('paren')
        inner = s[i + 1:e]
        if TYPEWORD.match(inner) and e + 1 < len(s) and (s[e + 1].isalnum() or s[e + 1] in '_(*&-~!'):
            if not re.match(r'^\s*\w+\s*$', inner) or re.match(r'^\s*(u?int\d*|u?char|u?short|u?long(long)?|float\d*|double|undefined\d*|bool|byte|word|dword|code|void|[A-Z]\w*)\s*\**\s*$', inner):
                return unary_end(s, e + 1)  # nested cast
        j = e + 1
    else:
        m = re.match(r'-?[\w.]+', s[i:])
        if not m: raise ValueError('operand:' + s[i:i + 10])
        j = i + m.end()
    while j < len(s):
        if s[j] == '(':
            e = _match(s, j)
            if e < 0: raise ValueError('paren')
            j = e + 1
        elif s[j] == '[':
            d = 0
            for k in range(j, len(s)):
                if s[k] == '[': d += 1
                elif s[k] == ']':
                    d -= 1
                    if d == 0: break
            j = k + 1
        elif s.startswith('->', j) or s[j] == '.':
            m = re.match(r'(->|\.)\w+', s[j:]); j += m.end()
        else: break
    return j
def apply(addr, txt):
    """returns (text, nBC) or raises ValueError."""
    S = summary().get(addr)
    if not S or S[0] == 0: return txt, 0
    p = os.path.join(BCDIR, '%08x.tsv' % addr)
    marks = [l.rstrip('\n').split('\t') for l in open(p) if l.strip()] if os.path.exists(p) else []
    cref = os.path.join(BCDIR, '%08x.c' % addr)
    lines = txt.split('\n')
    if os.path.exists(cref):
        ref = open(cref).read().split('\n')
        clean = re.sub(r'/\*IC:[0-9a-f]{8}\*/', '', txt).split('\n')
        if [l.rstrip() for l in ref if l.strip()] != [l.rstrip() for l in clean if l.strip()]:
            raise ValueError('bcTextMismatch')
    byline = {}
    hid = [m for m in marks if len(m) > 2 and m[2] == 'HID']
    marks = [m for m in marks if not (len(m) > 2 and m[2] == 'HID')]
    # ExportBitcasts places some CASTs twice: on the real cast (printed == out type) AND on the enclosing numeric
    # conversion at paren k-1 (e.g. `(float10)(float)p` -> both marked). Drop the enclosing duplicate.
    def _dup(m):
        if m[5] == m[6]: return False
        return any(x[0] == m[0] and int(x[1]) == int(m[1]) + 1 and x[3] == m[3] and x[4] == m[4] and x[5] == x[6] for x in marks)
    marks = [m for m in marks if not _dup(m)]
    for m in marks: byline.setdefault(int(m[0]), []).append((int(m[1]), m[6]))
    n = 0
    for L, ms in byline.items():
        s = lines[L]
        pos = [i for i, ch in enumerate(s) if ch == '(']
        for k, ty in sorted(ms, reverse=True):
            if k >= len(pos): raise ValueError('bcParenIdx')
            i = pos[k]; e = _match(s, i)
            if re.sub(r'\s', '', s[i + 1:e]) != re.sub(r'\s', '', ty): raise ValueError('bcType')
            oe = unary_end(s, e + 1)
            s = s[:i] + '__BC(%s, %s)' % (s[i + 1:e], s[e + 1:oe].strip()) + s[oe:]
            n += 1
        lines[L] = s
    subdone = set()
    for m in hid:
        L = int(m[0]); s = lines[L]
        if s.count('(') > s.count(')'):  # statement continues: merge following lines into this one
            k = L
            while s.count('(') > s.count(')') and k + 1 < len(lines) and lines[k + 1] is not None:
                k += 1; s += '\n' + lines[k]; lines[k] = None
            lines[L] = s
        if m[3] == 'CAST':
            if m[4].startswith('undefined'): continue  # x87 result of fsin/fcos/...: numeric anyway
            if re.search(r'\b%s\s*=\s*__BC\(' % re.escape(m[7]), s): continue  # already a marked cast
            mm = re.search(r'\b%s\s*=\s*\(' % re.escape(m[7]), s)
            if not mm: raise ValueError('hidNoAssign')
            i = mm.end() - 1; e = _match(s, i)
            if e < 0: raise ValueError('hidParen')
            if re.sub(r'\s', '', s[i + 1:e]) != re.sub(r'\s', '', m[6]): raise ValueError('hidType')
            oe = unary_end(s, e + 1)
            lines[L] = s[:i] + '__BC(%s, %s)' % (s[i + 1:e], s[e + 1:oe].strip()) + s[oe:]
            n += 1
        elif m[3] == 'SUBPIECE':
            if L in subdone: continue
            subdone.add(L)
            subs = set(re.findall(r'\bSUB(\d)(\d)\(', s))
            if len(subs) != 1: raise ValueError('hidSub')
            a, b = subs.pop()
            ity = {'4': 'uint', '8': 'ulonglong'}.get(a)
            if not ity: raise ValueError('hidSubSize')
            out = []; k = 0
            for mm in re.finditer(r'\bSUB%s%s\(' % (a, b), s):
                i = mm.end(); d = 0; j = i
                while j < len(s):
                    if s[j] in '([': d += 1
                    elif s[j] in ')]':
                        if d == 0: break
                        d -= 1
                    elif s[j] == ',' and d == 0: break
                    j += 1
                if j >= len(s): raise ValueError('hidSubArg')
                out.append(s[k:i] + '__BC(%s, %s)' % (ity, s[i:j])); k = j
            lines[L] = ''.join(out) + s[k:]
            n += 1
        else: raise ValueError('hidOp')
    return '\n'.join(l for l in lines if l is not None), n
