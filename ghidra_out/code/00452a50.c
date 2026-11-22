
undefined4 FUN_00452a50(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004fbe60(&DAT_005ae974,0,3);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  do {
    if (*(int *)(iVar1 + 0x80) == param_1) {
      return *(undefined4 *)(iVar1 + 0x28);
    }
    iVar1 = FUN_004fbe60(&DAT_005ae974,iVar1,3);
  } while (iVar1 != 0);
  return 0xffffffff;
}


