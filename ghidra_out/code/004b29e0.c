
void __thiscall FUN_004b29e0(void *this,int param_1,int param_2,char *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined *puVar5;
  undefined4 uVar6;
  byte *pbVar7;
  DWORD DVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  uint local_30;
  float local_2c;
  uint local_28;
  uint local_24;
  byte *local_20;
  int local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0054b428;
  local_c = ExceptionList;
  iVar11 = DAT_00583650 + 0x10;
  local_1c[3] = 0;
  local_1c[2] = 0;
  local_1c[1] = 0;
  local_1c[0] = 0;
  local_4 = 0;
  if (((param_1 != DAT_005a7d8c) && (param_2 != -1)) && (param_2 != DAT_005a7d8c)) {
    return;
  }
  piVar2 = (int *)((int)this + param_1 * 200 + 0x1a0);
  DAT_00583650 = iVar11;
  ExceptionList = &local_c;
  if (*piVar2 != 0) {
    ExceptionList = &local_c;
    FUN_004b2820(piVar2);
  }
  if ((param_1 < 0) || (0xf < param_1)) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = &DAT_005af194 + param_1 * 0x1d84;
  }
  if (puVar5 == (undefined *)0x0) {
    DAT_00583650 = DAT_00583650 + -0x10;
    ExceptionList = local_c;
    return;
  }
  uVar6 = FUN_00483c50(this,param_1);
  pvVar4 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar4);
    *(undefined4 *)((int)pvVar4 + 0x90) = 0;
    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
  }
  else {
    iVar10 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar10;
    iVar11 = *(int *)((int)pvVar4 + 0x50);
    *(undefined4 *)(iVar11 + iVar10 * 8) = 1;
    *(undefined4 *)(iVar11 + 4 + iVar10 * 8) = uVar6;
  }
  FUN_004d05e0(DAT_005a7b78,*(uint *)((int)this + 0x5d4),*(int **)((int)this + 0x5d8));
  pvVar4 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar12 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar11 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar11;
    cVar9 = (char)*(undefined4 *)(*piVar12 + -8 + iVar11 * 8);
    pbVar7 = *(byte **)(*piVar12 + -4 + iVar11 * 8);
  }
  else {
    FUN_00404ab0(DAT_005a7b78,6);
    cVar9 = '\0';
    pbVar7 = local_20;
  }
  iVar11 = *(int *)((int)pvVar4 + 0x90);
  *(undefined4 *)((int)pvVar4 + 0x90) = 0;
  *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
  if (iVar11 == 0) {
    if (cVar9 == '\b') goto LAB_004b2b6c;
    *(undefined4 *)((int)pvVar4 + 0x90) = 0xe;
    FUN_004d4550(pvVar4);
    *(undefined4 *)((int)pvVar4 + 0x90) = 0;
    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
  }
  pbVar7 = (byte *)0x0;
LAB_004b2b6c:
  FUN_00495370(piVar2 + 0x1a,pbVar7);
  piVar12 = piVar2 + 2;
  FUN_004952c0(piVar12,0x280,0xe,1);
  FUN_00497270(piVar12,0,0,piVar2[3],piVar2[4],0);
  pvVar4 = DAT_005a7b78;
  local_1c[0] = 0;
  local_1c[1] = 0;
  local_1c[2] = 0x27f;
  local_1c[3] = 0xe;
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar4);
    *(undefined4 *)((int)pvVar4 + 0x90) = 0;
    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
  }
  else {
    iVar11 = *(int *)((int)DAT_005a7b78 + 0x50);
    iVar10 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar10;
    *(undefined4 *)(iVar11 + iVar10 * 8) = 1;
    *(int *)(iVar11 + 4 + iVar10 * 8) = param_1;
  }
  FUN_004d05e0(DAT_005a7b78,*(uint *)((int)this + 0x5dc),*(int **)((int)this + 0x5e0));
  pvVar4 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar11 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar11;
    local_24 = *(uint *)(*piVar1 + -8 + iVar11 * 8);
    local_20 = *(byte **)(*piVar1 + -4 + iVar11 * 8);
  }
  else {
    FUN_00404ab0(DAT_005a7b78,6);
    local_24 = 0;
  }
  iVar11 = FUN_004026a0(&local_24,&local_30,&local_28,&local_2c);
  if (iVar11 == 0) {
    *(undefined4 *)((int)pvVar4 + 0x90) = 0xe;
    FUN_004d4550(pvVar4);
    *(undefined4 *)((int)pvVar4 + 0x90) = 0;
    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
  }
  if ((int)local_30 < 0) {
    uVar6 = *(undefined4 *)(**(int **)((int)this + 0x518) + 0x10);
  }
  else {
    uVar6 = FUN_004b9e00(&DAT_005cd34c,local_30);
  }
  uVar3 = *(undefined4 *)(**(int **)((int)this + 0x518) + 0x10);
  *(undefined4 *)(**(int **)((int)this + 0x518) + 0x10) = uVar6;
  switch(param_1) {
  case 0:
  case 2:
    iVar11 = 1;
    break;
  case 1:
  case 3:
    iVar11 = 1;
    break;
  default:
    iVar11 = 2;
  }
  FUN_0047f230(*(void **)((int)this + 0x518),piVar12,param_3,local_1c,iVar11,-1,0);
  *(undefined4 *)(**(int **)((int)this + 0x518) + 0x10) = uVar3;
  *piVar2 = 1;
  DVar8 = GetTickCount();
  piVar2[1] = DVar8;
  DAT_00583650 = DAT_00583650 + -0x10;
  ExceptionList = local_c;
  return;
}


