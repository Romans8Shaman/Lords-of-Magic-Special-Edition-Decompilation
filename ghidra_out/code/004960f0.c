
void __thiscall
FUN_004960f0(void *this,int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int local_20 [4];
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar5 = param_1;
  puStack_8 = &LAB_0054ac78;
  local_c = ExceptionList;
  DAT_0058364c = DAT_0058364c + 0x14;
  local_20[0] = 0;
  local_10 = (int *)0x0;
  local_20[3] = 0;
  local_20[2] = 0;
  local_20[1] = 0;
  local_4 = 0;
  iVar2 = param_1[4];
  iVar1 = param_4 / iVar2;
  if (param_5 == 0) {
    ExceptionList = &local_c;
    param_1 = (int *)(param_4 % iVar2);
  }
  else {
    iVar1 = param_5 % iVar2;
    if (iVar1 < 0) {
      iVar1 = iVar1 + iVar2;
    }
    iVar2 = iVar2 - iVar1;
    piVar4 = param_1;
    piVar6 = local_20;
    for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar6 = piVar6 + 1;
    }
    local_20[2] = local_20[2] + iVar1;
    ExceptionList = &local_c;
    local_10 = (int *)iVar2;
    FUN_00496340(this,local_20,param_2,param_3,0);
    param_3 = param_3 + iVar2;
    iVar1 = (param_4 - iVar2) / param_1[4];
    param_1 = (int *)((param_4 - iVar2) % param_1[4]);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      FUN_00496340(this,piVar5,param_2,iVar2 * piVar5[4] + param_3,0);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  if (param_1 != (int *)0x0) {
    iVar2 = piVar5[4];
    piVar4 = local_20;
    for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar4 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar4 = piVar4 + 1;
    }
    local_10 = param_1;
    FUN_00496340(this,local_20,param_2,iVar1 * iVar2 + param_3,0);
  }
  DAT_0058364c = DAT_0058364c + -0x14;
  ExceptionList = local_c;
  return;
}


