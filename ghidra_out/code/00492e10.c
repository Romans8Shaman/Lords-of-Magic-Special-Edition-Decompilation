
int __thiscall FUN_00492e10(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054aaab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00491c70(this);
  puVar2 = (undefined4 *)FUN_00491c20(this,iVar1);
  if (puVar2 == (undefined4 *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar3 = FUN_00492db0(this,param_1);
    if (iVar3 == 0) {
      iVar1 = -1;
    }
    else {
      piVar4 = (int *)Ordinal_401(0x18,s_C__lomse_source_storm_h_00555130,0x3ef,0);
      uStack_4 = 0;
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        DAT_00583654 = DAT_00583654 + 0x18;
        *piVar4 = iVar3;
        piVar4[1] = 0;
        piVar4[2] = 0;
        piVar4[4] = 0;
        piVar4[3] = 0;
        FUN_004958e0((int)piVar4);
      }
      puVar2[1] = piVar4;
      if (piVar4 == (int *)0x0) {
        iVar1 = -1;
      }
      else {
        *puVar2 = 3;
      }
    }
  }
  ExceptionList = local_c;
  return iVar1;
}


