/* Hand C for lomse.exe FUN_00540e30 @ 0x00540e30 (3193 bytes, cdecl): MSVC CRT _input(FILE *stream, const uchar *format, va_list ap)
 * (scanf core with I64 / wide-char / lead-byte support). Written from the instruction stream in src/asmfn/00540e30.c.
 * Callees (all already C): 00541bb0 _inc(stream), 00541be0 _un_inc(ch, stream), 00541c00 _whiteout(&count, stream),
 * 0053b6e0 isspace, 00541d40 _isctype(ch, mask), 00541b70 _hextodec, 00545d90 mbtowc-like (wc*, mb*, mbcur),
 * 00541de0 __allmul (stdcall), 00545f10 __allshl (eax=lo, edx=hi, cl=count; edx:eax result), *0x574970 _fltin(longone-1, ptr, buf).
 * Tables: 0x574e88 = _pctype (2-byte entries, indexed by char; byte0 &4 digit, &8 space, &0x80 xdigit, byte1 &0x80 lead byte),
 * 0x575094 = mb_cur_max, 0x575098 = decimal point char, 0x574e7c / 0x574e84 = static scanset strings used for %s / %c.
 * Original reads uninitialised stack for `ch` when the format is empty (returns EOF or 0 depending on garbage); C uses 0.
 * No SEH, no x87.
 */
#include "lom.h"
#define LOM_SELF_00540e30 1

#define MB_CUR_MAX_ (*(int *)0x00575094)
#define PCTYPE (*(unsigned char **)0x00574e88)
#define DECPT (*(unsigned char *)0x00575098)
#define F_INC ((int (__cdecl *)(int *))0x00541bb0)
#define F_UNINC ((int (__cdecl *)(int, int *))0x00541be0)
#define F_WHITEOUT ((int (__cdecl *)(int *, int *))0x00541c00)
#define F_ISSPACE ((int (__cdecl *)(int))0x0053b6e0)
#define F_ISCTYPE ((int (__cdecl *)(int, int))0x00541d40)
#define F_HEXTODEC ((int (__cdecl *)(int))0x00541b70)
#define F_MBTOWC ((void (__cdecl *)(unsigned short *, unsigned char *, int))0x00545d90)
#define F_ALLMUL ((long long (__stdcall *)(unsigned, int, unsigned, int))0x00541de0)
#define F_FLTIN (*(void (__cdecl **)(int, void *, char *))0x00574970)

static inline long long ALLSHL(unsigned lo, int hi, int n)
{
  long long r;
  __asm__ volatile("call *%[f]" : "=A"(r) : "a"(lo), "d"(hi), "c"(n), [f] "r"(0x00545f10) : "memory", "cc");
  return r;
}

/* class test with the original's two forms (masked / unmasked index) */
#define CT(c, m) ((MB_CUR_MAX_ > 1) ? F_ISCTYPE((c), (m)) : (PCTYPE[(c) * 2] & (m)))

int __cdecl rb_00540e30(int *stream, unsigned char *format, char *ap)
{
  int count = 0;            /* chars consumed (0x14) */
  unsigned char nspec = 0;  /* completed specs (0x21) */
  int assigned = 0;         /* 0x34 */
  int ch = 0;               /* ebx */
  char *apsave = 0;         /* 0x54 */
  char *pointer = 0;        /* 0x28 */
  unsigned char *fmt = format;
  int width, widthset, comchr, started, number, integer64, ebx_dummy;
  unsigned char done, longone, widechar, suppress, widestr, reject, negative, prev;
  unsigned char bitmap[32];
  unsigned char *edx;
  char *dst;
  char *src;
  int digits;
  unsigned long long n64 = 0;
  char fbuf[400];
  unsigned char mbbuf[4] = {0, 0, 0, 0};
  unsigned short wc;
  (void)ebx_dummy;

  if (*fmt == 0) goto exit_;

  for (;;) {
    /* loop top: esi = fmt, edi = 0 */
    {
      int c = *fmt;
      int w = (MB_CUR_MAX_ > 1) ? F_ISCTYPE(c & 0xff, 8) : (PCTYPE[(c & 0xff) * 2] & 8);
      if (w != 0) {
        int t;
        count = count - 1;
        t = F_WHITEOUT(&count, stream);
        F_UNINC(t, stream);
        fmt++;
        while (F_ISSPACE(*fmt) != 0) fmt++;
      }
    }
    if (*fmt != 0x25) {
      /* literal char */
      int lc;
      count++;
      lc = F_INC(stream);
      ch = lc;
      {
        int fc = *fmt;
        fmt++;
        if (fc != ch) goto unget_exit;
      }
      if (PCTYPE[(ch & 0xff) * 2 + 1] & 0x80) {
        int c2;
        int fc;
        count++;
        c2 = F_INC(stream);
        fc = *fmt;
        fmt++;
        if (fc != c2) {
          count = count - 1;
          F_UNINC(c2, stream);
          goto unget_exit;
        }
        count = count - 1;
      }
      goto next_;
    }

    /* conversion spec */
    number = 0; prev = 0; started = 0; widthset = 0; width = 0; reject = 0; negative = 0;
    suppress = 0; done = 0; widestr = 0; widechar = 0; longone = 1; integer64 = 0;
    for (;;) {
      int c;
      int d;
      fmt++;
      c = *fmt;
      if (MB_CUR_MAX_ > 1) d = F_ISCTYPE(c & 0xff, 4); else d = PCTYPE[c * 2] & 4;
      if (d != 0) {
        widthset++;
        width = width * 10 + (c - 0x30);
      } else {
        unsigned idx = (unsigned)(c - 0x2a);
        if (idx > 0x4d) { done++; }
        else {
          switch (c) {
            case 0x2a: suppress++; break;
            case 0x46: case 0x4e: break;
            case 0x49:
              if (fmt[1] == 0x36 && fmt[2] == 0x34) {
                fmt += 2; integer64++; n64 = 0;
              } else done++;
              break;
            case 0x4c: longone++; break;
            case 0x68: longone--; widechar--; break;
            case 0x6c: longone++; widechar++; break;
            case 0x77: widechar++; break;
            default: done++; break;
          }
        }
      }
      if (done) break;
    }
    if (!suppress) {
      apsave = ap;
      ap += 4;
      pointer = *(char **)apsave;
    }
    done = 0;
    if (widechar == 0) {
      unsigned char c = *fmt;
      widechar = 0xff;
      if (c == 0x53 || c == 0x43) widechar = 1;
    }
    comchr = (*fmt | 0x20) & 0xff;
    if (comchr != 0x6e) {
      if (comchr == 0x63 || comchr == 0x7b) {
        count++;
        ch = F_INC(stream);
      } else {
        ch = F_WHITEOUT(&count, stream);
      }
    }
    if (widthset != 0 && width == 0) goto unget_exit;

    switch (comchr) {
    case 0x63: /* c */
      if (widthset == 0) { width++; widthset = 1; }
      if ((signed char)widechar > 0) widestr = 1;
      edx = (unsigned char *)0x574e84; reject = 0xff;
      goto scanset;
    case 0x73: /* s */
      if ((signed char)widechar > 0) widestr = 1;
      edx = (unsigned char *)0x574e7c; reject = 0xff;
      goto scanset;
    case 0x7b: /* { */
      if ((signed char)widechar > 0) widestr = 1;
      fmt++;
      edx = fmt;
      if (*edx == 0x5e) { edx++; reject = 0xff; }
      goto scanset;
    case 0x69: comchr = 0x64; /* i */
      goto number_x;
    case 0x78: goto number_x;
    case 0x64: case 0x6f: case 0x75: goto number_sign;
    case 0x70: longone = 1; goto number_sign;
    case 0x65: case 0x66: case 0x67: goto float_;
    case 0x6e: goto percent_n;
    default: goto other_;
    }

  scanset:
    {
      int k;
      for (k = 0; k < 32; k++) bitmap[k] = 0;
      if (comchr == 0x7b && *edx == 0x5d) { prev = 0x5d; edx++; bitmap[11] = 0x20; }
      while (*edx != 0x5d) {
        unsigned char c = *edx;
        edx++;
        if (c == 0x2d && prev != 0 && *edx != 0x5d) {
          unsigned char nx = *edx, lo, hi;
          edx++;
          if (prev < nx) { hi = nx; lo = prev; } else { hi = prev; lo = nx; prev = nx; }
          if (lo <= hi) {
            unsigned s = lo, n = (unsigned)hi - s + 1;
            do { bitmap[s >> 3] |= (unsigned char)(1 << (s & 7)); s++; n--; } while (n != 0);
          }
          prev = 0;
        } else {
          prev = c;
          bitmap[c >> 3] |= (unsigned char)(1 << (c & 7));
        }
      }
      if (*edx == 0) goto exit_;
      if (comchr == 0x7b) fmt = edx;
      count = count - 1;
      dst = pointer; src = pointer;
      F_UNINC(ch, stream);
      for (;;) {
        if (widthset != 0) {
          int ow = width; width--;
          if (ow == 0) { pointer = dst; goto scan_done; }
        }
        count++;
        ch = F_INC(stream);
        if (ch == -1 || !(((signed char)bitmap[ch >> 3] ^ (signed char)reject) & (1 << (ch & 7)))) {
          count = count - 1;
          pointer = dst;
          F_UNINC(ch, stream);
          goto scan_done;
        }
        if (suppress == 0) {
          if (widestr != 0) {
            mbbuf[0] = (unsigned char)ch; mbbuf[1] = 0;
            if (PCTYPE[(ch & 0xff) * 2 + 1] & 0x80) { count++; mbbuf[1] = (unsigned char)F_INC(stream); }
            F_MBTOWC(&wc, mbbuf, MB_CUR_MAX_);
            *(unsigned short *)dst = wc;
            dst += 2;
          } else {
            *dst++ = (char)ch;
          }
        } else {
          src++;
        }
      }
    }
  scan_done:
    if (src == dst) goto exit_;
    if (suppress == 0) {
      assigned++;
      if (comchr != 0x63) {
        if (widestr != 0) *(unsigned short *)pointer = 0; else *pointer = 0;
      }
    }
    goto spec_end;

  number_x:
    if (ch == 0x2d) negative = 1;
    else if (ch != 0x2b) goto number_0;
    width--;
    if (width == 0 && widthset != 0) done = 1;
    else { count++; ch = F_INC(stream); }
  number_0:
    if (ch == 0x30) {
      count++;
      ch = F_INC(stream);
      if ((unsigned char)ch == 0x78 || (unsigned char)ch == 0x58) {
        count++;
        ch = F_INC(stream);
        comchr = 0x78;
      } else {
        started = 1;
        if (comchr == 0x78) {
          count = count - 1;
          F_UNINC(ch, stream);
          ch = 0x30;
        } else {
          comchr = 0x6f;
        }
      }
    }
    goto number_body;
  number_sign:
    if (ch == 0x2d) negative = 1;
    else if (ch != 0x2b) goto number_body;
    width--;
    if (width == 0 && widthset != 0) done = 1;
    else { count++; ch = F_INC(stream); }
  number_body:
    if (integer64 == 0) {
      int num = number;
      if (!done) {
        for (;;) {
          int ok;
          if (comchr == 0x78 || comchr == 0x70) {
            int xd = (MB_CUR_MAX_ > 1) ? F_ISCTYPE(ch, 0x80) : (PCTYPE[ch * 2] & 0x80);
            if (xd != 0) { num = num << 4; ch = F_HEXTODEC(ch); ok = 1; } else ok = 0;
          } else {
            int dg = (MB_CUR_MAX_ > 1) ? F_ISCTYPE(ch, 4) : (PCTYPE[ch * 2] & 4);
            if (dg != 0) {
              if (comchr == 0x6f) { if (ch >= 0x38) ok = 0; else { num = num << 3; ok = 1; } }
              else { num = num * 10; ok = 1; }
            } else ok = 0;
          }
          if (!ok) done++;
          if (!done) {
            started++;
            num = num + ch - 0x30;
            if (widthset != 0) {
              width--;
              if (width == 0) { done = 1; goto num_chk; }
            }
            count++;
            ch = F_INC(stream);
          } else {
            count = count - 1;
            F_UNINC(ch, stream);
          }
        num_chk:
          if (done) break;
        }
      }
      number = num;
      if (negative) number = -number;
    } else {
      unsigned lo = (unsigned)(n64 & 0xffffffffu);
      int hi = (int)(n64 >> 32);
      if (!done) {
        for (;;) {
          int ok;
          long long r;
          if (comchr == 0x78) {
            int xd = (MB_CUR_MAX_ > 1) ? F_ISCTYPE(ch, 0x80) : (PCTYPE[ch * 2] & 0x80);
            if (xd != 0) { r = ALLSHL(lo, hi, 4); lo = (unsigned)r; hi = (int)(r >> 32); ch = F_HEXTODEC(ch); ok = 1; } else ok = 0;
          } else {
            int dg = (MB_CUR_MAX_ > 1) ? F_ISCTYPE(ch, 4) : (PCTYPE[ch * 2] & 4);
            if (dg != 0) {
              if (comchr == 0x6f) { if (ch >= 0x38) ok = 0; else { r = ALLSHL(lo, hi, 3); lo = (unsigned)r; hi = (int)(r >> 32); ok = 1; } }
              else { r = F_ALLMUL(lo, hi, 10, 0); lo = (unsigned)r; hi = (int)(r >> 32); ok = 1; }
            } else ok = 0;
          }
          if (!ok) done++;
          if (!done) {
            long long add = (long long)(ch - 0x30);
            started++;
            r = ((long long)hi << 32 | lo) + add;
            lo = (unsigned)r; hi = (int)(r >> 32);
            if (widthset != 0) {
              width--;
              if (width == 0) { done = 1; break; }
            }
            count++;
            ch = F_INC(stream);
          } else {
            count = count - 1;
            F_UNINC(ch, stream);
          }
          if (done) break;
        }
      }
      n64 = ((unsigned long long)(unsigned)hi << 32) | lo;
      if (negative) n64 = (unsigned long long)(-(long long)n64);
    }
    goto number_store;

  number_store:
    if ((comchr == 0x46 ? 0 : started) == 0) goto exit_;
    if (suppress == 0) {
      assigned++;
      if (integer64) *(unsigned long long *)pointer = n64;
      else if (longone != 0) *(int *)pointer = number;
      else *(short *)pointer = (short)number;
    }
    goto spec_end;

  percent_n:
    if (suppress == 0) {
      if (integer64) *(unsigned long long *)pointer = n64;
      else if (longone != 0) *(int *)pointer = count;
      else *(short *)pointer = (short)count;
    }
    goto spec_end;

  float_:
    {
      char *p = fbuf;
      if (ch == 0x2d) { fbuf[0] = (char)ch; p = fbuf + 1; goto fsign; }
      if (ch != 0x2b) goto fwidth;
    fsign:
      width--; count++;
      ch = F_INC(stream);
    fwidth:
      if (widthset == 0 || width > 0x15d) width = 0x15d;
      digits = started;
      while ((MB_CUR_MAX_ > 1) ? F_ISCTYPE(ch, 4) : (PCTYPE[ch * 2] & 4)) {
        int ow = width; width--;
        if (ow == 0) break;
        *p++ = (char)ch; digits++; count++;
        ch = F_INC(stream);
      }
      if ((unsigned char)ch == DECPT) {
        int ow = width; width--;
        if (ow != 0) {
          count++;
          ch = F_INC(stream);
          *p++ = (char)DECPT;
          while ((MB_CUR_MAX_ > 1) ? F_ISCTYPE(ch, 4) : (PCTYPE[ch * 2] & 4)) {
            int ow2 = width; width--;
            if (ow2 == 0) break;
            *p++ = (char)ch; digits++; count++;
            ch = F_INC(stream);
          }
        }
      }
      if (digits != 0 && (ch == 0x65 || ch == 0x45)) {
        int ow = width; width--;
        if (ow != 0) {
          *p++ = 0x65;
          count++;
          ch = F_INC(stream);
          if (ch == 0x2d) { *p++ = (char)ch; goto esign; }
          if (ch == 0x2b) {
          esign:
            ow = width; width--;
            if (ow == 0) { width = 0; goto edig; }
            count++;
            ch = F_INC(stream);
          }
        edig:
          while ((MB_CUR_MAX_ > 1) ? F_ISCTYPE(ch, 4) : (PCTYPE[ch * 2] & 4)) {
            ow = width; width--;
            if (ow == 0) break;
            digits++;
            *p++ = (char)ch;
            count++;
            ch = F_INC(stream);
          }
        }
      }
      count = count - 1;
      F_UNINC(ch, stream);
      if (digits == 0) goto exit_;
      if (suppress == 0) {
        assigned++;
        *p = 0;
        F_FLTIN((signed char)longone - 1, pointer, fbuf);
      }
    }
    goto spec_end;

  other_:
    if (*fmt != ch) goto unget_exit;
    nspec--;
    if (suppress == 0) ap = apsave;
    goto spec_end;

  spec_end:
    nspec++;
    fmt++;
  next_:
    if (ch == -1) {
      if (*fmt != 0x25 || fmt[1] != 0x6e) goto exit_;
    }
    if (*fmt == 0) goto exit_;
    continue;

  unget_exit:
    count = count - 1;
    F_UNINC(ch, stream);
    goto exit_;
  }

exit_:
  if (ch == -1 && assigned == 0 && nspec == 0) assigned = -1;
  return assigned;
}
