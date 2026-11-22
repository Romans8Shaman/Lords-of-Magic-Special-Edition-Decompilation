/* Rebuilt from lomse.exe op_setplayerindicatoraura @ 0x004bc450 (309 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0042d620 ((undefined4 (__thiscall *)(void *, uint))0x0042d620)
#define FUN_0042d750 ((undefined4 (__thiscall *)(void *, int, undefined4, int))0x0042d750)
#define FUN_004bdce0 ((undefined4 (__cdecl *)(void *, undefined4 *))0x004bdce0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_004bc450 1
void __cdecl rb_004bc450(void *vm)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  longlong lVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_4;
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0x4))
  
  pvVar1 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    uVar2 = 0;
  }
  uVar2 = uVar2 & 0xff;
  fVar4 = fStack_4;
  if (uVar2 != 1) {
    if (uVar2 == 2) {
      fVar4 = __BC(float, (__BC(int, fStack_4) >> 8));
    }
    else {
      if (uVar2 != 4) goto LAB_004bc561;
      lVar5 = __ftol((float10)fStack_4);
      fVar4 = __BC(float, lVar5);
    }
  }
  if (*(int *)((int)pvVar1 + 0x54) < *(int *)((int)pvVar1 + 0x58)) {
    iVar3 = *(int *)((int)pvVar1 + 0x54) + 1;
    *(int *)((int)pvVar1 + 0x54) = iVar3;
    uVar2 = *(uint *)(*(int *)((int)pvVar1 + 0x50) + -8 + iVar3 * 8);
    fStack_4 = *(float *)(*(int *)((int)pvVar1 + 0x50) + -4 + iVar3 * 8);
  }
  else {
    *(undefined4 *)((int)pvVar1 + 0x90) = 6;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    uVar2 = 0;
  }
  uVar2 = uVar2 & 0xff;
  if (uVar2 != 1) {
    if (uVar2 == 2) {
      fStack_4 = __BC(float, (__BC(int, fStack_4) >> 8));
    }
    else {
      if (uVar2 != 4) {
LAB_004bc561:
        *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
        FUN_004d4550(pvVar1);
        *(undefined4 *)((int)pvVar1 + 0x90) = 0;
        *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
        return;
      }
      lVar5 = __ftol((float10)fStack_4);
      fStack_4 = __BC(float, lVar5);
    }
  }
  iVar3 = FUN_004bdce0(pvVar1,&vm);
  if (iVar3 != 0) {
    FUN_0042d750(vm,__BC(int, fStack_4),__BC(undefined4, fVar4),-1);
    FUN_0042d620(vm,3);
  }
  return;
#undef fStack_4
}
