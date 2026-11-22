
int FUN_00500e00(undefined4 param_1,int param_2)

{
  switch(param_1) {
  case 0xb:
    if (param_2 == 0) {
      return param_2;
    }
    if (param_2 == 1) {
      return param_2;
    }
    goto LAB_00500ecb;
  case 0xd:
    if (param_2 == 0) {
      return 0x10;
    }
    if (param_2 == 1) {
      return 0x11;
    }
    if (param_2 == 2) {
      return 0x12;
    }
    break;
  case 0x11:
  case 0x15:
    if (param_2 == 0) {
      return 0xd;
    }
    if (param_2 == 1) {
      return 0xe;
    }
    if (param_2 == 2) {
      return 0xf;
    }
    break;
  case 0x12:
    if (param_2 == 0) {
      return 10;
    }
    if (param_2 == 1) {
      return 0xb;
    }
    if (param_2 == 2) {
      return 0xc;
    }
    break;
  case 0x17:
  case 0x18:
    if (param_2 == 0) {
      return param_2;
    }
    if (param_2 == 1) {
      return param_2;
    }
LAB_00500ecb:
    if (param_2 == 2) {
      return 2;
    }
    break;
  case 0x1a:
    if (param_2 == 0) {
      return 7;
    }
    if (param_2 == 1) {
      return 8;
    }
    if (param_2 == 2) {
      return 9;
    }
  }
  return 0x2b;
}


