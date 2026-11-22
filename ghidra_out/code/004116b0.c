
undefined4 * __thiscall FUN_004116b0(void *this,undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054933c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f59a0(this);
  local_4 = 0;
  *(undefined1 *)((int)this + 0xc0) = 0;
  FUN_00539ff0((int)this + 0xc4,0x4c,0xf,FUN_00526e40,thunk_FUN_00526ea0);
  local_4._0_1_ = 1;
  FUN_004c3990((undefined4 *)((int)this + 0x55c));
  local_4._0_1_ = 2;
  FUN_0042d4c0((undefined4 *)((int)this + 0x568));
  *(undefined ***)this = &PTR_FUN_0054d3a8;
  DAT_005787c0 = DAT_005787c0 + 0x5dc;
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_00411520((int)this);
  *(undefined4 *)((int)this + 0x48) = param_1;
  ExceptionList = local_c;
  return this;
}


