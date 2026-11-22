
void __fastcall FUN_004fbe20(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x1c) != 0) && (iVar1 = 0, 0 < *(int *)(param_1 + 0x24))) {
    iVar2 = 0;
    do {
      FUN_004ba1c0((void *)(*(int *)(param_1 + 0x1c) + iVar2),0);
      iVar1 = iVar1 + 1;
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x44 + iVar2) = 0xffffffff;
      iVar2 = iVar2 + 0x58;
    } while (iVar1 < *(int *)(param_1 + 0x24));
  }
  return;
}


