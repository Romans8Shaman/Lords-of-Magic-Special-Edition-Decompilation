
undefined4 __thiscall FUN_0050d930(void *this,int *param_1)

{
  int *piVar1;
  int *a1;
  int iVar2;
  int iVar3;
  
  a1 = param_1;
  FUN_004f6a80(this,param_1);
  FUN_00539660((char *)((int)this + 0x48),4,1,a1);
  FUN_00539660((char *)((int)this + 0x4c),1,1,a1);
  FUN_00539660((char *)((int)this + 0x4d),1,1,a1);
  FUN_00539660((char *)((int)this + 0x54),4,1,a1);
  param_1 = (int *)(uint)(*(int *)((int)this + 0x58) != 0);
  FUN_00539660((char *)&param_1,4,1,a1);
  piVar1 = *(int **)((int)this + 0x58);
  if (piVar1 != (int *)0x0) {
    (/*IC:0050d9ae*/**(code **)(*piVar1 + 0x20))(piVar1,a1);
  }
  FUN_00539660((char *)((int)this + 0x5c),4,1,a1);
  FUN_00539660((char *)((int)this + 0x44),1,1,a1);
  FUN_00539660((char *)((int)this + 0x4e),2,1,a1);
  iVar3 = 0;
  if (0 < *(short *)((int)this + 0x4e)) {
    iVar2 = 0;
    do {
      FUN_00539660((char *)(*(int *)((int)this + 0x50) + iVar2),4,1,a1);
      FUN_00539660((char *)(*(int *)((int)this + 0x50) + 4 + iVar2),4,1,a1);
      param_1 = (int *)(uint)(*(int *)(*(int *)((int)this + 0x50) + 8 + iVar2) != 0);
      FUN_00539660((char *)&param_1,4,1,a1);
      if (param_1 != (int *)0x0) {
        piVar1 = *(int **)(*(int *)((int)this + 0x50) + 8 + iVar2);
        (/*IC:0050da4b*/**(code **)(*piVar1 + 0x20))(piVar1,a1);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar3 < *(short *)((int)this + 0x4e));
  }
  return 1;
}


