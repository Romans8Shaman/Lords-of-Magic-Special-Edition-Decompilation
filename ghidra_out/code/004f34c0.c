
uint __fastcall FUN_004f34c0(void *param_1)

{
  uint uVar1;
  
  if (*(int *)((int)param_1 + 0x38) == 0) {
    return 0;
  }
  switch(**(byte **)((int)param_1 + 0x40) & 7) {
  case 0:
    uVar1 = FUN_004f3550(param_1);
    break;
  case 1:
    uVar1 = FUN_004f35a0(param_1);
    return uVar1;
  case 2:
    uVar1 = FUN_004f3570(param_1);
    break;
  case 3:
    uVar1 = FUN_004f3610(param_1);
    break;
  case 4:
    uVar1 = FUN_004f3550(param_1);
    break;
  default:
    uVar1 = 0;
  }
  if (uVar1 == 0) {
    *(uint *)((int)param_1 + 0x34) = *(uint *)((int)param_1 + 0x34) & 0xfffffeff;
    return 0;
  }
  *(uint *)((int)param_1 + 0x34) = *(uint *)((int)param_1 + 0x34) | 0x100;
  return uVar1;
}


