
void FUN_0053eb6f(void)

{
  int *piVar1;
  DWORD *pDVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + 8);
  iVar3 = *(int *)(unaff_EBP + -0x2c);
  *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + -4) = *(undefined4 *)(unaff_EBP + -0x28);
  pDVar2 = FUN_0053efa0();
  pDVar2[0x1b] = *(DWORD *)(unaff_EBP + -0x1c);
  pDVar2 = FUN_0053efa0();
  pDVar2[0x1c] = *(DWORD *)(unaff_EBP + -0x20);
  if ((((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) &&
     ((*(int *)(unaff_EBP + -0x24) == 0 && (iVar3 != 0)))) {
    iVar3 = __abnormal_termination();
    FUN_0053ee20((int)piVar1,iVar3);
  }
  return;
}


