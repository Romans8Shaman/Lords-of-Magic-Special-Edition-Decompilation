
undefined4 * __thiscall FUN_004ef610(void *this,undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054b828;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f59a0(this);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_0054dd88;
  FUN_004ef600((int)this);
  *(undefined4 *)((int)this + 0x44) = *param_1;
  *(undefined4 *)((int)this + 0x1c) = param_1[1];
  *(undefined4 *)((int)this + 0x48) = param_1[2];
  *(undefined4 *)((int)this + 0x4c) = param_1[3];
  *(undefined4 *)((int)this + 0x50) = param_1[5];
  *(undefined4 *)((int)this + 0x54) = param_1[4];
  *(undefined4 *)((int)this + 0x58) = param_1[7];
  *(undefined4 *)((int)this + 0x5c) = param_1[8];
  *(undefined4 *)((int)this + 0x60) = param_1[9];
  *(undefined4 *)((int)this + 100) = param_1[10];
  *(undefined4 *)((int)this + 0x70) = param_1[0xd];
  *(undefined4 *)((int)this + 0x74) = param_1[0xe];
  *(undefined4 *)((int)this + 0x68) = param_1[0xb];
  *(undefined4 *)((int)this + 0x6c) = param_1[0xc];
  ExceptionList = local_c;
  return this;
}


