
undefined4 __thiscall
FUN_004806b0(void *this,int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int local_200 [5];
  int local_1eb [4];
  undefined4 local_1db;
  int local_1d7;
  uint local_1d3;
  undefined4 local_1cf;
  int local_f8 [59];
  undefined4 local_c;
  
  FUN_0048cc70(local_200,0xd);
  uVar1 = FUN_00482ac0(this,param_1,0);
  if (uVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_00420580(uVar1);
  if ((iVar2 == 0) && ((*(byte *)(uVar1 + 0x30) & 0x12) != 0)) {
    return 0;
  }
  *(uint *)(uVar1 + 0x30) = *(uint *)(uVar1 + 0x30) | 2;
  local_1eb[0] = param_1;
  local_1eb[2] = param_2;
  local_1d7 = FUN_004a51c0((void *)((int)this + 0x482c),param_3,param_4);
  local_1eb[1] = 0xffffffff;
  local_1cf = 0xffffffff;
  local_1db = *(undefined4 *)(uVar1 + 0x1c);
  DVar3 = GetTickCount();
  piVar5 = local_1eb;
  piVar6 = local_f8;
  for (iVar2 = 0x3b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar6 = *piVar5;
    piVar5 = piVar5 + 1;
    piVar6 = piVar6 + 1;
  }
  local_c = 0;
  iVar2 = FUN_004b1260((void *)((int)this + 0x482c),local_f8,param_3,param_4);
  if (iVar2 != 0) {
    DAT_005834d8 = 0;
    *(uint *)(uVar1 + 0x30) = *(uint *)(uVar1 + 0x30) & 0xffffff7f;
    local_1d3 = -(uint)(param_5 != 0) & 0x40;
    uVar4 = FUN_00480850(local_200);
    return uVar4;
  }
  DAT_005834d8 = DAT_005834d8 + 1;
  if ((DVar3 - DAT_005834d4 < 100) || (3 < DAT_005834d8)) {
    DAT_005834d8 = 0;
  }
  DAT_005834d4 = GetTickCount();
  OutputDebugStringA(s_FindMove_failed_0055b1e8);
  MessageBeep(0x30);
  *(uint *)(uVar1 + 0x30) = *(uint *)(uVar1 + 0x30) & 0xfffffffd | 0x80;
  return 0;
}


