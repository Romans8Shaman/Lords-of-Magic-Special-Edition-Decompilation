/* Rebuilt from lomse.exe op_sub @ 0x004cab10 (562 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0041d1d0 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x0041d1d0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define _DAT_0054dd10 (*(double *)0x0054dd10)
#define _DAT_0054dd18 (*(double *)0x0054dd18)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_004cab10 1
/* WARNING: Function: __ftol replaced with injection: ftol_pop */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rb_004cab10(void *vm)

{
  void *pvVar1;
  void *this;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  void *pvVar7;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_8;
  typedef void * _t_pvStack_4;
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x0))
#define pvStack_4 (*(_t_pvStack_4 *)(_fr + 0x4))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    pvStack_4 = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uStack_8 = 0;
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar6 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    pvVar3 = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar6 = 0;
    pvVar3 = pvStack_4;
  }
  uVar6 = uVar6 & 0xff;
  if (uVar6 == 1) {
    pvVar1 = __BC(void *, (float)(int)pvVar3);
    pvVar5 = (void *)((int)pvVar3 << 8);
    pvVar7 = pvVar3;
  }
  else if (uVar6 == 2) {
    pvVar1 = __BC(void *, ((float)(int)pvVar3 * (float)_DAT_0054dd18));
    pvVar5 = pvVar3;
    pvVar7 = (void *)((int)pvVar3 >> 8);
  }
  else {
    if (uVar6 != 4) {
      *(undefined4 *)((int)vm + 0x90) = 0xe;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      return;
    }
    pvVar5 = (void *)(longlong)(__BC(float, pvVar3) * (float)_DAT_0054dd10);
    pvVar7 = (void *)(longlong)__BC(float, pvVar3);
    pvVar1 = pvVar3;
  }
  uStack_8 = uStack_8 & 0xff;
  if (uStack_8 == 1) {
    pvVar3 = __BC(void *, (float)(int)pvStack_4);
    vm = (void *)((int)pvStack_4 << 8);
    pvVar4 = pvStack_4;
  }
  else if (uStack_8 == 2) {
    pvVar3 = __BC(void *, ((float)(int)pvStack_4 * (float)_DAT_0054dd18));
    pvVar4 = (void *)((int)pvStack_4 >> 8);
    vm = pvStack_4;
  }
  else {
    if (uStack_8 != 4) {
      *(undefined4 *)((int)vm + 0x90) = 0xe;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      return;
    }
    vm = (void *)(longlong)(__BC(float, pvStack_4) * (float)_DAT_0054dd10);
    pvVar4 = (void *)(longlong)__BC(float, pvStack_4);
    pvVar3 = pvStack_4;
  }
  if ((uVar6 == 4) || (uStack_8 == 4)) {
    FUN_0041d1d0(this,4,__BC(undefined4, __BC(float, pvVar1) - __BC(float, pvVar3)));
    return;
  }
  if ((uVar6 == 2) || (uStack_8 == 2)) {
    FUN_0041d1d0(this,2,(int)pvVar5 - (int)vm);
    return;
  }
  FUN_0041d1d0(this,1,(int)pvVar7 - (int)pvVar4);
  return;
#undef uStack_8
#undef pvStack_4
}
