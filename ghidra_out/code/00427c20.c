
undefined4 __thiscall FUN_00427c20(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005495ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004d61b0(&DAT_005788b8,0x5788d0);
  FUN_004d61b0(&DAT_00578810,0x578980);
  if (param_1 < 1) {
    ExceptionList = local_c;
    return 0;
  }
  FUN_00427df0(this);
  piVar1 = (int *)Ordinal_401(param_1 * 0x80 + 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  uStack_4 = 0;
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = piVar1 + 1;
    *piVar1 = param_1;
    FUN_00539ff0(piVar2,0x80,param_1,FUN_00427b90,FUN_0042d430);
  }
  *(int **)((int)this + 8) = piVar2;
  if (piVar2 == (int *)0x0) {
    ExceptionList = local_c;
    return 0;
  }
  *(int *)((int)this + 4) = param_1;
  *(undefined4 *)this = 0;
  ExceptionList = local_c;
  return 1;
}


