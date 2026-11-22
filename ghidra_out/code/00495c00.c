
void __thiscall FUN_00495c00(void *this,void *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int local_20 [4];
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054ac20;
  local_c = ExceptionList;
  uVar2 = (uint)((*(uint *)((int)this + 0xc) & 5) != 0);
  ExceptionList = &local_c;
  FUN_00496340(param_1,*(int **)(*(int *)this + uVar2 * 4),param_2,param_3,0);
  if (*(int **)((int)this + 4) != (int *)0x0) {
    DAT_0058364c = DAT_0058364c + 0x14;
    piVar6 = *(int **)((int)this + 4);
    piVar7 = local_20;
    for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar7 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar7 = piVar7 + 1;
    }
    iVar4 = *(int *)this;
    local_4 = 0;
    iVar5 = (*(int *)(iVar4 + 0x10) - local_20[3]) / 2;
    iVar3 = (*(int *)(iVar4 + 0x14) - local_10) / 2;
    if (iVar5 < 0) {
      local_20[1] = local_20[1] - iVar5;
      iVar5 = 0;
    }
    if (iVar3 < 0) {
      local_20[2] = local_20[2] - iVar3;
      iVar3 = 0;
    }
    iVar1 = *(int *)((uVar2 + 1) * 0x10 + iVar4);
    if (iVar1 <= local_20[3]) {
      local_20[3] = iVar1;
    }
    iVar4 = uVar2 * 0x10 + iVar4;
    if (*(int *)(iVar4 + 0x14) <= local_10) {
      local_10 = *(int *)(iVar4 + 0x14);
    }
    FUN_00496340(param_1,local_20,*(int *)(iVar4 + 8) + iVar5 + param_2,
                 *(int *)(iVar4 + 0xc) + iVar3 + param_3,0);
    DAT_0058364c = DAT_0058364c + -0x14;
  }
  if ((*(int *)((int)this + 0x10) != 0) && (*(int *)((int)this + 8) != 0)) {
    piVar6 = (int *)(uVar2 * 0x10 + 8 + *(int *)this);
    DAT_00583650 = DAT_00583650 + 0x10;
    local_20[2] = piVar6[2];
    local_20[3] = piVar6[3];
    local_20[0] = *piVar6 + param_2;
    local_20[1] = piVar6[1] + param_3;
    local_4 = 1;
    FUN_0047f230(*(void **)((int)this + 0x10),param_1,*(char **)((int)this + 8),local_20,2,-1,0);
    DAT_00583650 = DAT_00583650 + -0x10;
  }
  ExceptionList = local_c;
  return;
}


