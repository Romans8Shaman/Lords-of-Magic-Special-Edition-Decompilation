/* Rebuilt from lomse.exe op_findmatchingbrain @ 0x00410610 (332 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aeed0 (*(undefined *)0x005aeed0)
#define FUN_0040f1c0 ((int (__thiscall *)(void *, int, uint, undefined4, int))0x0040f1c0)
#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_00410610 1
void __cdecl rb_00410610(void *vm)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_4;
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0x4))
  
  pvVar2 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uVar7 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    uVar7 = 0;
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  if ((char)uVar7 == '\0') {
    return;
  }
  if (*(int *)((int)pvVar2 + 0x54) < *(int *)((int)pvVar2 + 0x58)) {
    iVar3 = *(int *)((int)pvVar2 + 0x54) + 1;
    *(int *)((int)pvVar2 + 0x54) = iVar3;
    uVar5 = *(uint *)(*(int *)((int)pvVar2 + 0x50) + -8 + iVar3 * 8);
    fVar4 = *(float *)(*(int *)((int)pvVar2 + 0x50) + -4 + iVar3 * 8);
  }
  else {
    *(undefined4 *)((int)pvVar2 + 0x90) = 6;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    uVar5 = 0;
    fVar4 = fStack_4;
  }
  uVar5 = uVar5 & 0xff;
  if (uVar5 != 1) {
    if (uVar5 == 2) {
      fVar4 = __BC(float, (__BC(int, fVar4) >> 8));
    }
    else {
      if (uVar5 != 4) {
        *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
        goto LAB_0041072a;
      }
      lVar8 = __ftol((float10)fVar4);
      fVar4 = __BC(float, lVar8);
    }
  }
  iVar3 = FUN_0041be40(pvVar2,&vm);
  if (iVar3 == 0) {
    return;
  }
  iVar3 = FUN_0040f1c0(&DAT_005aeed0,(int)vm,__BC(uint, fVar4),uVar7,__BC(int, fStack_4));
  if (*(int *)((int)pvVar2 + 0x54) != 0) {
    iVar6 = *(int *)((int)pvVar2 + 0x54) + -1;
    *(int *)((int)pvVar2 + 0x54) = iVar6;
    iVar1 = *(int *)((int)pvVar2 + 0x50);
    *(undefined4 *)(iVar1 + iVar6 * 8) = 1;
    *(int *)(iVar1 + 4 + iVar6 * 8) = iVar3;
    return;
  }
  *(undefined4 *)((int)pvVar2 + 0x90) = 3;
LAB_0041072a:
  FUN_004d4550(pvVar2);
  *(undefined4 *)((int)pvVar2 + 0x90) = 0;
  *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  return;
#undef fStack_4
}
