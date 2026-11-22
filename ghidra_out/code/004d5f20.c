
undefined4 __thiscall FUN_004d5f20(void *this,uint param_1,int param_2,int *param_3)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  uint uVar4;
  char *pcVar5;
  
  piVar3 = param_3;
  if ((char)param_1 == '\x05') {
    if ((param_1 & 0x100) != 0) {
      return 0;
    }
    pcVar2 = *(char **)(*(int *)(*(int *)((int)this + 0x80) + param_2 * 4) + 4);
    if (pcVar2 == (char *)0x0) {
      return 0;
    }
    uVar4 = 0xffffffff;
    pcVar5 = pcVar2;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    param_1 = ~uVar4 - 1;
    uVar4 = FUN_00539660((char *)&param_1,4,1,param_3);
    if (uVar4 == 1) {
      uVar4 = FUN_00539660(pcVar2,param_1,1,piVar3);
      return (uint)(uVar4 == 1);
    }
  }
  return 0;
}


