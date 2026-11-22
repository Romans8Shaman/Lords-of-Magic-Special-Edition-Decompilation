
void FUN_0053abd0(void)

{
  DWORD *pDVar1;
  
  if (PTR_op_sunlight_005747c4 != (undefined *)0x0) {
    (/*IC:0053abda*/*(code *)PTR_op_sunlight_005747c4)();
  }
  pDVar1 = FUN_0053efa0();
  if (pDVar1 == (DWORD *)0x0) {
    __amsg_exit(0x10);
  }
  if ((HANDLE)pDVar1[1] != (HANDLE)0xffffffff) {
    CloseHandle((HANDLE)pDVar1[1]);
  }
  FUN_0053f020((undefined *)pDVar1);
                    /* WARNING: Subroutine does not return */
  ExitThread(0);
}


