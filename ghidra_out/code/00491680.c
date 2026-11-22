
void __fastcall FUN_00491680(undefined4 *param_1)

{
  undefined4 *this;
  int *arg1;
  
  switch(*param_1) {
  case 1:
    arg1 = (int *)param_1[1];
    if (arg1 == (int *)0x0) goto switchD_00491690_default;
    DAT_00583648 = DAT_00583648 + -0x20;
    FUN_00495590(arg1);
    break;
  case 2:
    arg1 = (int *)param_1[1];
    if (arg1 == (int *)0x0) goto switchD_00491690_default;
    FUN_00495960(arg1);
    break;
  case 3:
    arg1 = (int *)param_1[1];
    if (arg1 == (int *)0x0) goto switchD_00491690_default;
    DAT_00583654 = DAT_00583654 + -0x18;
    break;
  case 4:
    arg1 = (int *)param_1[1];
    if (arg1 == (int *)0x0) goto switchD_00491690_default;
    DAT_0058364c = DAT_0058364c + -0x14;
    break;
  case 5:
    arg1 = (int *)param_1[1];
    if (arg1 == (int *)0x0) goto switchD_00491690_default;
    FUN_004944b0(arg1);
    break;
  case 6:
    arg1 = (int *)param_1[1];
    if (arg1 == (int *)0x0) goto switchD_00491690_default;
    DAT_00583650 = DAT_00583650 + -0x10;
    break;
  case 7:
    arg1 = (int *)param_1[1];
    if (arg1 == (int *)0x0) goto switchD_00491690_default;
    DAT_0058365c = DAT_0058365c + -0x38;
    break;
  case 8:
    arg1 = (int *)param_1[1];
    if (arg1 == (int *)0x0) goto switchD_00491690_default;
    break;
  case 9:
    arg1 = (int *)param_1[1];
    if (arg1 == (int *)0x0) goto switchD_00491690_default;
    FUN_00494560();
    break;
  case 10:
    arg1 = (int *)param_1[1];
    if (arg1 == (int *)0x0) goto switchD_00491690_default;
    DAT_005789b8 = DAT_005789b8 + -0x2c;
    break;
  case 0xb:
    arg1 = (int *)param_1[1];
    if (arg1 == (int *)0x0) goto switchD_00491690_default;
    thunk_FUN_0046ba30((int)arg1);
    break;
  case 0xc:
    arg1 = (int *)param_1[1];
    if (arg1 == (int *)0x0) goto switchD_00491690_default;
    thunk_FUN_004e9cb0(arg1);
    break;
  case 0xd:
    arg1 = (int *)param_1[1];
    if (arg1 == (int *)0x0) goto switchD_00491690_default;
    thunk_FUN_0049ab20(arg1);
    break;
  case 0xe:
    this = (undefined4 *)param_1[1];
    if (this != (undefined4 *)0x0) {
      (/*IC:00491826*/**(code **)*this)(this,1);
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    goto switchD_00491690_default;
  case 0xf:
    arg1 = (int *)param_1[1];
    if (arg1 == (int *)0x0) goto switchD_00491690_default;
    FUN_004945f0();
    break;
  case 0x10:
    arg1 = (int *)param_1[1];
    if (arg1 == (int *)0x0) goto switchD_00491690_default;
    DAT_0058362c = DAT_0058362c + -8;
    break;
  default:
    goto switchD_00491690_default;
  }
  Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
switchD_00491690_default:
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


