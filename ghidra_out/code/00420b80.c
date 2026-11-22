
undefined4 __thiscall
FUN_00420b80(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  undefined4 uVar2;
  bool bVar3;
  void *pvVar4;
  int iVar5;
  undefined4 *this_00;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  bool bVar11;
  longlong lVar12;
  uint local_118;
  float local_114;
  undefined *local_110;
  uint local_10c;
  float local_108;
  float local_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  int local_f0;
  int local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_dc;
  int local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  
  if ((*(int *)((int)this + 0x48) != DAT_005cc9d4) && (iVar5 = FUN_00420560((int)this), iVar5 != 0))
  {
    return 0;
  }
  iVar5 = *(int *)((int)this + 0x48);
  bVar3 = false;
  if ((iVar5 < 0) || (0xf < iVar5)) {
    local_110 = (undefined *)0x0;
  }
  else {
    local_110 = &DAT_005af194 + iVar5 * 0x1d84;
  }
  if (local_110 == (undefined *)0x0) {
    return 0;
  }
  if (((local_110[0x15d8] & 2) == 0) || (DAT_005ae950 == this)) goto LAB_00420f7c;
  iVar5 = FUN_004a8330(&DAT_005ae958,param_1,1);
  if ((iVar5 != 0) &&
     (((*(byte *)(iVar5 + 0x30) & 0x80) != 0 && (iVar5 = FUN_0050c7f0(iVar5), iVar5 == 0)))) {
    FUN_004d41c0(DAT_005a7b78,s_ai_request_move_to_AILeaveAlone_t_00555cd0);
  }
  this_00 = FUN_004a8360(&DAT_005ae958,param_1);
  if ((this_00 != (undefined4 *)0x0) &&
     (iVar5 = FUN_004102e0(this_00,&local_f0), pvVar4 = DAT_005a7b78, iVar5 != 0)) {
    uVar2 = this_00[10];
    local_10c = 0;
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar4);
      *(undefined4 *)((int)pvVar4 + 0x90) = 0;
      *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
    }
    else {
      iVar7 = *(int *)((int)DAT_005a7b78 + 0x50);
      iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
      *(undefined4 *)(iVar7 + iVar6 * 8) = 1;
      *(undefined4 *)(iVar7 + 4 + iVar6 * 8) = uVar2;
    }
    FUN_004d09a0(DAT_005a7b78,DAT_005787d0,DAT_005787d4,0);
    pvVar4 = DAT_005a7b78;
    if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
      piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
      iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
      local_118 = *(uint *)(*piVar1 + -8 + iVar7 * 8);
      local_114 = *(float *)(*piVar1 + -4 + iVar7 * 8);
    }
    else {
      FUN_00404ab0(DAT_005a7b78,6);
      local_118 = 0;
    }
    iVar7 = FUN_004026a0(&local_118,&local_10c,(uint *)&local_108,&local_104);
    if (iVar7 == 0) {
      *(undefined4 *)((int)pvVar4 + 0x90) = 0xe;
      FUN_004d4550(pvVar4);
      *(undefined4 *)((int)pvVar4 + 0x90) = 0;
      *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
    }
    if (local_10c != 0) {
      iVar7 = FUN_004102e0(this,(int *)&local_118);
      if (iVar7 != 0) {
        if ((*(int *)(iVar5 + 0x14) == *(int *)(iVar7 + 0x14)) &&
           (*(int *)(iVar5 + 0x18) == *(int *)(iVar7 + 0x18))) {
          bVar11 = true;
        }
        else if (((char)*(int *)(iVar5 + 0x14) == '\x05') &&
                ((char)*(int *)(iVar7 + 0x14) == '\x05')) {
          bVar11 = *(int *)(iVar5 + 0x18) == *(int *)(iVar7 + 0x18);
        }
        else {
          iVar6 = FUN_004026a0((uint *)(iVar5 + 0x14),&local_fc,&local_100,&local_108);
          if ((iVar6 == 0) ||
             (iVar6 = FUN_004026a0((uint *)(iVar7 + 0x14),&local_f4,&local_f8,&local_104),
             iVar6 == 0)) {
LAB_00420e32:
            bVar11 = false;
          }
          else {
            uVar8 = *(uint *)(iVar5 + 0x14) & 0xff;
            if ((uVar8 == 4) || (uVar9 = *(uint *)(iVar7 + 0x14) & 0xff, uVar9 == 4)) {
              if ((!NAN(local_108) && !NAN(local_104)) && local_108 != local_104) goto LAB_00420e32;
              bVar11 = true;
            }
            else if ((uVar8 == 2) || (uVar9 == 2)) {
              bVar11 = local_100 == local_f8;
            }
            else {
              bVar11 = local_fc == local_f4;
            }
          }
        }
        if (bVar11) {
          bVar3 = true;
        }
      }
      if (!bVar3) {
        FUN_004d41c0(DAT_005a7b78,s_ai_request_move_to_target_that_s_00555c9c);
      }
    }
  }
  iVar5 = FUN_004102e0(this,(int *)&local_118);
  pvVar4 = DAT_005a7b78;
  if ((iVar5 != 0) && (iVar5 = *(int *)((int)this + 0x28), DAT_00555730 != iVar5)) {
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar4);
      *(undefined4 *)((int)pvVar4 + 0x90) = 0;
      *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
    }
    else {
      iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
      iVar7 = *(int *)((int)pvVar4 + 0x50);
      *(undefined4 *)(iVar7 + iVar6 * 8) = 1;
      *(int *)(iVar7 + 4 + iVar6 * 8) = iVar5;
    }
    FUN_004d09a0(DAT_005a7b78,DAT_005787d0,DAT_005787d4,0);
    pvVar4 = DAT_005a7b78;
    if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
      piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
      iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
      uVar8 = *(uint *)(*piVar1 + -8 + iVar5 * 8);
      local_114 = *(float *)(*piVar1 + -4 + iVar5 * 8);
    }
    else {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
      FUN_004d4550(pvVar4);
      *(undefined4 *)((int)pvVar4 + 0x90) = 0;
      *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
      uVar8 = 0;
    }
    uVar8 = uVar8 & 0xff;
    if (uVar8 == 1) {
      fVar10 = local_114;
    }
    else if (uVar8 == 2) {
      fVar10 = (float)((int)local_114 >> 8);
    }
    else if (uVar8 == 4) {
      lVar12 = __ftol((float10)local_114);
      fVar10 = (float)lVar12;
    }
    else {
      *(undefined4 *)((int)pvVar4 + 0x90) = 0xe;
      FUN_004d4550(pvVar4);
      *(undefined4 *)((int)pvVar4 + 0x90) = 0;
      *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
      fVar10 = 0.0;
    }
    if (fVar10 != 0.0) {
      FUN_004d41c0(DAT_005a7b78,s_ai_request_move_of_army_that_sho_00555c68);
    }
  }
LAB_00420f7c:
  if (*(int *)((int)this + 0x1c) == param_1) {
    return 0;
  }
  *(uint *)((int)this + 0x30) = *(uint *)((int)this + 0x30) | 2;
  iVar5 = FUN_004bb5a0((int)local_110);
  if (iVar5 != 0) {
    local_ec = *(int *)((int)this + 0x28);
    local_e4 = param_3;
    local_d0 = param_5;
    local_d4 = param_2;
    local_e8 = param_4;
    local_dc = *(undefined4 *)((int)this + 0x1c);
    local_d8 = param_1;
    local_cc = 0;
    FUN_0047c570(&local_ec,param_6);
  }
  return 1;
}


