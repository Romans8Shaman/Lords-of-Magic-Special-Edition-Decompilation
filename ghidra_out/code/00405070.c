
void FUN_00405070(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int local_108 [5];
  undefined4 local_f3;
  undefined4 local_ef;
  undefined4 local_eb;
  undefined4 local_e7;
  undefined1 local_e3;
  undefined4 local_e2 [56];
  
  FUN_0048cc70(local_108,0x44);
  local_ef = 0x16;
  local_e3 = 0;
  local_eb = param_1[3];
  local_f3 = param_1[9];
  local_e7 = param_1[1];
  puVar2 = local_e2;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_00489b70(&DAT_00584ae8,local_108);
  return;
}


