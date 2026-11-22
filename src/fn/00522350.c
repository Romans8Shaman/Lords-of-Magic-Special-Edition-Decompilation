/* Rebuilt from lomse.exe FUN_00522350 @ 0x00522350 (603 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005d2f40 (*(uint *)0x005d2f40)
#define DAT_005d2f44 (*(int * *)0x005d2f44)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_00522350 1
undefined4 __stdcall rb_00522350(uint volatile param_1, undefined4 volatile param_2, uint *volatile param_3)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_8;
  typedef undefined4 _t_local_4;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  puVar5 = param_3;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  pvVar2 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  else {
    iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
    iVar4 = *(int *)((int)pvVar2 + 0x50);
    *(undefined4 *)(iVar4 + iVar3 * 8) = 1;
    *(uint *)(iVar4 + 4 + iVar3 * 8) = param_1;
  }
  pvVar2 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    FUN_00404ab0(DAT_005a7b78,3);
  }
  else {
    iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
    iVar4 = *(int *)((int)pvVar2 + 0x50);
    *(undefined4 *)(iVar4 + iVar3 * 8) = 1;
    *(undefined4 *)(iVar4 + 4 + iVar3 * 8) = param_2;
  }
  FUN_004d05e0(DAT_005a7b78,DAT_005d2f40,DAT_005d2f44);
  pvVar2 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
    local_8 = *(uint *)(*piVar1 + -8 + iVar4 * 8);
    local_4 = *(undefined4 *)(*piVar1 + -4 + iVar4 * 8);
  }
  else {
    FUN_00404ab0(DAT_005a7b78,6);
    local_8 = 0;
  }
  iVar4 = FUN_004026a0(&local_8,&param_1,puVar5 + 4,(undefined4 *)&param_3);
  if (iVar4 == 0) {
    FUN_00404ab0(pvVar2,0xe);
  }
  pvVar2 = DAT_005a7b78;
  FUN_0040adb0(DAT_005a7b78,&local_8);
  iVar4 = FUN_004026a0(&local_8,&param_1,puVar5 + 3,(undefined4 *)&param_3);
  if (iVar4 == 0) {
    *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  pvVar2 = DAT_005a7b78;
  FUN_0040adb0(DAT_005a7b78,&local_8);
  iVar4 = FUN_004026a0(&local_8,&param_1,puVar5 + 2,(undefined4 *)&param_3);
  if (iVar4 == 0) {
    *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  pvVar2 = DAT_005a7b78;
  FUN_0040adb0(DAT_005a7b78,&local_8);
  iVar4 = FUN_004026a0(&local_8,&param_1,puVar5 + 1,(undefined4 *)&param_3);
  if (iVar4 == 0) {
    *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  pvVar2 = DAT_005a7b78;
  FUN_0040adb0(DAT_005a7b78,&local_8);
  iVar4 = FUN_004026a0(&local_8,&param_1,puVar5,(undefined4 *)&param_3);
  if (iVar4 == 0) {
    *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  iVar4 = 5;
  do {
    *puVar5 = -*puVar5;
    iVar4 = iVar4 + -1;
    puVar5 = puVar5 + 1;
  } while (iVar4 != 0);
  return 1;
#undef local_8
#undef local_4
}
