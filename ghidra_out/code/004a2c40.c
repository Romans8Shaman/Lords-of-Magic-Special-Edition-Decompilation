
undefined4 __thiscall FUN_004a2c40(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054afeb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004d61b0(&DAT_00583750,0x5837b8);
  if (param_1 < 1) {
    ExceptionList = local_c;
    return 0;
  }
  FUN_004a2bc0((int)this);
  piVar1 = (int *)Ordinal_401(param_1 * 0x58 + 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  uStack_4 = 0;
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = piVar1 + 1;
    *piVar1 = param_1;
    FUN_00539ff0(piVar2,0x58,param_1,FUN_004a3080,op_sunlight);
  }
  *(int **)((int)this + 0x18) = piVar2;
  if (piVar2 == (int *)0x0) {
    ExceptionList = local_c;
    return 0;
  }
  *(int *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  ExceptionList = local_c;
  return 1;
}


