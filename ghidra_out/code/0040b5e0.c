
void __fastcall FUN_0040b5e0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_004d61b0(&DAT_00578080,0x578158);
  iVar2 = *param_1;
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x44);
    FUN_0040b5d0(param_1,iVar2);
    iVar2 = iVar1;
  }
  *param_1 = 0;
  return;
}


