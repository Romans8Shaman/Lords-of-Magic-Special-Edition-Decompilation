
undefined4 __thiscall FUN_0051c6c0(void *this,int *param_1)

{
  int *piVar1;
  int *unused_stack_0;
  char *pcVar2;
  int iVar3;
  
  unused_stack_0 = param_1;
  FUN_00539660((char *)((int)this + 0x68),4,1,param_1);
  FUN_00539660((char *)((int)this + 0x6c),4,1,unused_stack_0);
  piVar1 = (int *)((int)this + 0x74);
  FUN_00539660((char *)piVar1,4,1,unused_stack_0);
  iVar3 = 0;
  if (0 < *piVar1) {
    do {
      FUN_004bd210(unused_stack_0);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *piVar1);
  }
  param_1 = (int *)0x16;
  FUN_00539660((char *)&param_1,4,1,unused_stack_0);
  iVar3 = 0;
  if (0 < (int)param_1) {
    pcVar2 = (char *)((int)this + 0x10);
    do {
      FUN_00539660(pcVar2,4,1,unused_stack_0);
      iVar3 = iVar3 + 1;
      pcVar2 = pcVar2 + 4;
    } while (iVar3 < (int)param_1);
  }
  FUN_00539660((char *)((int)this + 0x78),0x40,1,unused_stack_0);
  return 1;
}


