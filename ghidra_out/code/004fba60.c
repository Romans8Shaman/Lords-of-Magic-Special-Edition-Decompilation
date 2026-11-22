
undefined4 __thiscall FUN_004fba60(void *this,uint param_1,int param_2)

{
  uint uVar1;
  
  DAT_00584ae4 = DAT_00584ae4 + 1;
  if (param_2 < 1) {
    FUN_004f5b30(this,param_1);
    *(undefined4 *)((int)this + 0x20) = 0xffffffff;
    return 1;
  }
  FUN_004f5b30(this,param_1);
  if (*(int *)((int)this + 0x2c) == 0) {
    *(undefined4 *)((int)this + 0x20) = 0;
    return 1;
  }
  uVar1 = FUN_0049d8f0(*(int *)((int)this + 0x2c));
  *(uint *)((int)this + 0x20) = param_2 * uVar1;
  return 1;
}


