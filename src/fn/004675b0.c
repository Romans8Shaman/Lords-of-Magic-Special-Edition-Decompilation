/* Rebuilt from lomse.exe FUN_004675b0 @ 0x004675b0 (490 bytes, __thiscall). HAND (2026-11-13, was asmfn):
 * Reads the flag dword at (DAT_005cd2f4 + (this+0xc4)*1000)+0x14 (or [0x14] if the index/table is
 * invalid) and, for each set bit, records a type-id and later pushes (1, type-id) onto the param_3
 * VM stack (or 004d4550 overflow if +0x54==0), then 004d05e0(param_3, param_1, param_2). Early-out
 * if param_3+0x6c was nonzero after the call. Bits 0x8000 / 0x10000 also require 00428c10/00428c40
 * (this+0xc4) nonempty and 0042c500(..., this+0x28, 0, 1) nonzero. No flag is stored for 0x100. */
#include "lom.h"

#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)
#define FUN_00428c10 ((int (__fastcall *)(int))0x00428c10)
#define FUN_00428c40 ((int (__fastcall *)(int))0x00428c40)
#define FUN_0042c500 ((undefined4 (__thiscall *)(void *, int, int, int))0x0042c500)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004675b0 1
void __thiscall rb_004675b0(void *this, uint param_1, int *param_2, void *param_3)
{
  int idx;
  int tab;
  uint flags;
  int *pi_c4;
  void *pv;
  int i;
  int old;
  int stk;
  undefined1 flg[14];
  undefined4 typ[14];

  for (i = 0; i < 14; i = i + 1) {
    flg[i] = 0;
    typ[i] = 0;
  }

  pi_c4 = (int *)((int)this + 0xc4);
  idx = *pi_c4;
  if (((idx < 0) || (DAT_005cd2f0 <= idx)) || (DAT_005cd2f4 == 0)) {
    tab = 0;
  }
  else {
    tab = DAT_005cd2f4 + idx * 1000;
  }
  flags = *(uint *)(tab + 0x14);

  if ((flags & 0x40) != 0) {
    flg[0] = 1;
    typ[0] = 2;
  }
  if ((flags & 0x80) != 0) {
    flg[1] = 1;
    typ[1] = 7;
  }
  if ((flags & 0x200) != 0) {
    flg[3] = 1;
    typ[3] = 0x15;
  }
  if ((flags & 0x400) != 0) {
    flg[4] = 1;
    typ[4] = 0x17;
  }
  if ((flags & 0x800) != 0) {
    flg[5] = 1;
    typ[5] = 6;
  }
  if ((flags & 0x1000) != 0) {
    flg[6] = 1;
    typ[6] = 0x12;
  }
  if ((flags & 0x2000) != 0) {
    flg[7] = 1;
    typ[7] = 0x1a;
  }
  if ((flags & 0x4000) != 0) {
    flg[8] = 1;
    typ[8] = 0x1b;
  }
  if ((flags & 0x8000) != 0) {
    pv = (void *)FUN_00428c10((int)pi_c4);
    if ((pv != (void *)0x0) && (FUN_0042c500(pv, *(int *)((int)this + 0x28), 0, 1) != 0)) {
      flg[9] = 1;
      typ[9] = 0x1c;
    }
  }
  if ((flags & 0x10000) != 0) {
    pv = (void *)FUN_00428c40((int)pi_c4);
    if ((pv != (void *)0x0) && (FUN_0042c500(pv, *(int *)((int)this + 0x28), 0, 1) != 0)) {
      flg[10] = 1;
      typ[10] = 0x1d;
    }
  }
  if ((flags & 0x400000) != 0) {
    flg[11] = 1;
    typ[11] = 0x18;
  }
  if ((flags & 0x800000) != 0) {
    flg[12] = 1;
    typ[12] = 0x19;
  }

  i = 0;
  do {
    if (flg[i] == 1) {
      if (*(int *)((int)param_3 + 0x54) == 0) {
        *(undefined4 *)((int)param_3 + 0x90) = 3;
        FUN_004d4550(param_3);
        *(undefined4 *)((int)param_3 + 0x90) = 0;
        *(undefined4 *)((int)param_3 + 0xa4) = 0;
      }
      else {
        stk = *(int *)((int)param_3 + 0x50);
        old = *(int *)((int)param_3 + 0x54) + -1;
        *(int *)((int)param_3 + 0x54) = old;
        *(undefined4 *)(stk + old * 8) = 1;
        *(undefined4 *)(stk + 4 + old * 8) = typ[i];
      }
      FUN_004d05e0(param_3, param_1, param_2);
      old = *(int *)((int)param_3 + 0x6c);
      *(undefined4 *)((int)param_3 + 0x6c) = *(undefined4 *)((int)param_3 + 0x70);
      if (old != 0) {
        return;
      }
    }
    i = i + 1;
    if (0xd < i) {
      return;
    }
  } while (1);
}
