
void FUN_004ed0d0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_108;
  undefined1 local_104;
  undefined4 local_f3;
  int local_ef;
  undefined4 local_eb;
  undefined4 local_e7;
  undefined4 local_e3;
  
  FUN_0048cc40((int)&local_108);
  if (((param_2 < 0) || (DAT_005cd2f0 <= param_2)) || (DAT_005cd2f4 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_005cd2f4 + param_2 * 1000;
  }
  if (iVar1 == 0) {
    return;
  }
  local_ef = param_2;
  local_f3 = param_1;
  local_eb = param_3;
  local_104 = 0xc;
  local_e7 = param_4;
  local_e3 = *(undefined4 *)(iVar1 + 0xe8);
  FUN_00489b70(&DAT_00584ae8,&local_108);
  return;
}


