
void __fastcall FUN_0044e700(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *local_138;
  undefined4 local_134 [11];
  undefined4 local_108;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8 [17];
  undefined4 local_a4;
  undefined4 local_a0 [37];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00549b0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0043b930(local_134);
  iVar3 = 0;
  *(undefined4 *)(param_1 + 4) = 3;
  local_4 = 0;
  puVar4 = (undefined4 *)(param_1 + 0x48);
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  *(undefined1 *)(param_1 + 0x66) = 1;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  local_138 = (undefined4 *)(param_1 + 0xc4);
  do {
    puVar1 = FUN_0043b990(local_a0,*(undefined4 *)(param_1 + 0x68),
                          (short)*(undefined4 *)(param_1 + 0x74),
                          (short)*(undefined4 *)(param_1 + 0x80),iVar3,0,0xffffffff,0xffffffff,
                          0xffffffff);
    puVar4 = puVar1;
    puVar5 = local_134;
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    local_108 = 0;
    local_f0 = puVar1[0x11];
    local_ec = puVar1[0x12];
    puVar4 = puVar1 + 0x13;
    puVar5 = local_e8;
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    local_a4 = puVar1[0x24];
    FUN_0043ba50(local_a0);
    iVar3 = iVar3 + 1;
    puVar4 = local_e8;
    puVar5 = local_138;
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    local_138 = local_138 + 0x11;
  } while (iVar3 < 9);
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0x32;
  *(undefined4 *)(param_1 + 0x78) = 100;
  *(undefined4 *)(param_1 + 0x7c) = 100;
  *(undefined4 *)(param_1 + 0x340) = 4;
  *(undefined4 *)(param_1 + 0x344) = 200;
  local_4 = 0xffffffff;
  FUN_0043ba50(local_134);
  ExceptionList = local_c;
  return;
}


