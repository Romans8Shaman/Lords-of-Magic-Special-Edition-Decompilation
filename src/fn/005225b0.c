/* Rebuilt from lomse.exe FUN_005225b0 @ 0x005225b0 (619 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005d2f30 (*(uint *)0x005d2f30)
#define DAT_005d2f34 (*(int * *)0x005d2f34)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_005225b0 1
undefined4 __cdecl rb_005225b0(uint volatile param_1, undefined4 volatile param_2, int volatile param_3, uint *volatile param_4)

{
  int *piVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_8;
  typedef undefined4 _t_local_4;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  puVar4 = param_4;
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  param_4[3] = 0;
  param_4[4] = 0;
  pvVar3 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar3);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
  }
  else {
    iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
    iVar6 = *(int *)((int)pvVar3 + 0x50);
    *(undefined4 *)(iVar6 + iVar5 * 8) = 1;
    *(uint *)(iVar6 + 4 + iVar5 * 8) = param_1;
  }
  pvVar3 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    FUN_00404ab0(DAT_005a7b78,3);
  }
  else {
    iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
    iVar6 = *(int *)((int)pvVar3 + 0x50);
    *(undefined4 *)(iVar6 + iVar5 * 8) = 1;
    *(undefined4 *)(iVar6 + 4 + iVar5 * 8) = param_2;
  }
  pvVar3 = DAT_005a7b78;
  uVar2 = *(undefined4 *)(param_3 + 0x28);
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    FUN_00404ab0(DAT_005a7b78,3);
  }
  else {
    iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
    iVar6 = *(int *)((int)pvVar3 + 0x50);
    *(undefined4 *)(iVar6 + iVar5 * 8) = 1;
    *(undefined4 *)(iVar6 + 4 + iVar5 * 8) = uVar2;
  }
  FUN_004d05e0(DAT_005a7b78,DAT_005d2f30,DAT_005d2f34);
  pvVar3 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
    local_8 = *(uint *)(*piVar1 + -8 + iVar6 * 8);
    local_4 = *(undefined4 *)(*piVar1 + -4 + iVar6 * 8);
  }
  else {
    FUN_00404ab0(DAT_005a7b78,6);
    local_8 = 0;
  }
  iVar6 = FUN_004026a0(&local_8,&param_1,puVar4 + 4,(undefined4 *)&param_4);
  if (iVar6 == 0) {
    FUN_00404ab0(pvVar3,0xe);
  }
  pvVar3 = DAT_005a7b78;
  FUN_0040adb0(DAT_005a7b78,&local_8);
  iVar6 = FUN_004026a0(&local_8,&param_1,puVar4 + 3,(undefined4 *)&param_4);
  if (iVar6 == 0) {
    *(undefined4 *)((int)pvVar3 + 0x90) = 0xe;
    FUN_004d4550(pvVar3);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
  }
  pvVar3 = DAT_005a7b78;
  FUN_0040adb0(DAT_005a7b78,&local_8);
  iVar6 = FUN_004026a0(&local_8,&param_1,puVar4 + 2,(undefined4 *)&param_4);
  if (iVar6 == 0) {
    *(undefined4 *)((int)pvVar3 + 0x90) = 0xe;
    FUN_004d4550(pvVar3);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
  }
  pvVar3 = DAT_005a7b78;
  FUN_0040adb0(DAT_005a7b78,&local_8);
  iVar6 = FUN_004026a0(&local_8,&param_1,puVar4 + 1,(undefined4 *)&param_4);
  if (iVar6 == 0) {
    *(undefined4 *)((int)pvVar3 + 0x90) = 0xe;
    FUN_004d4550(pvVar3);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
  }
  pvVar3 = DAT_005a7b78;
  FUN_0040adb0(DAT_005a7b78,&local_8);
  iVar6 = FUN_004026a0(&local_8,&param_1,puVar4,(undefined4 *)&param_4);
  if (iVar6 == 0) {
    FUN_00404ab0(pvVar3,0xe);
  }
  return 1;
#undef local_8
#undef local_4
}
