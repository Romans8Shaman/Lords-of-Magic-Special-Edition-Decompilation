
void __fastcall FUN_0040e220(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x40);
    FUN_0040d760(param_1,iVar2);
    iVar2 = iVar1;
  }
  *param_1 = 0;
  return;
}


