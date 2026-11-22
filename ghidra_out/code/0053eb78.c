
void FUN_0053eb78(void)

{
  DWORD *pDVar1;
  int iVar2;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_EDI;
  
  *(undefined4 *)(unaff_ESI + -4) = *(undefined4 *)(unaff_EBP + -0x28);
  pDVar1 = FUN_0053efa0();
  pDVar1[0x1b] = *(DWORD *)(unaff_EBP + -0x1c);
  pDVar1 = FUN_0053efa0();
  pDVar1[0x1c] = *(DWORD *)(unaff_EBP + -0x20);
  if ((((*unaff_EDI == -0x1f928c9d) && (unaff_EDI[4] == 3)) && (unaff_EDI[5] == 0x19930520)) &&
     ((*(int *)(unaff_EBP + -0x24) == 0 && (unaff_EBX != 0)))) {
    iVar2 = __abnormal_termination();
    FUN_0053ee20((int)unaff_EDI,iVar2);
  }
  return;
}


