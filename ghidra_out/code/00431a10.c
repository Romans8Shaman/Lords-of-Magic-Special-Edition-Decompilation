
void FUN_00431a10(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int local_108;
  undefined1 local_104;
  undefined4 local_f3 [60];
  
  FUN_0048cc40((int)&local_108);
  local_104 = 0x39;
  puVar2 = local_f3;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_00489b70(&DAT_00584ae8,&local_108);
  return;
}


