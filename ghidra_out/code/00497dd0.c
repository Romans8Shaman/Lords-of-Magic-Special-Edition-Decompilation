
int __fastcall FUN_00497dd0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[8];
  iVar2 = FUN_00497940(param_1);
  if ((iVar1 + 1 < iVar2) && ((*(byte *)(param_1 + 7) & 1) != 0)) {
    param_1[8] = iVar1 + 1;
  }
  return param_1[8];
}


