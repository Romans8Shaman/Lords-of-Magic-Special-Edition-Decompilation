/* Rebuilt from lomse.exe FUN_004cee40 @ 0x004cee40 (672 bytes, __fastcall). HAND (2026-11-13, was asmfn):
 * GS VM operator `cvs` (any string -> substring). Operand stack: this+0x50 base of 8-byte items (type, value),
 * this+0x54 top index, this+0x58 end. Pop the destination string A, then the value B (an empty stack raises
 * error 6 via 004d4550 and leaves the item {0, <stale local>} as in the original). If A is not a string (type 8):
 * error 0xe and push A back. Else format B into a local buffer: 1 int "%d", 2 fixed 24.8 "%g" (x/256),
 * 4 float "%g", 8 string as is, 5 name (this+0x80 table, "/" prefix when B.type bit 8, "--unknown--" if NULL),
 * other types 004d1a80(this, type, value, 0) or "--nostringval--". If longer than A's capacity (004cee20):
 * error 0xf, but the string is still copied into A (original behaviour). Push A back (overflow: error 3). */
#include "lom.h"

#define FUN_004cee20 ((int (__thiscall *)(void *, char *))0x004cee20)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004d1a80 ((char * (__thiscall *)(void *, uint, int, int))0x004d1a80)
#define FUN_0053a090 ((int (__cdecl *)(char *, const char *, ...))0x0053a090) /* sprintf */

#define VMERR(t, code) do { *(int *)((int)(t) + 0x90) = (code); FUN_004d4550(t); \
  *(int *)((int)(t) + 0x90) = 0; *(int *)((int)(t) + 0xa4) = 0; } while (0)

static int rb_strlen_004cee40(const char *s)
{
  int n = 0;
  while (s[n] != 0) n = n + 1;
  return n;
}

#define LOM_SELF_004cee40 1
void __fastcall rb_004cee40(void *this)
{
  int *stk;
  int sp;
  uint atype;
  char *aval;
  uint btype;
  int bval;
  volatile int stale;
  int maxlen;
  int len;
  char *s;
  int i;
  char buf[0x11c];

  sp = *(int *)((int)this + 0x54);
  if (sp < *(int *)((int)this + 0x58)) {
    stk = *(int **)((int)this + 0x50);
    *(int *)((int)this + 0x54) = sp + 1;
    atype = (uint)stk[sp * 2];
    aval = (char *)stk[sp * 2 + 1];
  }
  else {
    VMERR(this, 6);
    atype = 0;
    aval = (char *)stale;
  }
  sp = *(int *)((int)this + 0x54);
  if (sp < *(int *)((int)this + 0x58)) {
    stk = *(int **)((int)this + 0x50);
    *(int *)((int)this + 0x54) = sp + 1;
    btype = (uint)stk[sp * 2];
    bval = stk[sp * 2 + 1];
  }
  else {
    VMERR(this, 6);
    bval = stale;
    btype = 0;
  }
  stale = bval;
  if ((byte)atype != 8) {
    VMERR(this, 0xe);
  }
  else {
    maxlen = FUN_004cee20(this, aval);
    s = buf;
    switch ((byte)btype) {
    case 1:
      len = FUN_0053a090(buf, (const char *)0x0055e364, bval); /* "%d" */
      break;
    case 2:
      len = FUN_0053a090(buf, (const char *)0x0055e360, (double)stale * 0.00390625); /* "%g" */
      break;
    case 4:
      { int v = stale; len = FUN_0053a090(buf, (const char *)0x0055e360, (double)*(float *)&v); }
      break;
    case 8:
      s = (char *)bval;
      len = rb_strlen_004cee40(s);
      break;
    case 5:
      s = *(char **)(*(int *)(*(int *)((int)this + 0x80) + bval * 4) + 4);
      if (s == 0) s = (char *)0x0055e354; /* "--unknown--" */
      if ((btype & 0x100) != 0) {
        FUN_0053a090(buf, (const char *)0x0055e350, s); /* "/%s" */
        s = buf;
      }
      len = rb_strlen_004cee40(s);
      break;
    default:
      s = FUN_004d1a80(this, btype, bval, 0);
      if (s != 0) {
        len = rb_strlen_004cee40(s);
      }
      else {
        s = buf;
        len = FUN_0053a090(buf, (const char *)0x0055e340); /* "--nostringval--" */
      }
      break;
    }
    if (len > maxlen) {
      VMERR(this, 0xf);
    }
    i = 0;
    do {
      ((volatile char *)aval)[i] = s[i];
      i = i + 1;
    } while (s[i - 1] != 0);
  }
  sp = *(int *)((int)this + 0x54);
  if (sp == 0) {
    VMERR(this, 3);
    return;
  }
  sp = sp - 1;
  *(int *)((int)this + 0x54) = sp;
  stk = *(int **)((int)this + 0x50);
  stk[sp * 2] = (int)atype;
  stk[sp * 2 + 1] = (int)aval;
}
