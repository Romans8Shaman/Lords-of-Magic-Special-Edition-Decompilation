
undefined4 * __thiscall FUN_004f2cc0(void *this,int param_1,ushort param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0054b908;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)((int)this + 4) = &PTR_LAB_0054de10;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0xbf800000;
  *(undefined4 *)((int)this + 0x10) = 0x3f800000;
  *(undefined4 *)((int)this + 0x14) = 0x40c00000;
  *(undefined4 *)((int)this + 0x34) = 0;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_0054ddf0;
  *(undefined ***)((int)this + 4) = &PTR_LAB_0054dde8;
  FUN_004f2da0((int)this);
  FUN_004f3240(this,param_1,param_2);
  ExceptionList = local_c;
  return this;
}


