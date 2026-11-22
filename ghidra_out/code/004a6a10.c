
void __thiscall FUN_004a6a10(void *this,int *param_1)

{
  void **ppvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint unaff_EDI;
  uint uVar8;
  int iVar9;
  int local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int aiStack_2c [8];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054b108;
  pvStack_c = ExceptionList;
  iVar2 = DAT_005aec3c >> 1;
  iVar9 = *(int *)((int)this + 0x30);
  local_3c = 0;
  local_38 = 0;
  local_34 = 0x280;
  local_30 = 0x180;
  if (DAT_005878e8 == 0) {
    uVar8 = 4;
    uVar6 = 4;
  }
  else {
    uVar6 = 0;
    uVar8 = 8;
  }
  iVar7 = 0;
  ExceptionList = &pvStack_c;
  ppvVar1 = &pvStack_c;
  if (0 < iVar9) {
    do {
      if ((iVar7 < 0) || (*(int *)((int)this + 0x30) <= iVar7)) {
        OutputDebugStringA(s_GetSpriteInZOrder__invalid_index_0055cb7c);
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)((int)this + 0x28) + iVar7 * 4);
      }
      if (iVar3 != 0) {
        *(byte *)(iVar3 + 0x34) = *(byte *)(iVar3 + 0x34) & 0xfe;
      }
      iVar7 = iVar7 + 1;
      ppvVar1 = ExceptionList;
    } while (iVar7 < iVar9);
  }
  ExceptionList = ppvVar1;
  FUN_00476e10(&DAT_005a7a5c,&DAT_005a7a14);
  DAT_005a7ad8 = (-(uint)(param_1 != (int *)0x0) & 0xfffffffe) + 2;
  if (uVar6 <= uVar8) {
    local_44 = (uVar8 - uVar6) + 1;
    param_1 = (int *)(&DAT_0055ca60 + uVar6 * 4 + iVar2 * 0x24);
    do {
      iVar2 = 0;
      if (0 < iVar9) {
        do {
          if ((iVar2 < 0) || (*(int *)((int)this + 0x30) <= iVar2)) {
            OutputDebugStringA(s_GetSpriteInZOrder__invalid_index_0055cb7c);
            piVar5 = (int *)0x0;
          }
          else {
            piVar5 = *(int **)(*(int *)((int)this + 0x28) + iVar2 * 4);
          }
          if ((piVar5 != (int *)0x0) && ((*(byte *)(piVar5 + 0xd) & 1) == 0)) {
            iVar7 = piVar5[3];
            iVar3 = piVar5[4];
            piVar5[3] = *(int *)(&DAT_005878fc + *param_1 * 4) + iVar7;
            piVar5[4] = *(int *)(&DAT_00587920 + *param_1 * 4) + iVar3;
            iVar4 = (/*IC:004a6b5c*/**(code **)(*piVar5 + 0xc))(piVar5,&local_3c);
            if (iVar4 != 0) {
              (/*IC:004a6b71*/**(code **)(*piVar5 + 0x14))(piVar5,piVar5[3],piVar5[4],0xffffffff);
              *(byte *)(piVar5 + 0xd) = *(byte *)(piVar5 + 0xd) | 1;
            }
            piVar5[4] = iVar3;
            piVar5[3] = iVar7;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar9);
      }
      param_1 = param_1 + 1;
      local_44 = local_44 + -1;
    } while (local_44 != 0);
  }
  iVar2 = 0;
  if (0 < iVar9) {
    do {
      if ((iVar2 < 0) || (*(int *)((int)this + 0x30) <= iVar2)) {
        OutputDebugStringA(s_GetSpriteInZOrder__invalid_index_0055cb7c);
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(*(int *)((int)this + 0x28) + iVar2 * 4);
      }
      if ((iVar7 != 0) && ((*(byte *)(iVar7 + 0x34) & 1) == 0)) {
        *(undefined4 *)(iVar7 + 0x14) = 1000;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar9);
  }
  if (DAT_00584cc0 != (int *)0x0) {
    if (*DAT_00584cc0 != 0) {
      FUN_0053a090(&DAT_005d22f0,s_break_me_0055cba0,unaff_EDI);
    }
    iVar9 = 0;
    if (0 < DAT_00584ca8) {
      iVar2 = 0;
      do {
        if ((*(byte *)((int)DAT_00584cc0 + iVar2) & 2) != 0) {
          FUN_004a35c0((uint *)((int)DAT_00584cc0 + iVar2));
        }
        iVar9 = iVar9 + 1;
        iVar2 = iVar2 + 0x58;
      } while (iVar9 < DAT_00584ca8);
    }
  }
  FUN_00476e10(&DAT_005a7a80,(int *)&DAT_005a79f0);
  iVar9 = DAT_005a7a14;
  iVar2 = 0;
  if (0 < DAT_005a7a14) {
    iVar7 = 0;
    do {
      if ((iVar7 < 0) || (DAT_005a7a14 <= iVar2)) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)(DAT_005a7a24 + iVar7);
      }
      FUN_00476010(&DAT_005a79f0,*piVar5,piVar5[1],piVar5[2],piVar5[3]);
      iVar2 = iVar2 + 1;
      iVar7 = iVar7 + 0x10;
    } while (iVar2 < iVar9);
  }
  FUN_00476e10(&DAT_005a7a14,(int *)&DAT_005a7a80);
  DAT_005a7ad8 = 0;
  if (((DAT_005d2098 & 1) != 0) && (DAT_005a7a38 != 0)) {
    FUN_004950c0(aiStack_2c,DAT_00585170);
    uStack_4 = 0;
    FUN_00477910(&DAT_005a7a38,aiStack_2c,0xffff);
    DAT_00583648 = DAT_00583648 + -0x20;
    uStack_4 = 0xffffffff;
    FUN_00495590(aiStack_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


