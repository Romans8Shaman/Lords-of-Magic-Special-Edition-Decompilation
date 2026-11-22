
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

int __cdecl FUN_00542ff0(char param_1,...)

{
  DWORD DVar1;
  DWORD DVar2;
  uint uVar3;
  int iVar4;
  DWORD *pDVar5;
  HANDLE hFile;
  BOOL BVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  int in_stack_00000008;
  char acStack_1000 [4092];
  undefined4 uStack_4;
  
  uStack_4 = 0x542ffa;
  iVar8 = 0;
  DVar1 = FUN_0053f600(_param_1,0,1);
  if ((DVar1 == 0xffffffff) || (DVar2 = FUN_0053f600(_param_1,0,2), DVar2 == 0xffffffff)) {
    return -1;
  }
  uVar9 = in_stack_00000008 - DVar2;
  if ((int)uVar9 < 1) {
    if ((int)uVar9 < 0) {
      FUN_0053f600(_param_1,in_stack_00000008,0);
      hFile = (HANDLE)FUN_00542f00(_param_1);
      BVar6 = SetEndOfFile(hFile);
      iVar8 = (BVar6 != 0) - 1;
      if (iVar8 == -1) {
        pDVar5 = FUN_0053b4c0();
        *pDVar5 = 0xd;
        DVar2 = GetLastError();
        pDVar5 = FUN_0053b4d0();
        *pDVar5 = DVar2;
      }
    }
    FUN_0053f600(_param_1,DVar1,0);
    return iVar8;
  }
  pcVar10 = acStack_1000;
  for (iVar7 = 0x400; iVar7 != 0; iVar7 = iVar7 + -1) {
    pcVar10[0] = '\0';
    pcVar10[1] = '\0';
    pcVar10[2] = '\0';
    pcVar10[3] = '\0';
    pcVar10 = pcVar10 + 4;
  }
  iVar7 = FUN_00547040(_param_1,0x8000);
  while( true ) {
    uVar3 = 0x1000;
    if ((int)uVar9 < 0x1000) {
      uVar3 = uVar9;
    }
    iVar4 = FUN_0053df10(_param_1,acStack_1000,uVar3);
    if (iVar4 == -1) break;
    uVar9 = uVar9 - iVar4;
    if ((int)uVar9 < 1) {
LAB_005430aa:
      FUN_00547040(_param_1,iVar7);
      FUN_0053f600(_param_1,DVar1,0);
      return iVar8;
    }
  }
  pDVar5 = FUN_0053b4d0();
  if (*pDVar5 == 5) {
    pDVar5 = FUN_0053b4c0();
    *pDVar5 = 0xd;
  }
  iVar8 = -1;
  goto LAB_005430aa;
}


