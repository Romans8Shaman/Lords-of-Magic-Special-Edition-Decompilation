
void __fastcall FUN_004f5800(int param_1)

{
  FUN_004f5170((undefined4 *)(param_1 + 8));
  DAT_00584ad0 = DAT_00584ad0 + -1;
  if (DAT_00584ad0 == 0) {
    FUN_004f58d0();
  }
  FUN_004f5690(*(void **)(param_1 + 0xc),*(int *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  return;
}


