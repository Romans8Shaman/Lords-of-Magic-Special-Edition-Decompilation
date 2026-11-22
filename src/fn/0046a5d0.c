/* Rebuilt from lomse.exe op_cameraorientation @ 0x0046a5d0 (355 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005876d0 (*(undefined4 *)0x005876d0)
#define FUN_00469c50 ((undefined4 (__thiscall *)(void *, float, float))0x00469c50)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00504ce0 ((undefined4 (__thiscall *)(void *, int, int))0x00504ce0)
#define _DAT_0054d7e8 (*(double *)0x0054d7e8)
#define _DAT_0054d7f0 (*(double *)0x0054d7f0)
#define _DAT_0054d818 (*(double *)0x0054d818)

#define LOM_SELF_0046a5d0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rb_0046a5d0(void *vm)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef void * _t_pvStack_4;
#define pvStack_4 (*(_t_pvStack_4 *)(_fr + 0x4))
  
  pvVar2 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    pvStack_4 = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar3 = 0;
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 == 1) {
    vm = __BC(void *, (float)(int)pvStack_4);
  }
  else if (uVar3 == 2) {
    vm = __BC(void *, ((float)(int)pvStack_4 * (float)_DAT_0054d818));
  }
  else {
    if (uVar3 != 4) goto LAB_0046a710;
    vm = pvStack_4;
  }
  if (*(int *)((int)pvVar2 + 0x54) < *(int *)((int)pvVar2 + 0x58)) {
    iVar1 = *(int *)((int)pvVar2 + 0x54) + 1;
    *(int *)((int)pvVar2 + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)pvVar2 + 0x50) + -8 + iVar1 * 8);
    pvStack_4 = *(void **)(*(int *)((int)pvVar2 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)pvVar2 + 0x90) = 6;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    uVar3 = 0;
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 == 1) {
    pvStack_4 = __BC(void *, (float)(int)pvStack_4);
  }
  else if (uVar3 == 2) {
    pvStack_4 = __BC(void *, ((float)(int)pvStack_4 * (float)_DAT_0054d818));
  }
  else if (uVar3 != 4) {
LAB_0046a710:
    *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    return;
  }
  FUN_00469c50(&DAT_005876d0,__BC(float, pvStack_4) * (float)_DAT_0054d7e8 * (float)_DAT_0054d7f0,
               __BC(float, vm) * (float)_DAT_0054d7e8 * (float)_DAT_0054d7f0);
  FUN_00504ce0(&DAT_00584ae8,1,0);
  return;
#undef pvStack_4
}
