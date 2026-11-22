
undefined4 __thiscall FUN_00491b60(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054a8eb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00491b00(this);
  piVar1 = (int *)Ordinal_401(param_1 * 8 + 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  uStack_4 = 0;
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = piVar1 + 1;
    *piVar1 = param_1;
    FUN_00539ff0(piVar2,8,param_1,FUN_004ef2c0,&LAB_00491670);
  }
  *(int **)((int)this + 4) = piVar2;
  if (piVar2 == (int *)0x0) {
    ExceptionList = pvStack_c;
    return 0;
  }
  iVar3 = 0;
  *(int *)this = param_1;
  if (0 < param_1) {
    do {
      iVar3 = iVar3 + 1;
      *(undefined4 *)(*(int *)((int)this + 4) + -8 + iVar3 * 8) = 0;
    } while (iVar3 < *(int *)this);
  }
  ExceptionList = pvStack_c;
  return 1;
}


