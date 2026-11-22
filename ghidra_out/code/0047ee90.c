
int __thiscall FUN_0047ee90(void *this,char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  cVar1 = *param_1;
  iVar3 = 0;
  if (cVar1 != '\0') {
    while (cVar1 != '\n') {
      if (param_2 <=
          (int)((uint)*(byte *)((int)this + (uint)(byte)param_1[iVar3] * 0x1c + 0x2a) + iVar4)) {
        if (iVar3 < 2) {
          return 1;
        }
        iVar4 = iVar3 + -1;
        iVar2 = iVar4;
        iVar3 = iVar3 >> 2;
        if (iVar3 < 1) {
          return iVar4;
        }
        if (iVar4 < iVar3) {
          return iVar4;
        }
        do {
          if (param_1[iVar4] == ' ') {
            return iVar4;
          }
          iVar4 = iVar4 + -1;
        } while (iVar3 <= iVar4);
        return iVar2;
      }
      cVar1 = param_1[iVar3 + 1];
      iVar4 = iVar4 + *(int *)((int)this + 0xc) +
                      *(int *)((int)this + (uint)(byte)param_1[iVar3] * 0x1c + 0x10);
      iVar3 = iVar3 + 1;
      if (cVar1 == '\0') {
        return iVar3;
      }
    }
  }
  return iVar3;
}


