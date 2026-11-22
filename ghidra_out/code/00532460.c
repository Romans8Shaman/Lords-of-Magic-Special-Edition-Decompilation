
undefined4 __thiscall
FUN_00532460(void *this,int *param_1,int param_2,int param_3,undefined4 *param_4,undefined4 *param_5
            ,int param_6,int param_7)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int local_88;
  void *local_84;
  int local_80 [32];
  
  iVar5 = 0;
  if (param_1[0x15] == 0) {
    *param_5 = 0;
    return 0;
  }
  iVar1 = DAT_005ae9c8 * DAT_005ae9c4;
  *(int *)((int)this + 0xc) = DAT_005ae9c4;
  local_84 = this;
  if (*(int *)((int)this + 8) != iVar1) {
    FUN_00531b20(this,iVar1);
    DAT_005d3858 = 0;
    DAT_00574404 = -1;
    DAT_0057440c = -1;
  }
  piVar6 = param_1 + 0x31;
  piVar4 = local_80;
  do {
    local_88 = 1;
    FUN_00527e90(piVar6,iVar5 + 0x6c,&local_88);
    if (local_88 < 1) {
      local_88 = 1;
    }
    *piVar4 = local_88;
    iVar5 = iVar5 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar5 < 0x20);
  if ((((DAT_00574404 != param_2) || (DAT_005d3858 != param_1[0x15])) || (DAT_0057440c != *piVar6))
     || (DAT_00574410 != param_7)) {
    if (param_1[0x15] == 0x40000) {
      if (DAT_005af0bc == 0) {
        FUN_004c6660(&DAT_005aef04);
      }
      iVar5 = 0;
      if (0 < iVar1) {
        iVar7 = 0;
        do {
          if (*(short *)(DAT_005aef04 + param_2 * 6 + 2) == *(short *)(DAT_005aef04 + 2 + iVar7)) {
            puVar2 = FUN_004c6fc0();
            iVar3 = FUN_004a8330(puVar2,iVar5,0);
            if (((param_3 != iVar5) && (iVar3 != 0)) && (*(int *)(iVar3 + 0x48) == param_1[0x12]))
            goto LAB_005325e3;
            iVar3 = FUN_004a4c30(&DAT_005ae958,iVar5);
            *(int *)(*(int *)((int)this + 4) + iVar5 * 4) = local_80[iVar3];
          }
          else {
LAB_005325e3:
            *(undefined4 *)(*(int *)((int)this + 4) + iVar5 * 4) = 0x7fffffff;
          }
          iVar5 = iVar5 + 1;
          iVar7 = iVar7 + 6;
        } while (iVar5 < iVar1);
      }
    }
    else if (param_1[0x15] == 0x80000) {
      if (DAT_005af0bc == 0) {
        FUN_004c6660(&DAT_005aef04);
      }
      iVar5 = 0;
      if (0 < iVar1) {
        iVar7 = 0;
        do {
          if (*(short *)(DAT_005aef04 + param_2 * 6 + 4) == *(short *)(DAT_005aef04 + 4 + iVar7)) {
            puVar2 = FUN_004c6fc0();
            iVar3 = FUN_004a8330(puVar2,iVar5,0);
            if (((param_3 != iVar5) && (iVar3 != 0)) && (*(int *)(iVar3 + 0x48) == param_1[0x12]))
            goto LAB_00532691;
            iVar3 = FUN_004a4c30(&DAT_005ae958,iVar5);
            *(int *)(*(int *)((int)this + 4) + iVar5 * 4) = local_80[iVar3];
          }
          else {
LAB_00532691:
            *(undefined4 *)(*(int *)((int)this + 4) + iVar5 * 4) = 0x7fffffff;
          }
          iVar5 = iVar5 + 1;
          iVar7 = iVar7 + 6;
        } while (iVar5 < iVar1);
      }
    }
    else {
      iVar5 = 0;
      if (0 < iVar1) {
        do {
          puVar2 = FUN_004c6fc0();
          iVar7 = FUN_004a8330(puVar2,iVar5,0);
          if (((param_3 == iVar5) || (iVar7 == 0)) || (*(int *)(iVar7 + 0x48) != param_1[0x12])) {
            iVar7 = FUN_004a4c30(&DAT_005ae958,iVar5);
            *(int *)(*(int *)((int)this + 4) + iVar5 * 4) = local_80[iVar7];
          }
          else {
            *(undefined4 *)(*(int *)((int)this + 4) + iVar5 * 4) = 0x7fffffff;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar1);
      }
    }
    DAT_00574404 = param_2;
    DAT_00574408 = param_3;
    DAT_005d3858 = param_1[0x15];
    DAT_0057440c = *piVar6;
    DAT_00574410 = param_7;
    FUN_00531c70(this,param_2);
  }
  piVar4 = (int *)Ordinal_401(param_6 * 4 + 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  *piVar4 = param_3;
  iVar5 = 1;
  piVar6 = piVar4;
  do {
    piVar6 = piVar6 + 1;
    param_3 = FUN_00531ed0(local_84,param_3);
    *piVar6 = param_3;
    iVar1 = iVar5 + 1;
    if (param_3 == param_2) {
      *param_5 = iVar5;
      if (0 < iVar1) {
        iVar5 = iVar1 * 4;
        do {
          iVar7 = iVar5 + -4;
          iVar5 = iVar5 + -4;
          *param_4 = *(undefined4 *)((int)piVar4 + iVar7);
          param_4 = param_4 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      if (piVar4 != (int *)0x0) {
        Ordinal_403(piVar4,s_C__lomse_source_storm_h_00555130,0x3f6,0);
      }
      return 1;
    }
  } while ((param_3 != -1) && (iVar5 = iVar1, iVar1 < param_6));
  if (piVar4 != (int *)0x0) {
    Ordinal_403(piVar4,s_C__lomse_source_storm_h_00555130,0x3eb,0);
  }
  return 0;
}


