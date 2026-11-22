
void __thiscall FUN_00401f50(void *this,int *param_1)

{
  int iVar1;
  void *this_00;
  
  iVar1 = FUN_004205e0((int)param_1);
  if ((((iVar1 == 0) ||
       (this_00 = (void *)FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0xc),0),
       this_00 == (void *)0x0)) || (iVar1 = FUN_00407d50((int)this_00), iVar1 != 0)) ||
     ((*(int *)((int)this_00 + 0x48) == param_1[0x12] ||
      (iVar1 = FUN_005071c0(this_00,param_1[0x12]), iVar1 == 0)))) {
    FUN_004010d0(this,(int)param_1);
    FUN_00401730(param_1);
    return;
  }
  if (param_1[0x17] < 1) {
    *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 0xc);
    FUN_00402330(this,param_1);
    return;
  }
  return;
}


