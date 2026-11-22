
undefined4 __thiscall FUN_00452d80(void *this,int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00539660(this,4,1,param_1);
  if (uVar1 != 1) {
    return 0;
  }
  uVar1 = FUN_00539660((char *)((int)this + 4),0x14,1,param_1);
  if (uVar1 != 1) {
    return 0;
  }
  uVar1 = FUN_00539660((char *)((int)this + 0x18),4,1,param_1);
  if (uVar1 != 1) {
    return 0;
  }
  uVar1 = FUN_00539660((char *)((int)this + 0x1c),4,1,param_1);
  if (uVar1 == 1) {
    uVar1 = FUN_00539660((char *)((int)this + 0x20),4,1,param_1);
    return (uint)(uVar1 == 1);
  }
  return 0;
}


