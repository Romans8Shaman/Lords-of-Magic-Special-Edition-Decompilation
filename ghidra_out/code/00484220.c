
undefined4 __fastcall FUN_00484220(int param_1)

{
  int iVar1;
  int local_108 [5];
  undefined4 local_f3;
  
  FUN_0048cc70(local_108,0x52);
  if (DAT_005d1e84 == (void *)0x0) {
    local_f3 = 1;
  }
  else {
    local_f3 = FUN_004b7dd0((int)DAT_005d1e84);
  }
  FUN_00489b70(&DAT_00584ae8,local_108);
  if (DAT_005d1e84 == (void *)0x0) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_004b78c0(DAT_005d1e84);
  }
  if (1 < iVar1) {
    FUN_004b69b0();
  }
  FUN_00504ce0(&DAT_00584ae8,1,0);
  FUN_005007e0(&DAT_00584ae8,1);
  FUN_00481f10(param_1);
  return 1;
}


