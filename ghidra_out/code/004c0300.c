
undefined4 __thiscall FUN_004c0300(void *this,int param_1)

{
  void *this_00;
  int *this_01;
  int iVar1;
  int *this_02;
  int iVar2;
  undefined4 uVar3;
  
  this_00 = (void *)((int)this + 0x4848);
  this_01 = (int *)FUN_004fbe60(this_00,0,1);
  while ((this_01 != (int *)0x0 && (iVar1 = FUN_0050f7e0(this_01,param_1), iVar1 == 0))) {
    this_01 = (int *)FUN_004fbe60(this_00,(int)this_01,1);
  }
  if (this_01 == (int *)0x0) {
    return 0xffffffff;
  }
  this_02 = (int *)FUN_004fbe60(this_00,0,3);
  if (this_02 != (int *)0x0) {
    do {
      if (this_02[0x20] == param_1) break;
      this_02 = (int *)FUN_004fbe60(this_00,(int)this_02,3);
    } while (this_02 != (int *)0x0);
    if (this_02 == (int *)0x0) {
      return 0xffffffff;
    }
    iVar1 = (/*IC:004c0384*/**(code **)(*this_01 + 0x3c))(this_01);
    iVar2 = (/*IC:004c038d*/**(code **)(*this_02 + 0x3c))(this_02);
    if (iVar1 == iVar2) {
      uVar3 = (/*IC:004c03a2*/**(code **)(*this_01 + 0x3c))(this_01);
      return uVar3;
    }
  }
  return 0xffffffff;
}


