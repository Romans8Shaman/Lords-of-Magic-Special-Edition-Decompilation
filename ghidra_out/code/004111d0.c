
void FUN_004111d0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int local_108 [5];
  undefined4 local_f3;
  undefined4 local_ef [59];
  
  FUN_0048cc70(local_108,0x5c);
  puVar2 = local_ef;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  local_f3 = param_2;
  FUN_00489b70(&DAT_00584ae8,local_108);
  return;
}


