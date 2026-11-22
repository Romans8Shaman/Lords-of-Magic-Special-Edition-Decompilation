
undefined4 * __fastcall FUN_0050c0b0(undefined4 *param_1)

{
  FUN_004f59a0(param_1);
  *param_1 = &PTR_FUN_0054e910;
  DAT_005d2d60 = DAT_005d2d60 + 0x60;
  param_1[0x16] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined2 *)((int)param_1 + 0x4e) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[1] = 1;
  *(undefined1 *)(param_1 + 0x13) = 0xff;
  *(undefined1 *)((int)param_1 + 0x4d) = 1;
  return param_1;
}


