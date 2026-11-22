/* Rebuilt from lomse.exe FUN_00493520 @ 0x00493520 (531 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

/* register-held (not in _fr, see gen.py regvar_locals): local_8 */
#define DAT_00555f34 (*(int *)0x00555f34)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_00493a70 ((undefined4 (__fastcall *)(int))0x00493a70)
#define FUN_00493f80 ((undefined4 (__fastcall *)(int))0x00493f80)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_005047e0 ((undefined4 (__thiscall *)(void *, LPCSTR, LPCSTR, UINT))0x005047e0)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_Error__00555f64 (*(char (*)[])0x00555f64)
#define s_bad_amt_proc_bargraph_amt_proc_d_00555f38 (*(char (*)[])0x00555f38)

#define LOM_SELF_00493520 1
uint __fastcall rb_00493520(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 fVar9;
  longlong lVar10;
  undefined4 local_8;
  
  switch(*param_1) {
  case 7:
    return *(uint *)(param_1[1] + 0x1c) & 8;
  default:
    return 0;
  case 10:
    break;
  case 0xb:
    return *(uint *)(param_1[1] + 0x48);
  case 0xc:
    return *(uint *)(param_1[1] + 0x22c);
  case 0xe:
    return (uint)(*(byte *)(param_1[1] + 0x2c) | 1);
  case 0xf:
    uVar8 = FUN_00493a70(param_1[1]);
    return uVar8;
  case 0x10:
    uVar8 = FUN_00493f80(param_1[1]);
    return uVar8;
  }
  iVar3 = param_1[1];
  if (DAT_00555f34 == 0) {
    return 0;
  }
  uVar8 = *(uint *)(iVar3 + 0x20);
  fVar9 = *(undefined4 *)(iVar3 + 0x24);
  if ((char)uVar8 != '\x06') {
    return 0;
  }
  if ((uVar8 & 0x100) != 0) {
    return 0;
  }
  iVar7 = *(int *)((int)DAT_005a7b78 + 0xa78);
  FUN_004d05e0(DAT_005a7b78,uVar8,*(int **)(iVar3 + 0x24));
  pvVar5 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
    uVar8 = *(uint *)(*piVar1 + -8 + iVar6 * 8);
    fVar9 = *(undefined4 *)(*piVar1 + -4 + iVar6 * 8);
  }
  else {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
    FUN_004d4550(pvVar5);
    *(undefined4 *)((int)pvVar5 + 0x90) = 0;
    *(undefined4 *)((int)pvVar5 + 0xa4) = 0;
    uVar8 = 0;
  }
  uVar8 = uVar8 & 0xff;
  if (uVar8 == 1) {
    local_8 = fVar9;
  }
  else if (uVar8 == 2) {
    local_8 = __BC(undefined4, (__BC(int, fVar9) >> 8));
  }
  else {
    if (uVar8 != 4) {
      FUN_00404ab0(pvVar5,0xe);
      bVar4 = false;
      goto LAB_0043061d;
    }
    lVar10 = __ftol((float10)fVar9);
    local_8 = __BC(undefined4, lVar10);
  }
  bVar4 = true;
LAB_0043061d:
  if ((iVar7 == *(int *)((int)DAT_005a7b78 + 0xa78)) && (bVar4)) {
    return (uint)(local_8 != *(undefined4 *)(iVar3 + 0x28));
  }
  FUN_005047e0(&DAT_00584ae8,s_bad_amt_proc_bargraph_amt_proc_d_00555f38,s_Error__00555f64,0);
  pvVar5 = DAT_005a7b78;
  uVar2 = *(undefined4 *)(iVar3 + 0x28);
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar5);
    *(undefined4 *)((int)pvVar5 + 0x90) = 0;
    *(undefined4 *)((int)pvVar5 + 0xa4) = 0;
  }
  else {
    iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
    iVar7 = *(int *)((int)pvVar5 + 0x50);
    *(undefined4 *)(iVar7 + iVar6 * 8) = 1;
    *(undefined4 *)(iVar7 + 4 + iVar6 * 8) = uVar2;
  }
  pvVar5 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
    uVar2 = *(undefined4 *)(*piVar1 + -4 + iVar7 * 8);
    *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(*piVar1 + -8 + iVar7 * 8);
    *(undefined4 *)(iVar3 + 0x24) = uVar2;
    return 0;
  }
  *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
  FUN_004d4550(pvVar5);
  *(undefined4 *)((int)pvVar5 + 0x90) = 0;
  *(undefined4 *)((int)pvVar5 + 0xa4) = 0;
  *(undefined4 *)(iVar3 + 0x20) = 0;
  *(undefined4 *)(iVar3 + 0x24) = fVar9;
  return 0;
}
