/* Rebuilt from lomse.exe op_armycanmove_q @ 0x00426e10 (372 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00411610 ((undefined4 * (__fastcall *)(undefined4 *))0x00411610)
#define FUN_004117f0 ((undefined4 (__thiscall *)(void *, uint))0x004117f0)
#define FUN_00411910 ((undefined4 (__fastcall *)(undefined4 *))0x00411910)
#define FUN_00415170 ((undefined4 (__thiscall *)(void *, undefined4 *, uint))0x00415170)
#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_00420970 ((undefined4 (__fastcall *)(void *))0x00420970)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_00426e10 1
void __cdecl rb_00426e10(void *vm)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uchar _fr[0x5f8] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_5f0;
  typedef void * _t_pvStack_5ec;
  typedef undefined4 _t_auStack_5e8[375];
#define fStack_5f0 (*(_t_fStack_5f0 *)(_fr + 0x0))
#define pvStack_5ec (*(_t_pvStack_5ec *)(_fr + 0x4))
#define auStack_5e8 (*(_t_auStack_5e8 *)(_fr + 0x8))

  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar4 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    fStack_5f0 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar4 = 0;
  }
  uVar4 = uVar4 & 0xff;
  if (uVar4 != 1) {
    if (uVar4 == 2) {
      fStack_5f0 = __BC(float, (__BC(int, fStack_5f0) >> 8));
    }
    else {
      if (uVar4 != 4) {
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
        return;
      }
      lVar5 = __ftol((float10)fStack_5f0);
      fStack_5f0 = __BC(float, lVar5);
    }
  }
  iVar2 = FUN_0041be40(vm,&pvStack_5ec);
  if (iVar2 != 0) {
    FUN_00411610(auStack_5e8);
    FUN_00415170(pvStack_5ec,auStack_5e8,__BC(uint, fStack_5f0));
    iVar2 = FUN_00420970(auStack_5e8);
    FUN_004117f0(auStack_5e8,0);
    if (*(int *)((int)vm + 0x54) == 0) {
      *(undefined4 *)((int)vm + 0x90) = 3;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
    }
    else {
      iVar1 = *(int *)((int)vm + 0x50);
      iVar3 = *(int *)((int)vm + 0x54) + -1;
      *(int *)((int)vm + 0x54) = iVar3;
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(uint *)(iVar1 + 4 + iVar3 * 8) = -(uint)(iVar2 != 0);
    }
    FUN_00411910(auStack_5e8);
  }
  return;
#undef fStack_5f0
#undef pvStack_5ec
#undef auStack_5e8
}
