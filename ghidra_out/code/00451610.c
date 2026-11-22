
undefined4 __thiscall FUN_00451610(void *this,int *param_1)

{
  int *piVar1;
  void *pvStack_4;
  
  piVar1 = param_1;
  pvStack_4 = this;
  FUN_004f6a80(this,param_1);
  pvStack_4 = (void *)0x2fc;
  FUN_00539660((char *)&pvStack_4,4,1,piVar1);
  FUN_00539660((char *)((int)this + 0x48),0x2fc,1,piVar1);
  param_1 = (int *)(uint)(*(int *)((int)this + 0x44) != 0);
  FUN_00539660((char *)&param_1,4,1,piVar1);
  if (param_1 != (int *)0x0) {
    (/*IC:0045167b*/**(code **)(**(int **)((int)this + 0x44) + 0x20))(piVar1);
  }
  FUN_00452f30((int)this,piVar1);
  return 1;
}


