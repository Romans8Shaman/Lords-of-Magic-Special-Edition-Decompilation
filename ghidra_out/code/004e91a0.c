
undefined4 __fastcall FUN_004e91a0(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + 0xc4);
  uVar2 = FUN_00525f10((int)piVar1);
  if (uVar2 != 0) {
    return 0;
  }
  uVar2 = FUN_00529180(piVar1);
  if (uVar2 != 0) {
    return 1;
  }
  uVar2 = FUN_005291c0(piVar1);
  if (uVar2 != 0) {
    return 2;
  }
  uVar2 = FUN_00521e30(piVar1);
  if (uVar2 != 0) {
    return 3;
  }
  uVar2 = FUN_00521eb0(piVar1);
  if (uVar2 != 0) {
    return 4;
  }
  uVar2 = FUN_005291a0(piVar1);
  if (uVar2 != 0) {
    return 0xd;
  }
  iVar3 = FUN_00521e00(piVar1);
  if (iVar3 == 0) {
    return 0xffffffff;
  }
  switch(*(undefined4 *)(iVar3 + 0x164)) {
  case 0:
    return 0x12;
  default:
    return 99;
  case 2:
    return 0x10;
  case 6:
    return 0x14;
  case 7:
    return 0xb;
  case 8:
    return 10;
  case 9:
    return 0x16;
  case 0x14:
    return 0xe;
  case 0x15:
  case 0x22:
    return 7;
  case 0x16:
    return 9;
  case 0x18:
  case 0x19:
  case 0x1a:
    return 5;
  case 0x1b:
    return 0x15;
  case 0x1c:
  case 0x1d:
    return 0xc;
  case 0x1e:
    return 0x11;
  case 0x1f:
    return 0xf;
  case 0x20:
    return 0x13;
  case 0x21:
    return 8;
  case 0x23:
  case 0x24:
    return 6;
  }
}


