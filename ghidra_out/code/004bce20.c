
undefined4 __thiscall FUN_004bce20(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  char *pcVar4;
  
  piVar1 = param_1;
  FUN_00539660((char *)((int)this + 0x15a8),4,1,param_1);
  FUN_00539660((char *)((int)this + 0x15ac),4,1,piVar1);
  FUN_00539660((char *)((int)this + 0x15b0),4,1,piVar1);
  iVar2 = *(int *)((int)this + 0xd24);
  param_1 = (int *)0x0;
  for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x20)) {
    param_1 = (int *)((int)param_1 + 1);
  }
  FUN_00539660((char *)&param_1,4,1,piVar1);
  for (pvVar3 = *(void **)((int)this + 0xd24); pvVar3 != (void *)0x0;
      pvVar3 = *(void **)((int)pvVar3 + 0x20)) {
    FUN_0050b800(pvVar3,piVar1);
  }
  pvVar3 = (void *)((int)this + 0xd28);
  iVar2 = 0x10;
  do {
    FUN_0050a360(pvVar3,piVar1);
    pvVar3 = (void *)((int)pvVar3 + 0x88);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_00462ff0((void *)((int)this + 0x15e0),piVar1);
  FUN_0051c6c0((void *)((int)this + 0x1c64),piVar1);
  pcVar4 = (char *)((int)this + 0xcfc);
  iVar2 = 5;
  do {
    FUN_00539660(pcVar4 + -0x14,4,1,piVar1);
    FUN_00539660(pcVar4,4,1,piVar1);
    FUN_00539660(pcVar4 + 0x14,4,1,piVar1);
    pcVar4 = pcVar4 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_00539660((char *)((int)this + 0x3c),4,1,piVar1);
  FUN_004bf0a0((void *)((int)this + 0x34),piVar1);
  FUN_00539660((char *)((int)this + 0x44),0x1f,1,piVar1);
  FUN_00539660((char *)((int)this + 0x15d8),4,1,piVar1);
  FUN_00539660((char *)((int)this + 0x68),0xc80,1,piVar1);
  FUN_00539660((char *)((int)this + 0x15b4),4,1,piVar1);
  FUN_00539660((char *)((int)this + 0x15b8),4,1,piVar1);
  FUN_00539660((char *)((int)this + 0x40),4,1,piVar1);
  return 1;
}


