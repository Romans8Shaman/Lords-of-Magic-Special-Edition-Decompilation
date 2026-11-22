/* Rebuilt from lomse.exe FUN_00529a90 @ 0x00529a90 (528 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)
#define DAT_005d2f48 (*(uint *)0x005d2f48)
#define DAT_005d2f4c (*(int * *)0x005d2f4c)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, float *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_00529a90 1
void __stdcall rb_00529a90(float param_1,uint param_2,int *param_3,uint *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_8;
  typedef float _t_local_4;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  pvVar4 = DAT_005a7b78;
  if (((__BC(int, param_1) < 0) || (DAT_005cd2f0 <= __BC(int, param_1))) || (DAT_005cd2f4 == 0)) {
    iVar8 = 0;
  }
  else {
    iVar8 = DAT_005cd2f4 + __BC(int, param_1) * 1000;
  }
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar4);
    *(undefined4 *)((int)pvVar4 + 0x90) = 0;
    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
  }
  else {
    iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
    iVar7 = *(int *)((int)pvVar4 + 0x50);
    *(undefined4 *)(iVar7 + iVar6 * 8) = 1;
    *(uint *)(iVar7 + 4 + iVar6 * 8) = param_2;
  }
  pvVar4 = DAT_005a7b78;
  uVar2 = *(undefined4 *)(iVar8 + 0x14c);
  uVar3 = *(undefined4 *)(iVar8 + 0x150);
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar4);
    *(undefined4 *)((int)pvVar4 + 0x90) = 0;
    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
  }
  else {
    iVar8 = *(int *)((int)DAT_005a7b78 + 0x50);
    iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
    *(undefined4 *)(iVar8 + iVar7 * 8) = uVar2;
    *(undefined4 *)(iVar8 + 4 + iVar7 * 8) = uVar3;
  }
  FUN_004d05e0(DAT_005a7b78,DAT_005d2f48,DAT_005d2f4c);
  puVar5 = param_4;
  *param_3 = 0;
  *param_4 = 0;
  pvVar4 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
    local_8 = *(uint *)(*piVar1 + -8 + iVar8 * 8);
    local_4 = *(float *)(*piVar1 + -4 + iVar8 * 8);
  }
  else {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
    FUN_004d4550(pvVar4);
    *(undefined4 *)((int)pvVar4 + 0x90) = 0;
    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
    local_8 = 0;
  }
  iVar8 = FUN_004026a0(&local_8,puVar5,&param_2,&param_1);
  if (iVar8 == 0) {
    *(undefined4 *)((int)pvVar4 + 0x90) = 0xe;
    FUN_004d4550(pvVar4);
    *(undefined4 *)((int)pvVar4 + 0x90) = 0;
    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
  }
  pvVar4 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
    uVar9 = *(uint *)(*piVar1 + -8 + iVar8 * 8);
    local_4 = *(float *)(*piVar1 + -4 + iVar8 * 8);
  }
  else {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
    FUN_004d4550(pvVar4);
    *(undefined4 *)((int)pvVar4 + 0x90) = 0;
    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
    uVar9 = 0;
  }
  uVar9 = uVar9 & 0xff;
  if (uVar9 == 1) {
    *param_3 = __BC(int, local_4);
    return;
  }
  if (uVar9 == 2) {
    *param_3 = __BC(int, local_4) >> 8;
    return;
  }
  if (uVar9 == 4) {
    lVar10 = __ftol((float10)local_4);
    *param_3 = (int)lVar10;
    return;
  }
  FUN_00404ab0(pvVar4,0xe);
  return;
#undef local_8
#undef local_4
}
