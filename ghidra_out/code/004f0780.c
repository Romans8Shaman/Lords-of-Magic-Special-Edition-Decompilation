
void FUN_004f0780(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int local_108 [5];
  undefined4 local_f3 [60];
  
  FUN_0048cc70(local_108,0x1b);
  puVar2 = local_f3;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_00489b70(&DAT_00584ae8,local_108);
  return;
}


