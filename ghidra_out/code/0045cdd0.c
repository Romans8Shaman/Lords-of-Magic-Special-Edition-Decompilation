
void __fastcall FUN_0045cdd0(int param_1)

{
  undefined2 uVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_108;
  undefined1 local_104;
  undefined4 local_f3;
  undefined4 local_ef;
  int local_eb;
  undefined2 auStack_e7 [10];
  undefined2 auStack_d3 [10];
  uint local_bf;
  undefined4 local_bb [5];
  undefined4 local_a7 [41];
  
  FUN_0048cc40((int)&local_108);
  local_f3 = *(undefined4 *)(param_1 + 0x688);
  local_ef = *(undefined4 *)(param_1 + 0x4774);
  local_104 = 0x32;
  if (DAT_005d2ca4 == 0) {
    DVar2 = GetTickCount();
    local_eb = DVar2 + DAT_00573428;
  }
  else {
    local_eb = DAT_005d2ca4 + DAT_00573428;
  }
  iVar3 = 0;
  do {
    uVar1 = *(undefined2 *)((int)&DAT_005cd198 + iVar3);
    *(undefined2 *)((int)auStack_e7 + iVar3) = *(undefined2 *)((int)&DAT_005cd1ac + iVar3);
    *(undefined2 *)((int)auStack_d3 + iVar3) = uVar1;
    iVar3 = iVar3 + 2;
  } while (iVar3 < 0x14);
  local_bf = (uint)(*(int *)(param_1 + 0x230c4) != 0);
  puVar4 = (undefined4 *)(param_1 + 0x23098);
  puVar5 = local_bb;
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = (undefined4 *)(param_1 + 0x230ac);
  puVar5 = local_a7;
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_00489b70(&DAT_00584ae8,&local_108);
  return;
}


