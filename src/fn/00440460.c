/* Rebuilt from lomse.exe op_getbuildingparent @ 0x00440460 (229 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_0043de50 ((undefined4 (__fastcall *)(int))0x0043de50)
#define FUN_00485400 ((undefined * (__thiscall *)(void *, int, byte))0x00485400)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_building_in_upgradebuilding_does_0055663c (*(char (*)[])0x0055663c)

#define LOM_SELF_00440460 1
void __cdecl rb_00440460(void *vm)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_4;
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0x4))
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar4 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
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
      fStack_4 = __BC(float, (__BC(int, fStack_4) >> 8));
    }
    else {
      if (uVar4 != 4) {
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        goto LAB_0044051b;
      }
      lVar6 = __ftol((float10)fStack_4);
      fStack_4 = __BC(float, lVar6);
    }
  }
  puVar2 = FUN_00485400(&DAT_005aa12c,__BC(int, fStack_4),7);
  if (puVar2 == (undefined *)0x0) {
    FUN_004d41c0(vm,s_building_in_upgradebuilding_does_0055663c);
    return;
  }
  uVar3 = FUN_0043de50((int)puVar2);
  if (*(int *)((int)vm + 0x54) != 0) {
    iVar5 = *(int *)((int)vm + 0x54) + -1;
    *(int *)((int)vm + 0x54) = iVar5;
    iVar1 = *(int *)((int)vm + 0x50);
    *(undefined4 *)(iVar1 + iVar5 * 8) = 1;
    *(undefined4 *)(iVar1 + 4 + iVar5 * 8) = uVar3;
    return;
  }
  *(undefined4 *)((int)vm + 0x90) = 3;
LAB_0044051b:
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
#undef fStack_4
}
