
void __fastcall FUN_004acf60(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0054b1b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0054daf8;
  local_4 = 0;
  DAT_00583a00 = DAT_00583a00 + -0x148;
  puVar1 = (undefined4 *)param_1[0x39];
  if (puVar1 != (undefined4 *)0x0) {
    (/*IC:004acfab*/**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined4 *)param_1[0x3a];
  if (puVar1 != (undefined4 *)0x0) {
    (/*IC:004acfbb*/**(code **)*puVar1)(puVar1,1);
  }
  local_4 = 0xffffffff;
  FUN_004f59f0(param_1);
  ExceptionList = pvStack_c;
  return;
}


