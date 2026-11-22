/* Rebuilt from lomse.exe op_enumterrainsprites @ 0x004fd170 (272 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0041da00 ((undefined4 (__fastcall *)(int))0x0041da00)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004fbe60 ((undefined4 (__thiscall *)(void *, int, int))0x004fbe60)

#define LOM_SELF_004fd170 1
void __cdecl rb_004fd170(void *vm)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_8;
  typedef int * _t_piStack_4;
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x0))
#define piStack_4 (*(_t_piStack_4 *)(_fr + 0x4))
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    piStack_4 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar2 = FUN_0041da00((int)vm);
  if (iVar2 == 0) {
    if (((char)uStack_8 == '\x06') && ((uStack_8 & 0x100) == 0)) goto LAB_004fd1dc;
    FUN_00404ab0(vm,0x12);
  }
  uStack_8 = 0;
LAB_004fd1dc:
  iVar2 = *(int *)((int)vm + 0x90);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  if (iVar2 == 0) {
    iVar2 = FUN_004fbe60(&DAT_005ae974,0,1);
    do {
      if (iVar2 == 0) {
        return;
      }
      iVar3 = FUN_004fbe60(&DAT_005ae974,iVar2,1);
      uVar1 = *(undefined4 *)(iVar2 + 0x28);
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
      FUN_004d05e0(vm,uStack_8,piStack_4);
      iVar4 = *(int *)((int)vm + 0x6c);
      *(undefined4 *)((int)vm + 0x6c) = *(undefined4 *)((int)vm + 0x70);
      iVar2 = iVar3;
    } while (iVar4 == 0);
  }
  return;
#undef uStack_8
#undef piStack_4
}
