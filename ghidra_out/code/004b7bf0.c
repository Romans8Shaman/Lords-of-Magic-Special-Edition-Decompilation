
int __thiscall FUN_004b7bf0(void *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  do {
    iVar1 = FUN_004b6030(iVar3);
    if (-1 < iVar1) {
      iVar2 = iVar2 + 1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  return iVar2;
}


