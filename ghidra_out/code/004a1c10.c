
void FUN_004a1c10(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 != 0) && (param_1 != 0)) {
    iVar1 = *(int *)(param_2 + 0x15a8);
    if ((iVar1 < 0) || (0xf < iVar1)) {
      iVar1 = 0;
    }
    else {
      iVar1 = param_1 + 0xd28 + iVar1 * 0x88;
    }
    if ((iVar1 != 0) && (param_3 != -1)) {
      iVar2 = FUN_004beef0((void *)(iVar1 + 0x7c),param_3);
      if (iVar2 == 0) {
        FUN_004bef40((void *)(iVar1 + 0x7c),param_3);
      }
    }
  }
  return;
}


