
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __fastcall FUN_0049d360(int param_1)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  uint *puVar10;
  int *piVar11;
  int *local_7c;
  uint local_6c [9];
  char *pcStack_48;
  
  if (*(int **)(param_1 + 0x3c) == (int *)0x0) {
    return (int *)0x0;
  }
  iVar7 = **(int **)(param_1 + 0x3c);
  if (iVar7 == 0) {
    return (int *)0x0;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    return (int *)0x0;
  }
  pbVar2 = *(byte **)(iVar7 + 8);
  if (pbVar2 == (byte *)0x0) {
    return (int *)0x0;
  }
  if ((*pbVar2 & 0x33) == 0) {
    if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
      return *(int **)(*(int *)(param_1 + 0x1c) + 0xc);
    }
    local_6c[1] = local_6c[1] | 2;
    local_6c[0] = 100;
    piVar11 = (int *)0x1008800;
    (/*IC:0049d4e4*/**(code **)(*DAT_00585178 + 0x14))
              (DAT_00585178,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc),0,0x1008800,local_6c);
    _DAT_00583724 = 0;
    _DAT_00583728 = 0;
    return piVar11;
  }
  local_7c = *(int **)(param_1 + 0x34);
  if (local_7c == (int *)0x0) {
    local_7c = DAT_00585178;
  }
  else {
    iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
    if (*(int *)(param_1 + 0x38) == iVar7) {
      return local_7c;
    }
    *(int *)(param_1 + 0x38) = iVar7;
  }
  puVar10 = local_6c;
  for (iVar7 = 0x1b; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  local_6c[0] = 0x6c;
  (/*IC:0049d409*/**(code **)(*local_7c + 100))(local_7c,0,local_6c,1,0);
  FUN_004f46f0(**(int **)(param_1 + 0x3c),*(ushort **)(param_1 + 0x1c),pcStack_48,0,
               *(uint *)(param_1 + 0x28) & 1);
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    uVar4 = (uint)*(ushort *)(*(int *)(param_1 + 0x1c) + 2);
    uVar6 = (uint)*(ushort *)(*(int *)(param_1 + 0x1c) + 4);
    if ((uVar4 != 0) && (uVar6 != 0)) {
      uVar9 = ((int)(uVar4 - 1) >> 1) - 1;
      uVar3 = uVar9;
      while (uVar3 != 0) {
        pcVar8 = pcStack_48 + uVar9;
        pcVar5 = pcStack_48 + ((uVar4 - 1) - uVar9);
        iVar7 = (int)pcVar8 - (int)pcStack_48;
        do {
          cVar1 = *pcVar8;
          *pcVar8 = *pcVar5;
          pcVar8 = pcVar8 + -1;
          iVar7 = iVar7 + -1;
          *pcVar5 = cVar1;
          pcVar5 = pcVar5 + 1;
        } while (-1 < iVar7);
        pcStack_48 = pcStack_48 + uVar4;
        uVar6 = uVar6 - 1;
        uVar3 = uVar6;
      }
    }
  }
  (/*IC:0049d49c*/**(code **)(*local_7c + 0x80))(local_7c,0);
  return local_7c;
}


