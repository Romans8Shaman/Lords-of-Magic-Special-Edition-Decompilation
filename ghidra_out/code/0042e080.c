
undefined4 __thiscall FUN_0042e080(void *this,int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054962b;
  local_c = ExceptionList;
  if (param_1 < 1) {
    uVar1 = 0;
  }
  else {
    ExceptionList = &local_c;
    FUN_004b0e00((int)this);
    puVar2 = (undefined4 *)Ordinal_401(param_1 * 0x48,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    uStack_4 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else if (-1 < param_1 + -1) {
      puVar3 = puVar2;
      iVar4 = param_1;
      do {
        FUN_0042dcc0(puVar3);
        puVar3 = puVar3 + 0x12;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    *(undefined4 **)((int)this + 8) = puVar2;
    uVar1 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      *(int *)this = param_1;
      *(undefined4 *)((int)this + 4) = 0;
      uVar1 = 1;
    }
  }
  ExceptionList = local_c;
  return uVar1;
}


