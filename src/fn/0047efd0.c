/* Rebuilt from lomse.exe FUN_0047efd0 @ 0x0047efd0 (202 bytes, __thiscall). HAND (2026-11-13, was asmfn; gen: partial3w).
 * Nearest palette entry to RGB (p1, p2, p3): if (flags +0x14 & 4) or no 16-bit table (+0x10): FUN_00474ee0(p1, p2, p3).
 * Else for i in 0..255: FUN_00474e70(&r, &g, &b, table[i]) (16-bit colour -> 8-bit r/g/b), d = FUN_00511630(&want, &got)
 * where want = {p1, p2, p3} (local) and got is rebuilt each pass in param_1's own slot; keep the first minimum < 10000.
 * Faithful details: the colour is pushed as a dword whose high half is left over in eax (table pointer on the first
 * pass, the previous distance afterwards); the best index stays uninitialised if no distance < 10000. */
#include "lom.h"

#define FUN_00474ee0 ((int (__thiscall *)(void *, int, int, int))0x00474ee0)
#define FUN_00474e70 ((void (__thiscall *)(void *, uint *, uint *, uint *, uint))0x00474e70)
#define FUN_00511630 ((int (__thiscall *)(void *, unsigned char *, unsigned char *))0x00511630)

#define LOM_SELF_0047efd0 1
int __thiscall rb_0047efd0(void *this, int param_1, int param_2, int param_3)
{
  volatile unsigned char want[4];
  uint r, g, b;
  int best_i;
  int best, i, d;
  uint hi;
  unsigned char c1, c2, c3;
  volatile unsigned char *got = (volatile unsigned char *)&param_1;
  if ((*(unsigned char *)((int)this + 0x14) & 4) != 0 || *(int *)((int)this + 0x10) == 0)
    return FUN_00474ee0((void *)0x00584ae8, param_1, param_2, param_3);
  c1 = (unsigned char)param_1; c2 = (unsigned char)param_2; c3 = (unsigned char)param_3;
  want[0] = c1; want[1] = c2; want[2] = c3;
  best = 10000;
  hi = *(uint *)((int)this + 0x10);
  for (i = 0; i < 0x100; i++) {
    uint w = *(unsigned short *)(*(int *)((int)this + 0x10) + i * 2);
    FUN_00474e70((void *)0x00584ae8, &b, &g, &r, (hi & 0xffff0000u) | w);
    got[1] = c2;
    got[0] = c1;
    got[2] = c3;
    d = FUN_00511630((void *)0x00584ae8, (unsigned char *)want, (unsigned char *)got);
    hi = (uint)d;
    if (d < best) { best_i = i; best = d; }
  }
  return best_i;
}
