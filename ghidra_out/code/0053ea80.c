
undefined4 __cdecl
FUN_0053ea80(DWORD param_1,undefined4 param_2,DWORD param_3,undefined4 param_4,undefined4 param_5,
            int param_6,int param_7)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0054efb0;
  puStack_10 = &LAB_0053b9f8;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_0053efa0();
  FUN_0053efa0();
  pDVar1 = FUN_0053efa0();
  pDVar1[0x1b] = param_1;
  pDVar1 = FUN_0053efa0();
  pDVar1[0x1c] = param_3;
  local_8 = 1;
  uVar2 = FUN_00539a60(param_2,param_4,param_5,param_6,param_7);
  local_8 = 0xffffffff;
  FUN_0053eb78();
  ExceptionList = local_14;
  return uVar2;
}


