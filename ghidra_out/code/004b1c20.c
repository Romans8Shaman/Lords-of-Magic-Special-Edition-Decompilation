
void __thiscall FUN_004b1c20(void *this,char param_1,char param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  
  pcVar2 = FUN_004b1db0(this,param_1);
  cVar1 = *pcVar2;
  *pcVar2 = param_2;
  cVar4 = pcVar2[2];
  if (param_2 < pcVar2[2]) {
    cVar4 = param_2;
  }
  *pcVar2 = cVar4;
  if (cVar4 <= pcVar2[1]) {
    cVar4 = pcVar2[1];
  }
  *pcVar2 = cVar4;
  if ((cVar4 != cVar1) && (param_3 != 0)) {
    FUN_004b2310(0x5aa12c);
  }
  if ((param_1 == '\t') && (param_2 == '\0')) {
    if ((DAT_005d1e84 == 0) || (iVar5 = *(int *)(DAT_005d1e84 + 0x100), iVar5 < 1)) {
      iVar5 = 1;
    }
    for (; iVar5 < 0x10; iVar5 = iVar5 + 1) {
      iVar3 = FUN_00483c50(&DAT_005aa12c,iVar5);
      if (-1 < iVar3) {
        FUN_004b7b50(iVar5,0xffffffff);
      }
    }
  }
  return;
}


