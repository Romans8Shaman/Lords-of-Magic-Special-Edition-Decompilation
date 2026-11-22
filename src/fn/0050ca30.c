/* Rebuilt from lomse.exe FUN_0050ca30 @ 0x0050ca30 (268 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005cca70 (*(undefined *)0x005cca70)
#define DAT_005ccab0 (*(undefined4 *)0x005ccab0)
#define DAT_005ccab4 (*(undefined4 *)0x005ccab4)
#define DAT_005ccab8 (*(int *)0x005ccab8)
#define DAT_005cd198 (*(ushort *)0x005cd198)
#define DAT_005cd1ac (*(undefined2 *)0x005cd1ac)
#define DAT_005cd1c0 (*(undefined2 *)0x005cd1c0)
#define FUN_00488640 ((undefined4 (__fastcall *)(int))0x00488640)
#define FUN_00488660 ((undefined4 (__thiscall *)(void *, short, undefined2))0x00488660)
#define FUN_004ecc90 ((undefined4 (__fastcall *)(undefined4 *))0x004ecc90)
#define FUN_0050c430 ((uint (__fastcall *)(int))0x0050c430)
#define FUN_0050c500 ((uint (__fastcall *)(int))0x0050c500)
#define FUN_0050c5d0 ((bool (__fastcall *)(int))0x0050c5d0)
#define FUN_0050c7f0 ((undefined4 (__fastcall *)(int))0x0050c7f0)
#define _DAT_005cca70 (*(undefined4 *)0x005cca70)
#define _DAT_005cca74 (*(undefined4 *)0x005cca74)
#define _DAT_005cd1f0 (*(undefined4 *)0x005cd1f0)

#define LOM_SELF_0050ca30 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall rb_0050ca30(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = -1;
  uVar1 = *(undefined4 *)((int)this + 0x54);
  if ((param_1 != 0) && (*(int *)((int)this + 0x58) == 0)) {
    iVar2 = 0;
    if (0 < *(short *)((int)this + 0x4e)) {
      piVar3 = (int *)(*(int *)((int)this + 0x50) + 8);
      do {
        if (*piVar3 != 0) {
          *(undefined4 *)((int)this + 0x54) =
               *(undefined4 *)(*(int *)((int)this + 0x50) + iVar2 * 0xc);
          iVar5 = iVar2;
          break;
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 3;
      } while (iVar2 < *(short *)((int)this + 0x4e));
    }
  }
  DAT_005cd1c0 = *(undefined2 *)((int)this + 0x54);
  FUN_0050c5d0((int)this);
  iVar2 = FUN_0050c7f0((int)this);
  if (iVar2 != 0) {
    FUN_004ecc90((undefined4 *)&DAT_005cca70);
  }
  _DAT_005cca70 = FUN_0050c500((int)this);
  _DAT_005cca74 = FUN_0050c430((int)this);
  DAT_005ccab0 = *(undefined4 *)((int)this + 0x48);
  DAT_005ccab4 = *(undefined4 *)((int)this + 0x54);
  FUN_00488640(0x5aa12c);
  DAT_005cd1ac = *(undefined2 *)((int)this + 0x54);
  iVar2 = 0;
  DAT_005cd198 = (ushort)((uint)*(undefined4 *)((int)this + 0x30) >> 8) & 1;
  if (0 < *(short *)((int)this + 0x4e)) {
    iVar4 = 0;
    do {
      FUN_00488660(&DAT_005aa12c,*(short *)(*(int *)((int)this + 0x50) + iVar4),
                   (short)*(undefined4 *)(*(int *)((int)this + 0x50) + 4 + iVar4));
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar2 < *(short *)((int)this + 0x4e));
  }
  _DAT_005cd1f0 = 0;
  DAT_005ccab8 = iVar5;
  *(undefined4 *)((int)this + 0x54) = uVar1;
  return;
}
