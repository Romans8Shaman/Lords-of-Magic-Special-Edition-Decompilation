
void FUN_0040aeb0(undefined4 *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_108 [5];
  undefined4 local_f3;
  undefined2 auStack_ed [118];
  
  FUN_0048cc70(local_108,0x45);
  puVar3 = &local_f3;
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  iVar2 = (int)local_f3._2_2_;
  if (iVar2 < 0x1e) {
    puVar1 = auStack_ed + iVar2 * 2;
    iVar2 = 0x1e - iVar2;
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00489b70(&DAT_00584ae8,local_108);
  return;
}


