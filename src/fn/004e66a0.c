/* Rebuilt from lomse.exe op_isanything_q @ 0x004e66a0 (218 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_004e66a0 1
void __cdecl rb_004e66a0(void *vm)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_4;
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0x4))
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar3 = 0;
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 != 1) {
    if (uVar3 == 2) {
      fStack_4 = __BC(float, (__BC(int, fStack_4) >> 8));
    }
    else {
      if (uVar3 != 4) {
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        goto LAB_004e6750;
      }
      lVar5 = __ftol((float10)fStack_4);
      fStack_4 = __BC(float, lVar5);
    }
  }
  iVar2 = FUN_004f6000(&DAT_005ae974,__BC(int, fStack_4));
  if (((iVar2 != 0) && (*(int *)(iVar2 + 4) == 1)) && (*(int *)(iVar2 + 0x54) < 0)) {
    iVar2 = 0;
  }
  if (*(int *)((int)vm + 0x54) != 0) {
    iVar4 = *(int *)((int)vm + 0x54) + -1;
    *(int *)((int)vm + 0x54) = iVar4;
    iVar1 = *(int *)((int)vm + 0x50);
    *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
    *(uint *)(iVar1 + 4 + iVar4 * 8) = -(uint)(iVar2 != 0);
    return;
  }
  *(undefined4 *)((int)vm + 0x90) = 3;
LAB_004e6750:
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
#undef fStack_4
}
