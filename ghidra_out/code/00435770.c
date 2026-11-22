
undefined4 __thiscall FUN_00435770(void *this,int param_1,uint param_2)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint local_8;
  short local_4 [2];
  
  if (param_1 == *(int *)((int)this + 8)) {
    iVar5 = 1;
  }
  else {
    if (param_1 != *(int *)((int)this + 0xc)) {
      return 0;
    }
    iVar5 = 0;
  }
  iVar3 = FUN_00432b30(param_2,&param_1,&local_8,(uint *)local_4,&param_2);
  if ((iVar3 != 0) && (param_1 != 0)) {
    if ((param_1 < 1) || (4 < param_1)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    iVar3 = 0;
    pcVar4 = (char *)((int)this + iVar5 * 0x2a + 0x2c);
    while ((!bVar2 || (*pcVar4 != param_1))) {
      if ((*pcVar4 == param_1) && ((param_1 != 5 || ((int)pcVar4[1] == param_2)))) {
        *pcVar4 = '\0';
        return 1;
      }
      iVar3 = iVar3 + 1;
      pcVar4 = pcVar4 + 6;
      if (6 < iVar3) {
        return 0;
      }
    }
    sVar1 = *(short *)(pcVar4 + -4);
    if ((int)local_8 <= (int)sVar1) {
      if ((int)sVar1 == local_8) {
        *pcVar4 = '\0';
        return 1;
      }
      FUN_00432d40(pcVar4 + -4,(char)param_1,sVar1 - (short)local_8,local_4[0],(char)param_2);
      return 1;
    }
  }
  return 0;
}


