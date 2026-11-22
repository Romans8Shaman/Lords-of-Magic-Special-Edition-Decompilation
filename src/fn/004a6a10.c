/* Rebuilt from lomse.exe FUN_004a6a10 @ 0x004a6a10 (780 bytes, __thiscall, ret 4). HAND (2026-11-13, was asmfn):
 * Sprite visibility pass over this+0x28[this+0x30] (GetSpriteInZOrder: index check with OutputDebugString).
 * Clear bit0 of every sprite's +0x34; copy DAT_005a7a14 -> DAT_005a7a5c (00476e10); DAT_005a7ad8 = param_1 ? 0 : 2.
 * For each offset k of the DAT_005aec3c>>1 row of the 9-int table at 0055ca60 (k 0..8 when DAT_005878e8, else only 4),
 * shift each unflagged sprite by DAT_005878fc[k] / DAT_00587920[k] and, if its vtbl[0xc](rect 0,0,640,384) test hits,
 * vtbl[0x14](x, y, -1) and flag it; then restore its position. Unflagged sprites get +0x14 = 1000. Debug
 * "break me" sprintf when *DAT_00584cc0, then 004a35c0 on every 0x58-byte DAT_00584cc0 record with bit 2. Rebuild the
 * region list (00476e10 / 00476010 per 16-byte rect / 00476e10), DAT_005a7ad8 = 0, and when DAT_005d2098 bit0 and
 * DAT_005a7a38: temp 004950c0(DAT_00585170) -> 00477910(&DAT_005a7a38, &tmp, 0xffff), DAT_00583648 -= 0x20, ~tmp.
 * The C++ EH frame (destroys tmp on throw) is omitted. */
#include "lom.h"

#define DAT_005aec3c (*(int *)0x005aec3c)
#define DAT_005878e8 (*(int *)0x005878e8)
#define DAT_005a7ad8 (*(int *)0x005a7ad8)
#define DAT_00584cc0 (*(uint **)0x00584cc0)
#define DAT_00584ca8 (*(int *)0x00584ca8)
#define DAT_005a7a14 (*(int *)0x005a7a14)
#define DAT_005a7a24 (*(int **)0x005a7a24)
#define DAT_005d2098 (*(byte *)0x005d2098)
#define DAT_005a7a38 (*(int *)0x005a7a38)
#define DAT_00585170 (*(int **)0x00585170)
#define DAT_00583648 (*(int *)0x00583648)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8)
#define FUN_00476e10 ((undefined4 (__thiscall *)(void *, void *))0x00476e10)
#define FUN_00476010 ((int (__thiscall *)(void *, int, int, int, int))0x00476010)
#define FUN_004950c0 ((void * (__thiscall *)(void *, int *))0x004950c0)
#define FUN_00477910 ((void (__thiscall *)(void *, void *, uint))0x00477910)
#define FUN_00495590 ((void (__fastcall *)(void *))0x00495590)
#define FUN_004a35c0 ((void (__fastcall *)(void *))0x004a35c0)
#define FUN_0053a090 ((int (__cdecl *)(char *, const char *, ...))0x0053a090)

static byte *rb_spr_004a6a10(void *this, int i)
{
  if (i >= 0 && i < *(int *)((int)this + 0x30)) return (*(byte ***)((int)this + 0x28))[i];
  OutputDebugStringA((LPCSTR)0x0055cb7c); /* "GetSpriteInZOrder: invalid index\r\n" */
  return 0;
}

#define LOM_SELF_004a6a10 1
void __thiscall rb_004a6a10(void *this, int param_1)
{
  int *tab;
  int *p;
  int n;
  int lo;
  int hi;
  int cnt;
  int i;
  int j;
  int m;
  int ox;
  int oy;
  byte *s;
  int *e;
  int rect[4];
  int tmp[8];

  tab = (int *)0x0055ca60 + (DAT_005aec3c >> 1) * 9;
  n = *(int *)((int)this + 0x30);
  rect[0] = 0;
  rect[1] = 0;
  rect[2] = 0x280;
  rect[3] = 0x180;
  if (DAT_005878e8 != 0) {
    lo = 0;
    hi = 8;
  }
  else {
    lo = 4;
    hi = 4;
  }
  for (i = 0; i < n; i = i + 1) {
    s = rb_spr_004a6a10(this, i);
    if (s != 0) s[0x34] = s[0x34] & 0xfe;
  }
  FUN_00476e10((void *)0x005a7a5c, (void *)0x005a7a14);
  DAT_005a7ad8 = (param_1 != 0) ? 0 : 2;
  if (lo <= hi) {
    cnt = hi - lo + 1;
    p = tab + lo;
    do {
      for (j = 0; j < n; j = j + 1) {
        s = rb_spr_004a6a10(this, j);
        if (s != 0 && (s[0x34] & 1) == 0) {
          ox = *(int *)(s + 0xc);
          oy = *(int *)(s + 0x10);
          *(int *)(s + 0xc) = ((int *)0x005878fc)[*p] + ox;
          *(int *)(s + 0x10) = ((int *)0x00587920)[*p] + oy;
          if (((int (__thiscall *)(void *, int *))(*(void **)(*(int *)s + 0xc)))(s, rect) != 0) {
            ((void (__thiscall *)(void *, int, int, int))(*(void **)(*(int *)s + 0x14)))
                (s, *(int *)(s + 0xc), *(int *)(s + 0x10), -1);
            s[0x34] = s[0x34] | 1;
          }
          *(int *)(s + 0x10) = oy;
          *(int *)(s + 0xc) = ox;
        }
      }
      p = p + 1;
      cnt = cnt - 1;
    } while (cnt != 0);
  }
  for (i = 0; i < n; i = i + 1) {
    s = rb_spr_004a6a10(this, i);
    if (s != 0 && (s[0x34] & 1) == 0) *(int *)(s + 0x14) = 1000;
  }
  if (DAT_00584cc0 != 0) {
    if (*DAT_00584cc0 != 0) FUN_0053a090((char *)0x005d22f0, (const char *)0x0055cba0); /* "break me" */
    for (i = 0; i < DAT_00584ca8; i = i + 1) {
      s = (byte *)DAT_00584cc0 + i * 0x58;
      if ((*s & 2) != 0) FUN_004a35c0(s);
    }
  }
  FUN_00476e10((void *)0x005a7a80, (void *)0x005a79f0);
  m = DAT_005a7a14;
  for (i = 0; i < m; i = i + 1) {
    e = (i >= 0 && i < DAT_005a7a14) ? DAT_005a7a24 + i * 4 : (int *)0;
    FUN_00476010((void *)0x005a79f0, e[0], e[1], e[2], e[3]);
  }
  FUN_00476e10((void *)0x005a7a14, (void *)0x005a7a80);
  DAT_005a7ad8 = 0;
  if ((DAT_005d2098 & 1) != 0 && DAT_005a7a38 != 0) {
    FUN_004950c0(tmp, DAT_00585170);
    FUN_00477910((void *)0x005a7a38, tmp, 0xffff);
    DAT_00583648 = DAT_00583648 - 0x20;
    FUN_00495590(tmp);
  }
}
