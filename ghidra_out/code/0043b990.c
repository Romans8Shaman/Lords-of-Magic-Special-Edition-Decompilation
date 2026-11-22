
undefined4 * __thiscall
FUN_0043b990(void *this,undefined4 param_1,short param_2,short param_3,int param_4,int param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005497c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f59a0(this);
  *(undefined ***)this = &PTR_FUN_0054d4d8;
  DAT_00579080 = DAT_00579080 + 0x94;
  local_4 = 0;
  FUN_0043b8d0((int)this);
  *(short *)((int)this + 0x56) = param_3;
  *(int *)((int)this + 0x58) = param_4;
  *(short *)((int)this + 0x54) = param_2;
  *(int *)((int)this + 0x5c) = param_5;
  iVar1 = FUN_0043c310(&DAT_005cd310,(int)param_2,(int)param_3,param_4,param_5);
  *(int *)((int)this + 0x90) = iVar1;
  *(undefined4 *)((int)this + 0x4c) = param_1;
  *(undefined4 *)((int)this + 0x78) = param_6;
  *(undefined4 *)((int)this + 0x80) = param_8;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x7c) = param_7;
  ExceptionList = local_c;
  return this;
}


