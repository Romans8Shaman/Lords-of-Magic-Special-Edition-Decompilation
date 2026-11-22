
undefined4 __thiscall FUN_004af3e0(void *this,int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054b25b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004d61b0(&DAT_005839f0,0x583a08);
  if (param_1 < 1) {
    uVar1 = 0;
  }
  else {
    FUN_004b0e00((int)this);
    puVar2 = (undefined4 *)Ordinal_401(param_1 * 0x34,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    uStack_4 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else if (-1 < param_1 + -1) {
      puVar3 = puVar2;
      iVar4 = param_1;
      do {
        FUN_004af120(puVar3);
        puVar3 = puVar3 + 0xd;
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


