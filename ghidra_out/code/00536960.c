
void __cdecl FUN_00536960(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x16b8) == 0x10) {
    *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
         *(undefined1 *)(param_1 + 0x16b4);
    iVar1 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar1;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar1) = *(undefined1 *)(param_1 + 0x16b5);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(undefined2 *)(param_1 + 0x16b4) = 0;
    *(undefined4 *)(param_1 + 0x16b8) = 0;
    return;
  }
  if (7 < *(int *)(param_1 + 0x16b8)) {
    *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
         *(undefined1 *)(param_1 + 0x16b4);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(ushort *)(param_1 + 0x16b4) = (ushort)*(byte *)(param_1 + 0x16b5);
    *(int *)(param_1 + 0x16b8) = *(int *)(param_1 + 0x16b8) + -8;
  }
  return;
}


