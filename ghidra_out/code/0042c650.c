
int __fastcall FUN_0042c650(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  for (piVar1 = *(int **)(param_1 + 0x1c); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[5]) {
    iVar2 = FUN_00427b80(*piVar1);
    if ((*(byte *)(iVar2 + 0x18) & 0x10) == 0) {
      iVar3 = iVar3 + 1;
    }
  }
  return iVar3;
}


