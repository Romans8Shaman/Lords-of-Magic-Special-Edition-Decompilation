
undefined4 __thiscall
FUN_00532db0(void *this,int *param_1,int param_2,int *param_3,undefined4 *param_4,
            undefined4 *param_5,int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int local_84;
  int local_80 [32];
  
  iVar1 = DAT_005ae9c8 * DAT_005ae9c4;
  *(int *)((int)this + 0xc) = DAT_005ae9c4;
  if (*(int *)((int)this + 8) != iVar1) {
    FUN_00531b20(this,iVar1);
    DAT_005d3858 = 0;
    DAT_00574404 = -1;
    DAT_00574408 = -1;
    DAT_0057440c = -1;
  }
  iVar4 = 0;
  piVar3 = param_1 + 0x31;
  piVar5 = local_80;
  do {
    local_84 = 1;
    FUN_00527e90(piVar3,iVar4 + 0x6c,&local_84);
    if (local_84 < 1) {
      local_84 = 1;
    }
    *piVar5 = local_84;
    iVar4 = iVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (iVar4 < 0x20);
  if ((((DAT_00574404 != param_2) || (DAT_005d3858 != param_1[0x15])) || (DAT_0057440c != *piVar3))
     || (DAT_00574410 != param_7)) {
    if (param_1[0x15] == 0x40000) {
      if (DAT_005af0bc == 0) {
        FUN_004c6660(&DAT_005aef04);
      }
      iVar4 = 0;
      if (0 < iVar1) {
        iVar6 = 0;
        do {
          if (*(short *)(DAT_005aef04 + param_2 * 6 + 2) == *(short *)(DAT_005aef04 + 2 + iVar6)) {
            iVar2 = FUN_004a4c30(&DAT_005ae958,iVar4);
            *(int *)(*(int *)((int)this + 4) + iVar4 * 4) = local_80[iVar2];
          }
          else {
            *(undefined4 *)(*(int *)((int)this + 4) + iVar4 * 4) = 0x7fffffff;
          }
          iVar4 = iVar4 + 1;
          iVar6 = iVar6 + 6;
        } while (iVar4 < iVar1);
      }
    }
    else if (param_1[0x15] == 0x80000) {
      if (DAT_005af0bc == 0) {
        FUN_004c6660(&DAT_005aef04);
      }
      iVar4 = 0;
      if (0 < iVar1) {
        iVar6 = 0;
        do {
          if (*(short *)(DAT_005aef04 + param_2 * 6 + 4) == *(short *)(DAT_005aef04 + 4 + iVar6)) {
            iVar2 = FUN_004a4c30(&DAT_005ae958,iVar4);
            *(int *)(*(int *)((int)this + 4) + iVar4 * 4) = local_80[iVar2];
          }
          else {
            *(undefined4 *)(*(int *)((int)this + 4) + iVar4 * 4) = 0x7fffffff;
          }
          iVar4 = iVar4 + 1;
          iVar6 = iVar6 + 6;
        } while (iVar4 < iVar1);
      }
    }
    else {
      iVar4 = 0;
      if (0 < iVar1) {
        do {
          iVar6 = FUN_004a4c30(&DAT_005ae958,iVar4);
          *(int *)(*(int *)((int)this + 4) + iVar4 * 4) = local_80[iVar6];
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar1);
      }
    }
    DAT_00574404 = param_2;
    DAT_00574408 = *param_3;
    DAT_005d3858 = param_1[0x15];
    DAT_0057440c = *piVar3;
    DAT_00574410 = param_7;
    FUN_00531c70(this,param_2);
  }
  iVar1 = *param_3;
  uVar7 = 0x3f000000;
  iVar4 = FUN_00420600((int)param_1);
  iVar1 = FUN_00532c30(&DAT_005ae958,this,iVar4,iVar1,uVar7);
  if (iVar1 < 0) {
    *param_5 = 0;
    return 0;
  }
  *param_3 = iVar1;
  piVar3 = (int *)Ordinal_401(param_6 * 4 + 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  *piVar3 = *param_3;
  iVar1 = *param_3;
  iVar4 = 1;
  piVar5 = piVar3;
  do {
    piVar5 = piVar5 + 1;
    iVar1 = FUN_00531ed0(this,iVar1);
    *piVar5 = iVar1;
    iVar6 = iVar4 + 1;
    if (iVar1 == param_2) {
      *param_5 = iVar4;
      if (0 < iVar6) {
        iVar1 = iVar6 * 4;
        do {
          iVar4 = iVar1 + -4;
          iVar1 = iVar1 + -4;
          *param_4 = *(undefined4 *)((int)piVar3 + iVar4);
          param_4 = param_4 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      if (piVar3 != (int *)0x0) {
        Ordinal_403(piVar3,s_C__lomse_source_storm_h_00555130,0x3f6,0);
      }
      return 1;
    }
  } while ((iVar1 != -1) && (iVar4 = iVar6, iVar6 < param_6));
  *param_5 = 0;
  if (piVar3 != (int *)0x0) {
    Ordinal_403(piVar3,s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  return 0;
}


