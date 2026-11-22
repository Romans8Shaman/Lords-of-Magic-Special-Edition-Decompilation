/* Rebuilt from lomse.exe op_enumrallyarmies @ 0x00408ea0 (258 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae98c (*(int *)0x005ae98c)
#define DAT_005ae998 (*(int *)0x005ae998)
#define FUN_00407ba0 ((uint (__fastcall *)(int))0x00407ba0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)

#define LOM_SELF_00408ea0 1
void __cdecl rb_00408ea0(void *vm)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_8;
  typedef int * _t_piStack_4;
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x0))
#define piStack_4 (*(_t_piStack_4 *)(_fr + 0x4))
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar4 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar4;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar4 * 8);
    piStack_4 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar4 * 8);
    iVar4 = DAT_005ae98c;
    iVar2 = DAT_005ae998;
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uStack_8 = 0;
    iVar4 = DAT_005ae98c;
    iVar2 = DAT_005ae998;
  }
  do {
    iVar3 = DAT_005ae98c;
    if (DAT_005ae98c < iVar2) {
      DAT_005ae98c = iVar4;
      return;
    }
    DAT_005ae98c = iVar4;
    iVar4 = FUN_004f6000(&DAT_005ae974,iVar2);
    if (((iVar4 != 0) && (*(int *)(iVar4 + 4) == 0)) && (uVar5 = FUN_00407ba0(iVar4), uVar5 != 0)) {
      uVar1 = *(undefined4 *)(iVar4 + 0x28);
      if (*(int *)((int)vm + 0x54) == 0) {
        *(undefined4 *)((int)vm + 0x90) = 3;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
      }
      else {
        iVar4 = *(int *)((int)vm + 0x50);
        iVar6 = *(int *)((int)vm + 0x54) + -1;
        *(int *)((int)vm + 0x54) = iVar6;
        *(undefined4 *)(iVar4 + iVar6 * 8) = 1;
        *(undefined4 *)(iVar4 + 4 + iVar6 * 8) = uVar1;
      }
      FUN_004d05e0(vm,uStack_8,piStack_4);
      iVar4 = *(int *)((int)vm + 0x6c);
      *(undefined4 *)((int)vm + 0x6c) = *(undefined4 *)((int)vm + 0x70);
      if (iVar4 != 0) {
        return;
      }
    }
    iVar4 = DAT_005ae98c;
    iVar2 = iVar2 + 1;
    DAT_005ae98c = iVar3;
  } while( true );
#undef uStack_8
#undef piStack_4
}
