
void __fastcall FUN_004c2450(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x5b8) != -1) {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x5b8);
    *(undefined4 *)(param_1 + 0x5b8) = 0xffffffff;
    if (*(int *)(param_1 + 0x5b0) != -1) {
      puVar1 = FUN_00485080(&DAT_005aa12c,*(int *)(param_1 + 0x5b0),0x2f);
      if ((puVar1 != (undefined4 *)0x0) && (puVar1[0x16d] == *(int *)(param_1 + 0x28))) {
        puVar1[0x16d] = 0xffffffff;
      }
    }
    *(undefined4 *)(param_1 + 0x5bc) = 0;
    *(undefined4 *)(param_1 + 0x5c0) = 0;
    *(undefined4 *)(param_1 + 0x5c4) = 0;
    *(undefined1 *)(param_1 + 0x5c8) = 0;
    *(undefined4 *)(param_1 + 0x5cc) = 0;
    *(undefined4 *)(param_1 + 0x5b0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x5b4) = 0xffffffff;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xdfffffff;
  }
  return;
}


