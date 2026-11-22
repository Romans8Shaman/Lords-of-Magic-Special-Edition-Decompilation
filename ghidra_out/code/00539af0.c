
undefined4 __cdecl
FUN_00539af0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  DWORD *pDVar1;
  undefined1 auStackY_cc [128];
  undefined4 uVar2;
  undefined4 **ppuVar3;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  code *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_c = auStackY_cc + 200;
  local_10 = auStackY_cc + 0x88;
  local_28 = FUN_00539bc0;
  local_24 = param_5;
  local_20 = param_2;
  local_1c = param_6;
  local_18 = param_7;
  local_8 = 0;
  local_14 = 0x539b8c;
  local_2c = ExceptionList;
  ExceptionList = &local_2c;
  local_34 = param_1;
  local_30 = param_3;
  ppuVar3 = &local_34;
  uVar2 = *param_1;
  pDVar1 = FUN_0053efa0();
  (/*IC:00539b7f*/*(code *)pDVar1[0x1a])(uVar2,ppuVar3);
  if (local_8 != 0) {
    *local_2c = *(undefined4 *)ExceptionList;
  }
  ExceptionList = local_2c;
  return 0;
}


