
void __thiscall
FUN_00496250(void *this,int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  void **ppvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int local_20 [5];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0054ac98;
  local_c = ExceptionList;
  iVar5 = 0;
  DAT_0058364c = DAT_0058364c + 0x14;
  local_20[0] = 0;
  local_20[4] = 0;
  local_20[3] = 0;
  local_20[2] = 0;
  local_20[1] = 0;
  local_4 = 0;
  iVar2 = param_5 / param_1[4];
  iVar4 = param_5 % param_1[4];
  ExceptionList = &local_c;
  ppvVar1 = &local_c;
  if (0 < iVar2) {
    do {
      FUN_00495f90(this,param_1,param_2,iVar5 * param_1[4] + param_3,param_4,0);
      iVar5 = iVar5 + 1;
      ppvVar1 = ExceptionList;
    } while (iVar5 < iVar2);
  }
  ExceptionList = ppvVar1;
  if (iVar4 != 0) {
    iVar5 = param_1[4];
    piVar6 = local_20;
    for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = *param_1;
      param_1 = param_1 + 1;
      piVar6 = piVar6 + 1;
    }
    local_20[4] = iVar4;
    FUN_00495f90(this,local_20,param_2,iVar2 * iVar5 + param_3,param_4,0);
  }
  DAT_0058364c = DAT_0058364c + -0x14;
  ExceptionList = local_c;
  return;
}


