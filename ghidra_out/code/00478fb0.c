
void __fastcall FUN_00478fb0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0x32;
  iVar3 = param_1 + 0x17c;
  piVar2 = (int *)(param_1 + 0x14);
  do {
    if ((int *)*piVar2 != (int *)0x0) {
      FUN_00478f60((int *)*piVar2);
    }
    FUN_00479050(iVar3,piVar2);
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + 0x1c;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


