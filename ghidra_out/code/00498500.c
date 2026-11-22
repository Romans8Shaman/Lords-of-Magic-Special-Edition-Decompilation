
undefined4 __thiscall FUN_00498500(void *this,undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054ad86;
  local_c = ExceptionList;
  if ((param_2 < 0) || (9 < param_2)) {
    return 0;
  }
  iVar2 = *(int *)(param_2 * 0x10 + 0x5e4 + (int)this);
  piVar1 = (int *)(param_2 * 0x10 + 0x5e4 + (int)this);
  if (iVar2 != 0) {
    for (iVar3 = *(int *)(iVar2 + 4); iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
      iVar2 = iVar3;
    }
    ExceptionList = &local_c;
    puVar4 = (undefined4 *)Ordinal_401(0xc,s_C__lomse_source_storm_h_00555130,0x3ef,0);
    iStack_4 = 1;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)FUN_004983f0(puVar4);
    }
    puVar4[1] = 0;
    *puVar4 = param_1;
    *(undefined4 **)(iVar2 + 4) = puVar4;
    ExceptionList = local_c;
    return 1;
  }
  ExceptionList = &local_c;
  puVar4 = (undefined4 *)Ordinal_401(0xc,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  if (puVar4 == (undefined4 *)0x0) {
    uRam00000000 = param_1;
    uRam00000004 = 0;
    *piVar1 = 0;
    ExceptionList = local_c;
    return 1;
  }
  iStack_4 = iVar2;
  puVar4 = (undefined4 *)FUN_004983f0(puVar4);
  puVar4[1] = 0;
  *puVar4 = param_1;
  *piVar1 = (int)puVar4;
  ExceptionList = local_c;
  return 1;
}


