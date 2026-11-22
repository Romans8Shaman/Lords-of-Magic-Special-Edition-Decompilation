
undefined4 __fastcall FUN_00435440(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 0:
    return *(undefined4 *)(param_1 + 8);
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
    return *(undefined4 *)(param_1 + 0x14);
  case 6:
    return *(undefined4 *)(param_1 + 0x10);
  default:
    return 0xffffffff;
  }
}


