/* Rebuilt from lomse.exe FUN_004d0e90 @ 0x004d0e90 (567 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005845ec (*(void * *)0x005845ec)
#define DAT_005845f0 (*(uint *)0x005845f0)
#define DAT_005845f4 (*(int * *)0x005845f4)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0041da00 ((undefined4 (__fastcall *)(int))0x0041da00)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_0053a320 ((undefined4 (__cdecl *)(undefined1 *, uint, uint, undefined *))0x0053a320)
#define LAB_004d0d40 (*(undefined *)0x004d0d40) /* code label used as address */

#define LOM_SELF_004d0e90 1
void __fastcall rb_004d0e90(void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  int *piVar6;
  uint uVar7;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_20;
  typedef uint _t_local_1c;
  typedef undefined4 _t_local_18;
  typedef undefined4 _t_local_14;
  typedef uint _t_local_10;
  typedef int * _t_local_c;
  typedef int * _t_local_4;
#define local_20 (*(_t_local_20 *)(_fr + 0x0))
#define local_1c (*(_t_local_1c *)(_fr + 0x4))
#define local_18 (*(_t_local_18 *)(_fr + 0x8))
#define local_14 (*(_t_local_14 *)(_fr + 0xc))
#define local_10 (*(_t_local_10 *)(_fr + 0x10))
#define local_c (*(_t_local_c *)(_fr + 0x14))
#define local_4 (*(_t_local_4 *)(_fr + 0x1c))
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar4 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar4;
    uVar7 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar4 * 8);
    local_4 = *(int **)(*(int *)((int)param_1 + 0x50) + -4 + iVar4 * 8);
  }
  else {
    FUN_00404ab0(param_1,6);
    uVar7 = 0;
  }
  iVar4 = FUN_0041da00((int)param_1);
  if (iVar4 == 0) {
    if (((char)uVar7 == '\x06') && ((uVar7 & 0x100) == 0)) goto LAB_004d0eef;
    FUN_00404ab0(param_1,0x12);
  }
  uVar7 = 0;
LAB_004d0eef:
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar4 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar4;
    local_10 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar4 * 8);
    local_c = *(int **)(*(int *)((int)param_1 + 0x50) + -4 + iVar4 * 8);
  }
  else {
    FUN_00404ab0(param_1,6);
    local_10 = 0;
    local_c = local_4;
  }
  iVar4 = FUN_004026a0(&local_10,&local_1c,(uint *)&local_14,&local_18);
  if (iVar4 == 0) {
    FUN_00404ab0(param_1,0xe);
    return;
  }
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar4 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar4;
    local_10 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar4 * 8);
    local_c = *(int **)(*(int *)((int)param_1 + 0x50) + -4 + iVar4 * 8);
  }
  else {
    FUN_00404ab0(param_1,6);
    local_10 = 0;
    local_c = local_4;
  }
  iVar4 = FUN_004026a0(&local_10,&local_20,(uint *)&local_18,&local_14);
  if (iVar4 == 0) {
    FUN_00404ab0(param_1,0xe);
    return;
  }
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar4 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar4;
    cVar5 = (char)*(undefined4 *)(*(int *)((int)param_1 + 0x50) + -8 + iVar4 * 8);
    piVar6 = *(int **)(*(int *)((int)param_1 + 0x50) + -4 + iVar4 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    cVar5 = '\0';
    piVar6 = local_4;
  }
  iVar4 = *(int *)((int)param_1 + 0x90);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  uVar3 = DAT_005845f4;
  uVar2 = DAT_005845f0;
  uVar1 = DAT_005845ec;
  if (iVar4 == 0) {
    if (cVar5 == '\x06') {
      if ((-1 < (int)local_20) && ((int)local_1c < piVar6[1])) {
        DAT_005845f4 = local_4;
        if ((int)local_20 < (int)local_1c) {
          DAT_005845ec = param_1;
          DAT_005845f0 = uVar7;
          FUN_0053a320((undefined1 *)(*piVar6 + local_20 * 8),(local_1c - local_20) + 1,8,
                       &LAB_004d0d40);
        }
        DAT_005845f0 = uVar2;
        DAT_005845f4 = (int *)uVar3;
        DAT_005845ec = (void *)uVar1;
        return;
      }
      *(undefined4 *)((int)param_1 + 0x90) = 0xf;
    }
    else {
      *(undefined4 *)((int)param_1 + 0x90) = 0xe;
    }
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
  }
  return;
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_10
#undef local_c
#undef local_4
}
