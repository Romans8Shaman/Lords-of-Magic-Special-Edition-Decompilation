
void FUN_0047fed0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_108;
  undefined1 local_104;
  undefined4 local_f3;
  undefined4 local_ef;
  undefined4 local_eb;
  int local_e7;
  undefined4 local_e3;
  
  FUN_0048cc40((int)&local_108);
  if (((param_3 < 0) || (DAT_005cd2f0 <= param_3)) || (DAT_005cd2f4 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_005cd2f4 + param_3 * 1000;
  }
  if (iVar1 == 0) {
    return;
  }
  local_e7 = param_3;
  local_f3 = param_1;
  local_eb = param_4;
  local_104 = 3;
  local_ef = param_2;
  local_e3 = 0xffffffff;
  FUN_00489b70(&DAT_00584ae8,&local_108);
  return;
}


