/* Rebuilt from lomse.exe op_add @ 0x004ca900 (521 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0041d1d0 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x0041d1d0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define _DAT_0054dd10 (*(double *)0x0054dd10)
#define _DAT_0054dd18 (*(double *)0x0054dd18)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_004ca900 1
/* WARNING: Function: __ftol replaced with injection: ftol_pop */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rb_004ca900(void *vm)

{
  void *pvVar1;
  void *pvVar2;
  void *this;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef void * _t_pvStack_18;
  typedef uint _t_uStack_10;
  typedef void * _t_pvStack_4;
#define pvStack_18 (*(_t_pvStack_18 *)(_fr + 0x0))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x8))
#define pvStack_4 (*(_t_pvStack_4 *)(_fr + 0x14))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uVar5 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    pvStack_4 = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar5 = 0;
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uStack_10 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    pvVar6 = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uStack_10 = 0;
    pvVar6 = pvStack_4;
  }
  uVar5 = uVar5 & 0xff;
  if (uVar5 == 1) {
    pvVar1 = __BC(void *, (float)(int)pvStack_4);
    pvStack_18 = (void *)((int)pvStack_4 << 8);
    vm = pvStack_4;
  }
  else if (uVar5 == 2) {
    vm = (void *)((int)pvStack_4 >> 8);
    pvVar1 = __BC(void *, ((float)(int)pvStack_4 * (float)_DAT_0054dd18));
    pvStack_18 = pvStack_4;
  }
  else {
    if (uVar5 != 4) goto LAB_004caae2;
    pvStack_18 = (void *)(longlong)(__BC(float, pvStack_4) * (float)_DAT_0054dd10);
    vm = (void *)(longlong)__BC(float, pvStack_4);
    pvVar1 = pvStack_4;
  }
  uStack_10 = uStack_10 & 0xff;
  if (uStack_10 == 1) {
    pvVar2 = __BC(void *, (float)(int)pvVar6);
    pvVar7 = (void *)((int)pvVar6 << 8);
    pvVar4 = pvVar6;
  }
  else if (uStack_10 == 2) {
    pvVar2 = __BC(void *, ((float)(int)pvVar6 * (float)_DAT_0054dd18));
    pvVar4 = (void *)((int)pvVar6 >> 8);
    pvVar7 = pvVar6;
  }
  else {
    if (uStack_10 != 4) {
LAB_004caae2:
      *(undefined4 *)((int)this + 0x90) = 0xe;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      return;
    }
    pvVar4 = (void *)(longlong)__BC(float, pvVar6);
    pvVar7 = (void *)(longlong)(__BC(float, pvVar6) * (float)_DAT_0054dd10);
    pvVar2 = pvVar6;
  }
  if ((uVar5 == 4) || (uStack_10 == 4)) {
    FUN_0041d1d0(this,4,__BC(undefined4, __BC(float, pvVar2) + __BC(float, pvVar1)));
    return;
  }
  if ((uVar5 == 2) || (uStack_10 == 2)) {
    FUN_0041d1d0(this,2,(int)pvStack_18 + (int)pvVar7);
    return;
  }
  FUN_0041d1d0(this,1,(int)pvVar4 + (int)vm);
  return;
#undef pvStack_18
#undef uStack_10
#undef pvStack_4
}
