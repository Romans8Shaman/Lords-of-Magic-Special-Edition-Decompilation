
void FUN_00405260(int param_1,int param_2,undefined4 *param_3)

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
  local_f3 = *(undefined4 *)(param_1 + 0x28);
  local_eb = *(undefined4 *)(param_2 + 0x28);
  local_e7 = 0xffffffff;
  local_ef = 4;
  local_e3 = 0;
  puVar2 = local_e2;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_00489b70(&DAT_00584ae8,local_108);
  return;
}


