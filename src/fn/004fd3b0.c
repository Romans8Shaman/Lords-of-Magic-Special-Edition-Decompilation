/* Rebuilt from lomse.exe op_enumspelleffects @ 0x004fd3b0 (254 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0041da00 ((undefined4 (__fastcall *)(int))0x0041da00)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004fbe60 ((undefined4 (__thiscall *)(void *, int, int))0x004fbe60)

#define LOM_SELF_004fd3b0 1
void __cdecl rb_004fd3b0(void *vm)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int * _t_piStack_4;
#define piStack_4 (*(_t_piStack_4 *)(_fr + 0x4))
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uVar5 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    piStack_4 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uVar5 = 0;
  }
  iVar3 = FUN_0041da00((int)vm);
  if (iVar3 == 0) {
    if (((char)uVar5 == '\x06') && ((uVar5 & 0x100) == 0)) goto LAB_004fd411;
    FUN_00404ab0(vm,0x12);
  }
  uVar5 = 0;
LAB_004fd411:
  iVar3 = *(int *)((int)vm + 0x90);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  if (iVar3 == 0) {
    for (iVar3 = FUN_004fbe60(&DAT_005ae974,0,4); iVar3 != 0;
        iVar3 = FUN_004fbe60(&DAT_005ae974,iVar3,4)) {
      uVar1 = *(undefined4 *)(iVar3 + 0x28);
      if (*(int *)((int)vm + 0x54) == 0) {
        *(undefined4 *)((int)vm + 0x90) = 3;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
      }
      else {
        iVar2 = *(int *)((int)vm + 0x50);
        iVar4 = *(int *)((int)vm + 0x54) + -1;
        *(int *)((int)vm + 0x54) = iVar4;
        *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
        *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = uVar1;
      }
      FUN_004d05e0(vm,uVar5,piStack_4);
      iVar2 = *(int *)((int)vm + 0x6c);
      *(undefined4 *)((int)vm + 0x6c) = *(undefined4 *)((int)vm + 0x70);
      if (iVar2 != 0) {
        return;
      }
    }
  }
  return;
#undef piStack_4
}
