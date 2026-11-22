/* Rebuilt from lomse.exe FUN_00529e40 @ 0x00529e40 (480 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005d2f48 (*(uint *)0x005d2f48)
#define DAT_005d2f4c (*(int * *)0x005d2f4c)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, float *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00521e00 ((int (__fastcall *)(int *))0x00521e00)
#define FUN_005228b0 ((int (__thiscall *)(void *, undefined4, undefined4))0x005228b0)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_00529e40 1
void __thiscall rb_00529e40(void *this, uint volatile param_1, float volatile param_2, uint *volatile param_3, int *volatile param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_8;
  typedef float _t_local_4;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  iVar7 = FUN_00521e00(this);
  iVar8 = FUN_005228b0(this,param_1,__BC(undefined4, param_2));
  pvVar6 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar6);
    *(undefined4 *)((int)pvVar6 + 0x90) = 0;
    *(undefined4 *)((int)pvVar6 + 0xa4) = 0;
  }
  else {
    iVar10 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar10;
    iVar3 = *(int *)((int)pvVar6 + 0x50);
    *(undefined4 *)(iVar3 + iVar10 * 8) = 1;
    *(int *)(iVar3 + 4 + iVar10 * 8) = iVar8;
  }
  pvVar6 = DAT_005a7b78;
  uVar4 = *(undefined4 *)(iVar7 + 0x14c);
  uVar5 = *(undefined4 *)(iVar7 + 0x150);
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar6);
    *(undefined4 *)((int)pvVar6 + 0x90) = 0;
    *(undefined4 *)((int)pvVar6 + 0xa4) = 0;
  }
  else {
    iVar7 = *(int *)((int)DAT_005a7b78 + 0x50);
    iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
    *(undefined4 *)(iVar7 + iVar8 * 8) = uVar4;
    *(undefined4 *)(iVar7 + 4 + iVar8 * 8) = uVar5;
  }
  FUN_004d05e0(DAT_005a7b78,DAT_005d2f48,DAT_005d2f4c);
  piVar2 = param_4;
  *param_3 = 0;
  *param_4 = 0;
  pvVar6 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
    uVar9 = *(uint *)(*piVar1 + -8 + iVar7 * 8);
    local_4 = *(float *)(*piVar1 + -4 + iVar7 * 8);
  }
  else {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
    FUN_004d4550(pvVar6);
    *(undefined4 *)((int)pvVar6 + 0x90) = 0;
    *(undefined4 *)((int)pvVar6 + 0xa4) = 0;
    uVar9 = 0;
  }
  uVar9 = uVar9 & 0xff;
  if (uVar9 == 1) {
    *piVar2 = __BC(int, local_4);
  }
  else if (uVar9 == 2) {
    *piVar2 = __BC(int, local_4) >> 8;
  }
  else if (uVar9 == 4) {
    lVar11 = __ftol((float10)local_4);
    *piVar2 = (int)lVar11;
  }
  else {
    FUN_00404ab0(pvVar6,0xe);
  }
  pvVar6 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar2 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
    local_8 = *(uint *)(*piVar2 + -8 + iVar7 * 8);
    local_4 = *(float *)(*piVar2 + -4 + iVar7 * 8);
  }
  else {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
    FUN_004d4550(pvVar6);
    *(undefined4 *)((int)pvVar6 + 0x90) = 0;
    *(undefined4 *)((int)pvVar6 + 0xa4) = 0;
    local_8 = 0;
  }
  iVar7 = FUN_004026a0(&local_8,param_3,&param_1,&param_2);
  if (iVar7 == 0) {
    *(undefined4 *)((int)pvVar6 + 0x90) = 0xe;
    FUN_004d4550(pvVar6);
    *(undefined4 *)((int)pvVar6 + 0x90) = 0;
    *(undefined4 *)((int)pvVar6 + 0xa4) = 0;
  }
  return;
#undef local_8
#undef local_4
}
