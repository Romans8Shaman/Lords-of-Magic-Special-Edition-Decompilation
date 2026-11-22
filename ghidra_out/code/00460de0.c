
undefined4 FUN_00460de0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_108 [5];
  undefined4 local_f3;
  undefined4 local_ef;
  undefined4 local_eb;
  
  uVar2 = 0;
  iVar1 = FUN_004b4970(0x5cd358);
  if (iVar1 != 0) {
    FUN_0048cc70(local_108,0x41);
    local_eb = param_1;
    local_ef = *(undefined4 *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400);
    local_f3 = 0;
    uVar2 = FUN_00489b70(&DAT_00584ae8,local_108);
  }
  return uVar2;
}


