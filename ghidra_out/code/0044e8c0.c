
undefined4 * __thiscall FUN_0044e8c0(void *this,undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 local_a0 [37];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00549b56;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f59a0(this);
  *(undefined ***)this = &PTR_FUN_0054d630;
  iVar6 = 0;
  DAT_005792b0 = DAT_005792b0 + 0x34c;
  local_4 = 0;
  *(undefined4 *)((int)this + 0x74) = param_1;
  *(undefined4 *)((int)this + 0x80) = param_2;
  *(undefined4 *)((int)this + 0x348) = 0;
  FUN_0043b930(local_a0);
  local_4._0_1_ = 1;
  FUN_0044e700((int)this);
  puVar5 = (undefined2 *)((int)this + 0xcc);
  do {
    puVar8 = (undefined4 *)(puVar5 + -4);
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    *puVar5 = (short)param_1;
    puVar5[1] = (undefined2)param_2;
    *(int *)(puVar5 + 2) = iVar6;
    *(undefined4 *)(puVar5 + 4) = 1;
    iVar6 = iVar6 + 1;
    puVar5 = puVar5 + 0x22;
  } while (iVar6 < 9);
  uVar3 = 0xffffffff;
  pcVar7 = s_A_capitol_0055731c;
  do {
    pcVar9 = pcVar7;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar9 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  local_4 = (uint)local_4._1_3_ << 8;
  pcVar7 = pcVar9 + -uVar3;
  pcVar9 = (char *)((int)this + 0x48);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar9 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar9 = pcVar9 + 1;
  }
  FUN_0043ba50(local_a0);
  ExceptionList = local_c;
  return this;
}


