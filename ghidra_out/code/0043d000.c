
undefined4 __thiscall FUN_0043d000(void *this,int *param_1)

{
  int *piVar1;
  void *pvStack_4;
  
  piVar1 = param_1;
  pvStack_4 = this;
  FUN_004f6a80(this,param_1);
  param_1 = (int *)0x44;
  FUN_00539660((char *)&param_1,4,1,piVar1);
  FUN_00539660((char *)((int)this + 0x4c),0x44,1,piVar1);
  FUN_00539660((char *)((int)this + 0x90),4,1,piVar1);
  pvStack_4 = (void *)(uint)(*(int *)((int)this + 0x48) != 0);
  FUN_00539660((char *)&pvStack_4,4,1,piVar1);
  if (*(int **)((int)this + 0x48) != (int *)0x0) {
    (/*IC:0043d078*/**(code **)(**(int **)((int)this + 0x48) + 0x20))(piVar1);
  }
  FUN_00539660((char *)((int)this + 0x44),4,1,piVar1);
  return 1;
}


