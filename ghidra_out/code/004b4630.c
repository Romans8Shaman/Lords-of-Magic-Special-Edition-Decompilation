
int __thiscall FUN_004b4630(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = -1;
  do {
    if (-1 < iVar3) {
      return iVar3;
    }
    iVar1 = FUN_004b6030(iVar4);
    if ((-1 < iVar1) && (iVar2 = FUN_004b6b30(iVar1), iVar2 == param_1)) {
      iVar3 = FUN_004b6b70(iVar1);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x10);
  return iVar3;
}


