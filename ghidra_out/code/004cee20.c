
int FUN_004cee20(char *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = 0;
  cVar2 = *param_1;
  while (cVar2 != '\x01') {
    iVar1 = iVar3 + 1;
    iVar3 = iVar3 + 1;
    cVar2 = param_1[iVar1];
  }
  return iVar3 + -1;
}


