
void __fastcall FUN_00495a90(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (param_1[1] < 0) {
      iVar2 = param_1[3] + param_1[1];
      param_1[3] = iVar2;
      if (iVar2 < 0) {
        param_1[3] = 0;
      }
      param_1[1] = 0;
    }
    if (param_1[2] < 0) {
      iVar2 = param_1[4] + param_1[2];
      param_1[4] = iVar2;
      if (iVar2 < 0) {
        param_1[4] = 0;
      }
      param_1[2] = 0;
    }
    if (*(int *)(iVar1 + 4) < param_1[3] + param_1[1]) {
      param_1[3] = *(int *)(iVar1 + 4) - param_1[1];
    }
    if (*(int *)(iVar1 + 8) < param_1[4] + param_1[2]) {
      param_1[4] = *(int *)(iVar1 + 8) - param_1[2];
    }
  }
  return;
}


