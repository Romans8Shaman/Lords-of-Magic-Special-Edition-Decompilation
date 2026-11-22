
void __thiscall FUN_00533110(void *this,int param_1,int param_2)

{
  int iVar1;
  int *this_00;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80 [32];
  
  iVar1 = DAT_005ae9c8 * DAT_005ae9c4;
  local_88 = *(int *)(param_2 + 0x14);
  local_84 = *(int *)(param_2 + 0xec);
  *(int *)((int)this + 0xc) = DAT_005ae9c4;
  if (*(int *)((int)this + 8) != iVar1) {
    FUN_00531b20(this,iVar1);
    DAT_005d3858 = 0;
    DAT_00574404 = -1;
    DAT_00574408 = 0xffffffff;
    DAT_0057440c = -1;
  }
  iVar3 = 0;
  this_00 = (int *)(param_1 + 0xc4);
  piVar4 = local_80;
  do {
    local_90 = 1;
    FUN_00527e90(this_00,iVar3 + 0x6c,&local_90);
    iVar2 = local_88;
    if (local_90 < 0) {
      local_90 = 0;
    }
    iVar3 = iVar3 + 1;
    *piVar4 = local_90 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar3 < 0x20);
  if ((((DAT_00574404 != local_88) || (DAT_005d3858 != *(int *)(param_1 + 0x54))) ||
      (DAT_0057440c != *this_00)) || (DAT_00574410 != local_84)) {
    if (*(int *)(param_1 + 0x54) == 0x40000) {
      if (DAT_005af0bc == 0) {
        FUN_004c6660(&DAT_005aef04);
      }
      iVar3 = 0;
      if (0 < iVar1) {
        iVar5 = 0;
        local_8c = iVar2 * 6 + 2;
        do {
          if (*(short *)(DAT_005aef04 + local_8c) == *(short *)(DAT_005aef04 + 2 + iVar5)) {
            iVar2 = FUN_004a4c30(&DAT_005ae958,iVar3);
            *(int *)(*(int *)((int)this + 4) + iVar3 * 4) = local_80[iVar2];
          }
          else {
            *(undefined4 *)(*(int *)((int)this + 4) + iVar3 * 4) = 0x7fffffff;
          }
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + 6;
        } while (iVar3 < iVar1);
        iVar2 = local_88;
      }
    }
    else if (*(int *)(param_1 + 0x54) == 0x80000) {
      if (DAT_005af0bc == 0) {
        FUN_004c6660(&DAT_005aef04);
      }
      iVar3 = 0;
      if (0 < iVar1) {
        iVar5 = 0;
        local_8c = iVar2 * 6 + 4;
        do {
          if (*(short *)(DAT_005aef04 + local_8c) == *(short *)(DAT_005aef04 + 4 + iVar5)) {
            iVar2 = FUN_004a4c30(&DAT_005ae958,iVar3);
            *(int *)(*(int *)((int)this + 4) + iVar3 * 4) = local_80[iVar2];
          }
          else {
            *(undefined4 *)(*(int *)((int)this + 4) + iVar3 * 4) = 0x7fffffff;
          }
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + 6;
        } while (iVar3 < iVar1);
        iVar2 = local_88;
      }
    }
    else {
      iVar3 = 0;
      if (0 < iVar1) {
        do {
          iVar5 = FUN_004a4c30(&DAT_005ae958,iVar3);
          *(int *)(*(int *)((int)this + 4) + iVar3 * 4) = local_80[iVar5];
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar1);
      }
    }
    DAT_00574408 = 0xffffffff;
    DAT_005d3858 = *(int *)(param_1 + 0x54);
    DAT_0057440c = *this_00;
    DAT_00574410 = local_84;
    DAT_00574404 = iVar2;
    FUN_00531c70(this,iVar2);
  }
  (/*IC:00533358*/**(code **)(param_2 + 0xf0))(*(undefined4 *)(param_2 + 0xf4),this);
  return;
}


