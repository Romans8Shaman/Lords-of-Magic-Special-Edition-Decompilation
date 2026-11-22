/* Rebuilt from lomse.exe FUN_0049b2a0 @ 0x0049b2a0 (432 bytes, __thiscall, ret 8). HAND (2026-11-13, was asmfn):
 * Palette cache (this+0x6d0 table of this+0x6d4 slots of 256 16-bit colours, this+0x6d8 used).
 * Allocate the table on first use (Storm SMemAlloc, "storm.h" line 0x3fa); add its size to DAT_0058371c on every
 * call. Convert the 256 RGB triples at param_1 to 16-bit pixels with the DirectDraw mask shifts
 * (DAT_005853f0/ec red, f8/f4 green, 00585400/fc blue). Return an exact matching slot; else, if there is room,
 * append the new palette; else return the slot with the most equal entries (first wins ties). param_2 unused. */
#include "lom.h"

#define DAT_0058371c (*(int *)0x0058371c)
#define DAT_005853ec (*(uint *)0x005853ec)
#define DAT_005853f0 (*(uint *)0x005853f0)
#define DAT_005853f4 (*(uint *)0x005853f4)
#define DAT_005853f8 (*(uint *)0x005853f8)
#define DAT_005853fc (*(uint *)0x005853fc)
#define DAT_00585400 (*(uint *)0x00585400)
#define Ordinal_401 ((void * (__stdcall *)(int, const char *, int, int))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 SMemAlloc */

#define LOM_SELF_0049b2a0 1
short * __thiscall rb_0049b2a0(void *this, byte *param_1, int param_2)
{
  unsigned short pal[256];
  short *tab;
  int count;
  int i;
  int k;
  int same;
  int best;
  int bestcnt;
  uint rs, gs, bs;
  byte *p;

  (void)param_2;
  if (*(short **)((int)this + 0x6d0) == 0) {
    tab = (short *)Ordinal_401(*(int *)((int)this + 0x6d4) << 9, (const char *)0x00555130, 0x3fa, 0);
    *(short **)((int)this + 0x6d0) = tab;
    if (tab == 0) return 0;
  }
  DAT_0058371c = DAT_0058371c + (*(int *)((int)this + 0x6d4) << 9);
  rs = DAT_005853f0 & 0xff;
  gs = DAT_005853f8 & 0xff;
  bs = DAT_00585400 & 0xff;
  p = param_1;
  for (k = 0; k < 0x100; k = k + 1) {
    pal[k] = (unsigned short)(((uint)(p[1] >> (gs & 31)) << (DAT_005853f4 & 31)) +
                              ((uint)(p[0] >> (rs & 31)) << (DAT_005853ec & 31)) +
                              ((uint)(p[2] >> (bs & 31)) << (DAT_005853fc & 31)));
    p = p + 3;
  }
  bestcnt = 0;
  best = 0;
  count = *(int *)((int)this + 0x6d8);
  i = 0;
  if (count > 0) {
    tab = *(short **)((int)this + 0x6d0);
    for (i = 0; i < count; i = i + 1) {
      same = 0;
      for (k = 0; k < 0x100; k = k + 1) {
        if ((short)pal[k] == tab[i * 0x100 + k]) same = same + 1;
      }
      if (same == 0x100) return tab + i * 0x100;
      if (same > bestcnt) {
        best = i;
        bestcnt = same;
      }
    }
  }
  if (count >= *(int *)((int)this + 0x6d4)) {
    return *(short **)((int)this + 0x6d0) + best * 0x100;
  }
  *(int *)((int)this + 0x6d8) = count + 1;
  tab = *(short **)((int)this + 0x6d0);
  for (k = 0; k < 0x100; k = k + 1) {
    tab[i * 0x100 + k] = (short)pal[k];
  }
  return *(short **)((int)this + 0x6d0) + i * 0x100;
}
