
void __fastcall FUN_004a6850(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *local_20;
  int local_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = DAT_005aec3c >> 1;
  local_10 = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  local_c = 0;
  local_8 = 0x280;
  local_4 = 0x180;
  if (DAT_005878e8 == 0) {
    uVar6 = 4;
    uVar7 = 4;
  }
  else {
    uVar7 = 0;
    uVar6 = 8;
  }
  iVar8 = 0;
  if (0 < iVar1) {
    do {
      if ((iVar8 < 0) || (*(int *)(param_1 + 0x30) <= iVar8)) {
        OutputDebugStringA(s_GetSpriteInZOrder__invalid_index_0055cb7c);
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x28) + iVar8 * 4);
      }
      if (iVar3 != 0) {
        *(byte *)(iVar3 + 0x34) = *(byte *)(iVar3 + 0x34) & 0xfe;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar1);
  }
  if (uVar7 <= uVar6) {
    local_18 = (uVar6 - uVar7) + 1;
    local_20 = (int *)(&DAT_0055ca60 + uVar7 * 4 + iVar2 * 0x24);
    do {
      iVar2 = 0;
      if (0 < iVar1) {
        do {
          if ((iVar2 < 0) || (*(int *)(param_1 + 0x30) <= iVar2)) {
            OutputDebugStringA(s_GetSpriteInZOrder__invalid_index_0055cb7c);
            piVar5 = (int *)0x0;
          }
          else {
            piVar5 = *(int **)(*(int *)(param_1 + 0x28) + iVar2 * 4);
          }
          if ((piVar5 != (int *)0x0) && ((*(byte *)(piVar5 + 0xd) & 1) == 0)) {
            iVar8 = piVar5[3];
            iVar3 = piVar5[4];
            piVar5[3] = *(int *)(&DAT_005878fc + *local_20 * 4) + iVar8;
            piVar5[4] = *(int *)(&DAT_00587920 + *local_20 * 4) + iVar3;
            iVar4 = (/*IC:004a6962*/**(code **)(*piVar5 + 0xc))(piVar5,&local_10);
            if (iVar4 != 0) {
              (/*IC:004a6972*/**(code **)(*piVar5 + 0x44))(piVar5,&DAT_005a7a14);
              *(byte *)(piVar5 + 0xd) = *(byte *)(piVar5 + 0xd) | 1;
            }
            piVar5[3] = iVar8;
            piVar5[4] = iVar3;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar1);
      }
      local_20 = local_20 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  iVar1 = DAT_005a7aa4;
  iVar2 = 0;
  if (0 < DAT_005a7aa4) {
    iVar8 = 0;
    do {
      if ((iVar8 < 0) || (DAT_005a7aa4 <= iVar2)) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)(DAT_005a7ab4 + iVar8);
      }
      FUN_00476010(&DAT_005a7a14,*piVar5,piVar5[1],piVar5[2],piVar5[3]);
      iVar2 = iVar2 + 1;
      iVar8 = iVar8 + 0x10;
    } while (iVar2 < iVar1);
  }
  return;
}


