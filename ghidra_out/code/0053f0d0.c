
void FUN_0053f0d0(void)

{
  DWORD *pDVar1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_0054efe8;
  puStack_10 = &LAB_0053b9f8;
  pvStack_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  pDVar1 = FUN_0053efa0();
  if (pDVar1[0x18] != 0) {
    local_8 = 1;
    pDVar1 = FUN_0053efa0();
    (/*IC:0053f115*/*(code *)pDVar1[0x18])();
  }
  local_8 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  _abort();
}


