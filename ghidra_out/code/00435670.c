
undefined4 __thiscall FUN_00435670(void *this,uint param_1,uint param_2)

{
  short *this_00;
  bool bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  short local_8 [2];
  int local_4;
  
  if (param_1 == *(uint *)((int)this + 8)) {
    iVar4 = 1;
  }
  else {
    if (param_1 != *(uint *)((int)this + 0xc)) {
      return 0;
    }
    iVar4 = 0;
  }
  iVar2 = FUN_00432b30(param_2,&local_4,(uint *)local_8,&param_2,&param_1);
  if ((iVar2 == 0) || (local_4 == 0)) {
    return 0;
  }
  if ((local_4 < 1) || (4 < local_4)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar2 = 0;
  pcVar3 = (char *)((int)this + iVar4 * 0x2a + 0x2c);
  do {
    this_00 = (short *)(pcVar3 + -4);
    if ((bVar1) && (*pcVar3 == local_4)) {
      FUN_00432d40(this_00,(char)local_4,*this_00 + local_8[0],(short)param_2,(char)param_1);
      return 1;
    }
    if (*pcVar3 == '\0') {
      FUN_00432d40(this_00,(char)local_4,local_8[0],(short)param_2,(char)param_1);
      return 1;
    }
    iVar2 = iVar2 + 1;
    pcVar3 = pcVar3 + 6;
  } while (iVar2 < 7);
  return 0;
}


