
void __fastcall FUN_004a9ad0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x6c)) {
    iVar3 = (*(int *)(param_1 + 0x70) + -1) * *(int *)(param_1 + 0x6c) * 8;
    do {
      *(uint *)(*(int *)(param_1 + 100) + 4 + iVar2 * 8) =
           *(uint *)(*(int *)(param_1 + 100) + 4 + iVar2 * 8) & 0xffe3ffff;
      iVar2 = iVar2 + 1;
      *(uint *)(*(int *)(param_1 + 100) + 4 + iVar3) =
           *(uint *)(*(int *)(param_1 + 100) + 4 + iVar3) & 0xffe3ffff;
      iVar3 = iVar3 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x6c));
  }
  iVar2 = *(int *)(param_1 + 0x6c);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x70)) {
    do {
      puVar1 = (uint *)(*(int *)(param_1 + 100) + 4 + iVar3 * *(int *)(param_1 + 0x6c) * 8);
      *puVar1 = *puVar1 & 0xffe3ffff;
      puVar1 = (uint *)(*(int *)(param_1 + 100) + 4 +
                       (iVar3 * *(int *)(param_1 + 0x6c) + iVar2 + -1) * 8);
      iVar3 = iVar3 + 1;
      *puVar1 = *puVar1 & 0xffe3ffff;
    } while (iVar3 < *(int *)(param_1 + 0x70));
  }
  return;
}


