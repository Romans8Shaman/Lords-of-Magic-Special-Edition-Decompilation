
uint __fastcall FUN_004192c0(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  int local_8;
  uint local_4;
  
  iVar4 = 0;
  local_4 = 1000000;
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    piVar3 = (int *)(param_1 + 0xc4);
    do {
      iVar1 = FUN_00415470(piVar3);
      if (iVar1 != 0) {
        local_8 = local_8 + 1;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 0x13;
    } while (iVar4 < *(int *)(param_1 + 0x4c));
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    puVar5 = (uint *)(param_1 + 0xd0);
    do {
      uVar2 = FUN_00521e30((int *)(puVar5 + -3));
      if (uVar2 == 0) {
        uVar2 = FUN_00521e70((int *)(puVar5 + -3));
        if ((uVar2 != 0) || (local_8 == 0)) goto LAB_0041932c;
      }
      else {
LAB_0041932c:
        if ((int)*puVar5 <= (int)local_4) {
          local_4 = *puVar5;
        }
      }
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 0x13;
    } while (iVar4 < *(int *)(param_1 + 0x4c));
  }
  return -(uint)(local_4 != 1000000) & local_4;
}


