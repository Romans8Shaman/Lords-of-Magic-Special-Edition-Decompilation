
undefined4 __thiscall FUN_004efd70(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054b8ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004d61b0(&DAT_005848c0,0x584940);
  FUN_004d61b0(&DAT_00584748,0x584a38);
  FUN_004d61b0(&DAT_00584790,0x5848c8);
  if (param_1 < 1) {
    ExceptionList = local_c;
    return 0;
  }
  FUN_004f0060((int)this);
  piVar1 = (int *)Ordinal_401(param_1 * 0xac + 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  uStack_4 = 0;
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = piVar1 + 1;
    *piVar1 = param_1;
    FUN_00539ff0(piVar2,0xac,param_1,FUN_004efcd0,FUN_004efd60);
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


