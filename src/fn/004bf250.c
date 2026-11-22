/* Rebuilt from lomse.exe op_isspellknown_q @ 0x004bf250 (237 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004bdce0 ((undefined4 (__cdecl *)(void *, undefined4 *))0x004bdce0)
#define FUN_004beef0 ((undefined4 (__thiscall *)(void *, int))0x004beef0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_004bf250 1
void __cdecl rb_004bf250(void *vm)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_4;
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0x4))
  
  pvVar2 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uVar4 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    uVar4 = 0;
  }
  uVar4 = uVar4 & 0xff;
  if (uVar4 != 1) {
    if (uVar4 == 2) {
      fStack_4 = __BC(float, (__BC(int, fStack_4) >> 8));
    }
    else {
      if (uVar4 != 4) {
        *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
        goto LAB_004bf30c;
      }
      lVar6 = __ftol((float10)fStack_4);
      fStack_4 = __BC(float, lVar6);
    }
  }
  iVar3 = FUN_004bdce0(pvVar2,&vm);
  if (iVar3 == 0) {
    return;
  }
  iVar3 = FUN_004beef0((void *)((int)vm + 0x34),__BC(int, fStack_4));
  if (*(int *)((int)pvVar2 + 0x54) != 0) {
    iVar5 = *(int *)((int)pvVar2 + 0x54) + -1;
    *(int *)((int)pvVar2 + 0x54) = iVar5;
    iVar1 = *(int *)((int)pvVar2 + 0x50);
    *(undefined4 *)(iVar1 + iVar5 * 8) = 1;
    *(uint *)(iVar1 + 4 + iVar5 * 8) = -(uint)(iVar3 != 0);
    return;
  }
  *(undefined4 *)((int)pvVar2 + 0x90) = 3;
LAB_004bf30c:
  FUN_004d4550(pvVar2);
  *(undefined4 *)((int)pvVar2 + 0x90) = 0;
  *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  return;
#undef fStack_4
}
