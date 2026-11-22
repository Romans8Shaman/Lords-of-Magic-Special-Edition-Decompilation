
undefined4 FUN_00440c00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_108 [5];
  undefined4 local_f3;
  undefined4 local_ef;
  undefined4 local_eb;
  undefined4 local_e7;
  
  iVar1 = FUN_004d5c80((byte)param_3,param_4);
  if (iVar1 == 0) {
    FUN_0048cc70(local_108,0x38);
    local_ef = param_2;
    local_f3 = param_1;
    local_eb = param_3;
    local_e7 = param_4;
    uVar2 = FUN_00489b70(&DAT_00584ae8,local_108);
    return uVar2;
  }
  return 0;
}


