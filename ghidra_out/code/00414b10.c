
undefined4 __thiscall FUN_00414b10(void *this,int *param_1)

{
  int iVar1;
  
  FUN_004122a0(this,param_1);
  if (-1 < *(int *)((int)this + 0x538)) {
    FUN_00427950(&DAT_005aeefc,(int *)((int)this + 0x538));
  }
  if (DAT_00583100 == '\x02') {
    FUN_00414430(this);
  }
  else {
    iVar1 = FUN_004154a0((int)this);
    if (iVar1 < 1) {
      FUN_00413b30(this);
    }
    else {
      FUN_00413550(this);
    }
  }
  FUN_004117f0(this,1);
  if (this != (void *)0x0) {
    (/*IC:00414b74*/*(code *)**(undefined4 **)this)(1);
  }
  return 1;
}


