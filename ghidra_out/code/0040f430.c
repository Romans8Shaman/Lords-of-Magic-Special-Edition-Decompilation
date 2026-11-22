
void __fastcall FUN_0040f430(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x4c);
    FUN_0040f420(param_1,iVar2);
    iVar2 = iVar1;
  }
  *param_1 = 0;
  return;
}


