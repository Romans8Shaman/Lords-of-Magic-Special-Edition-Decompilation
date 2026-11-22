
undefined4 __thiscall FUN_005003d0(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054c04b;
  local_c = ExceptionList;
  if (*(int *)((int)this + 0x25318) != 0) {
    return 0;
  }
  iVar1 = *(int *)((int)this + 0x255a0);
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0x25598) = 0;
  *(undefined4 *)((int)this + 0x2559c) = 0;
  if (iVar1 != 0) {
    FUN_00539eb0(iVar1,0x80,*(int *)(iVar1 + -4),FUN_0048d670);
    if (iVar1 + -4 != 0) {
      Ordinal_403(iVar1 + -4,s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
  }
  piVar2 = (int *)Ordinal_401(param_1 * 0x80 + 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  uStack_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = piVar2 + 1;
    *piVar2 = param_1;
    FUN_00539ff0(piVar3,0x80,param_1,&LAB_0048d560,FUN_0048d670);
  }
  *(int **)((int)this + 0x255a0) = piVar3;
  if (piVar3 == (int *)0x0) {
    ExceptionList = local_c;
    return 0;
  }
  *(int *)((int)this + 0x2559c) = param_1;
  ExceptionList = local_c;
  return 1;
}


