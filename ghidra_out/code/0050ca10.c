
void __fastcall FUN_0050ca10(int param_1)

{
  if ((*(byte *)(param_1 + 0x30) & 4) != 0) {
    if (*(int **)(param_1 + 0x58) != (int *)0x0) {
      FUN_004245a0(*(int **)(param_1 + 0x58));
    }
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xffffffe3;
  }
  return;
}


