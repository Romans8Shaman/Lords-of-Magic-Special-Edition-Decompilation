
void __thiscall FUN_004b7760(void *this,int param_1,undefined1 param_2,int param_3)

{
  void *arg1;
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054b4cb;
  local_c = ExceptionList;
  if (param_1 == 100) {
    param_1 = 99;
  }
  if (*(int *)((int)this + 0x4b2c) == 0) {
    iVar1 = 1;
    ExceptionList = &local_c;
  }
  else {
    ExceptionList = &local_c;
    iVar1 = FUN_004b7dd0(*(int *)((int)this + 0x4b2c));
  }
  if (iVar1 == param_3) {
    FUN_00483fe0((char)param_1,param_2,(char)param_3);
  }
  if (param_1 == 0) {
    DAT_005aa1b8 = 0xb;
    puVar2 = (undefined4 *)Ordinal_401(0x14,s_C__lomse_source_storm_h_00555130,0x3ef,0);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      iStack_4 = param_1;
      puVar2 = FUN_00487590(puVar2);
    }
    iStack_4 = 0xffffffff;
    *(undefined4 **)((int)this + 8) = puVar2;
    FUN_00487610(puVar2,100);
  }
  else if (param_1 == 100) {
    arg1 = *(void **)((int)this + 8);
    if (arg1 == (void *)0x0) {
      ExceptionList = local_c;
      return;
    }
    FUN_004875f0(arg1);
    Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
    *(undefined4 *)((int)this + 8) = 0;
    FUN_00504c30(0x584ae8);
    ExceptionList = local_c;
    return;
  }
  if (*(void **)((int)this + 8) != (void *)0x0) {
    FUN_00487650(*(void **)((int)this + 8),param_1);
  }
  ExceptionList = local_c;
  return;
}


