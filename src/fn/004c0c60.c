/* Rebuilt from lomse.exe op_getplayernumbercontact @ 0x004c0c60 (226 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004bcb60 ((undefined4 (__thiscall *)(void *, int))0x004bcb60)
#define FUN_004bdce0 ((undefined4 (__cdecl *)(void *, undefined4 *))0x004bdce0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_004c0c60 1
void __cdecl rb_004c0c60(void *vm)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_4;
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0x4))
  
  pvVar1 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar4 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    uVar4 = 0;
  }
  uVar4 = uVar4 & 0xff;
  if (uVar4 != 1) {
    if (uVar4 == 2) {
      fStack_4 = __BC(float, (__BC(int, fStack_4) >> 8));
    }
    else {
      if (uVar4 != 4) {
        *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
        goto LAB_004c0d11;
      }
      lVar6 = __ftol((float10)fStack_4);
      fStack_4 = __BC(float, lVar6);
    }
  }
  iVar2 = FUN_004bdce0(pvVar1,&vm);
  if (iVar2 == 0) {
    return;
  }
  uVar3 = FUN_004bcb60(vm,__BC(int, fStack_4));
  if (*(int *)((int)pvVar1 + 0x54) != 0) {
    iVar5 = *(int *)((int)pvVar1 + 0x54) + -1;
    *(int *)((int)pvVar1 + 0x54) = iVar5;
    iVar2 = *(int *)((int)pvVar1 + 0x50);
    *(undefined4 *)(iVar2 + iVar5 * 8) = 1;
    *(undefined4 *)(iVar2 + 4 + iVar5 * 8) = uVar3;
    return;
  }
  *(undefined4 *)((int)pvVar1 + 0x90) = 3;
LAB_004c0d11:
  FUN_004d4550(pvVar1);
  *(undefined4 *)((int)pvVar1 + 0x90) = 0;
  *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  return;
#undef fStack_4
}
