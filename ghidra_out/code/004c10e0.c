
void __fastcall FUN_004c10e0(int param_1)

{
  *(undefined4 *)(param_1 + 0x15b8) = 0xffffffff;
  FUN_004bca80(param_1);
  FUN_004bee50((void *)(param_1 + 0x34),DAT_005aee70);
  FUN_004bee00(param_1);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(uint *)(param_1 + 0x15d8) = *(uint *)(param_1 + 0x15d8) & 0xffffff7f;
  return;
}


