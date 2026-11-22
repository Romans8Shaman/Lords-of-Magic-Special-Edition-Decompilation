
int __thiscall FUN_00491ef0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054a948;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00491c70(this);
  puVar2 = (undefined4 *)FUN_00491c20(this,iVar1);
  if (puVar2 == (undefined4 *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar3 = FUN_00491ec0(this,param_1);
    if (iVar3 == 0) {
      iVar1 = -1;
    }
    else {
      DAT_0058364c = DAT_0058364c + 0x14;
      local_1c = param_2;
      local_18 = param_3;
      local_14 = param_4;
      local_10 = param_5;
      local_4 = 0;
      local_20 = iVar3;
      iVar4 = FUN_00495a40(&local_20);
      if (iVar4 == 0) {
        DAT_0058364c = DAT_0058364c + -0x14;
        iVar1 = -1;
      }
      else {
        piVar5 = (int *)Ordinal_401(0x14,s_C__lomse_source_storm_h_00555130,0x3ef,0);
        if (piVar5 == (int *)0x0) {
          piVar5 = (int *)0x0;
        }
        else {
          DAT_0058364c = DAT_0058364c + 0x14;
          *piVar5 = iVar3;
          piVar5[1] = param_2;
          piVar5[2] = param_3;
          piVar5[3] = param_4;
          piVar5[4] = param_5;
        }
        puVar2[1] = piVar5;
        if (piVar5 == (int *)0x0) {
          DAT_0058364c = DAT_0058364c + -0x14;
          iVar1 = -1;
        }
        else {
          *puVar2 = 4;
          DAT_0058364c = DAT_0058364c + -0x14;
        }
      }
    }
  }
  ExceptionList = local_c;
  return iVar1;
}


