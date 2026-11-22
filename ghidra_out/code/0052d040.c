
undefined4 __thiscall FUN_0052d040(void *this,int *param_1)

{
  char *pcVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  pcVar1 = (char *)((int)this + 0x232a8);
  iVar2 = 8;
  do {
    FUN_00539660(pcVar1,0x310,1,param_1);
    pcVar1 = pcVar1 + 0x400;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 1;
}


