
void FUN_0043c480(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int local_108;
  undefined1 local_104;
  undefined4 local_f3;
  undefined4 local_ef;
  undefined4 local_eb [58];
  
  FUN_0048cc40((int)&local_108);
  local_ef = param_2;
  local_104 = 0x26;
  local_f3 = param_1;
  puVar2 = local_eb;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_00489b70(&DAT_00584ae8,&local_108);
  return;
}


