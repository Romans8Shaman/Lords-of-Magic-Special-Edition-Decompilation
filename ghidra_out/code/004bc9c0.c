
undefined4 __thiscall FUN_004bc9c0(void *this,int *param_1)

{
  void *this_00;
  void **ppvVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054b60b;
  ppvVar1 = &local_c;
  local_c = ExceptionList;
  for (this_00 = *(void **)((int)this + 0xd24); ExceptionList = ppvVar1, this_00 != (void *)0x0;
      this_00 = *(void **)((int)this_00 + 0x20)) {
    iVar2 = FUN_0050b940(this_00,param_1);
    if (iVar2 != 0) {
      ExceptionList = local_c;
      return 1;
    }
    ppvVar1 = ExceptionList;
  }
  iVar2 = Ordinal_401(0x24,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  uStack_4 = 0;
  if (iVar2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_0050b770(iVar2);
  }
  if (piVar3 == (int *)0x0) {
    ExceptionList = local_c;
    return 0;
  }
  piVar4 = piVar3;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *param_1;
    param_1 = param_1 + 1;
    piVar4 = piVar4 + 1;
  }
  piVar3[8] = *(int *)((int)this + 0xd24);
  *(int **)((int)this + 0xd24) = piVar3;
  ExceptionList = local_c;
  return 1;
}


