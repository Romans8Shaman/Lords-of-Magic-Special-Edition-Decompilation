
int __thiscall FUN_004a73e0(void *this,int param_1,uint param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int local_28;
  int local_24;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_28 = 99999;
  local_18 = -1;
  uVar2 = FUN_004a4c50(this,param_1);
  if (((param_2 & uVar2) == 0) || (*(int *)(*(int *)((int)this + 100) + param_1 * 8) != 0))
  goto LAB_004a74ba;
  if ((param_2 & 0x100000) == 0) {
    if (((param_2 & 0x40000) == 0) || ((param_2 & 0x80000) == 0)) {
      if ((param_2 & 0x40000) == 0) {
        if ((param_2 & 0x80000) == 0) goto LAB_004a74a8;
        uVar2 = FUN_004acea0(&DAT_005aef04,param_1,param_3);
      }
      else {
        if (DAT_005af0bc == 0) {
          FUN_004c6660(&DAT_005aef04);
        }
        if ((((param_1 < 0) || (param_3 < 0)) || (DAT_005aef10 <= param_1)) ||
           (DAT_005aef10 <= param_3)) {
LAB_004a74a8:
          uVar2 = 0;
        }
        else {
          uVar2 = (uint)(*(short *)(DAT_005aef04 + 2 + param_1 * 6) ==
                        *(short *)(DAT_005aef04 + 2 + param_3 * 6));
        }
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  if (uVar2 != 0) {
    return param_1;
  }
LAB_004a74ba:
  iVar7 = param_1 % *(int *)((int)this + 0x6c);
  iVar3 = param_1 / *(int *)((int)this + 0x70);
  local_c = 1;
  do {
    bVar1 = false;
    local_14 = iVar7 - local_c;
    local_1c = iVar7 + local_c;
    local_10 = iVar3 - local_c;
    local_24 = iVar3 + local_c;
    if (local_14 < 0) {
      local_14 = 0;
    }
    iVar4 = *(int *)((int)this + 0x6c) + -1;
    if (iVar4 <= local_1c) {
      local_1c = iVar4;
    }
    if (local_10 < 0) {
      local_10 = 0;
    }
    iVar5 = *(int *)((int)this + 0x70) + -1;
    iVar4 = local_14;
    if (iVar5 <= local_24) {
      local_24 = iVar5;
    }
    for (; iVar4 <= local_1c; iVar4 = iVar4 + 1) {
      iVar5 = local_10 * *(int *)((int)this + 0x6c) + iVar4;
      if (((*(int *)(*(int *)((int)this + 100) + iVar5 * 8) == 0) &&
          (uVar2 = FUN_004a4c50(this,iVar5), (param_2 & uVar2) != 0)) &&
         (iVar6 = FUN_004a8a50(this,param_1,iVar5), iVar6 < local_28)) {
        if ((param_2 & 0x100000) == 0) {
          if (((param_2 & 0x40000) == 0) || ((param_2 & 0x80000) == 0)) {
            if ((param_2 & 0x40000) == 0) {
              if ((param_2 & 0x80000) == 0) goto LAB_004a7623;
              uVar2 = FUN_004acea0(&DAT_005aef04,iVar5,param_3);
            }
            else {
              if (DAT_005af0bc == 0) {
                FUN_004c6660(&DAT_005aef04);
              }
              if ((((iVar5 < 0) || (param_3 < 0)) || (DAT_005aef10 <= iVar5)) ||
                 (DAT_005aef10 <= param_3)) {
LAB_004a7623:
                uVar2 = 0;
              }
              else {
                uVar2 = (uint)(*(short *)(DAT_005aef04 + 2 + iVar5 * 6) ==
                              *(short *)(DAT_005aef04 + 2 + param_3 * 6));
              }
            }
          }
          else {
            uVar2 = 1;
          }
        }
        else {
          uVar2 = 1;
        }
        if (uVar2 != 0) {
          bVar1 = true;
          local_28 = iVar6;
          local_18 = iVar5;
        }
      }
      iVar5 = local_24 * *(int *)((int)this + 0x6c) + iVar4;
      if (((*(int *)(*(int *)((int)this + 100) + iVar5 * 8) == 0) &&
          (uVar2 = FUN_004a4c50(this,iVar5), (param_2 & uVar2) != 0)) &&
         (iVar6 = FUN_004a8a50(this,param_1,iVar5), iVar6 < local_28)) {
        if ((param_2 & 0x100000) == 0) {
          if (((param_2 & 0x40000) == 0) || ((param_2 & 0x80000) == 0)) {
            if ((param_2 & 0x40000) == 0) {
              if ((param_2 & 0x80000) == 0) goto LAB_004a7713;
              uVar2 = FUN_004acea0(&DAT_005aef04,iVar5,param_3);
            }
            else {
              if (DAT_005af0bc == 0) {
                FUN_004c6660(&DAT_005aef04);
              }
              if ((((iVar5 < 0) || (param_3 < 0)) || (DAT_005aef10 <= iVar5)) ||
                 (DAT_005aef10 <= param_3)) {
LAB_004a7713:
                uVar2 = 0;
              }
              else {
                uVar2 = (uint)(*(short *)(DAT_005aef04 + 2 + iVar5 * 6) ==
                              *(short *)(DAT_005aef04 + 2 + param_3 * 6));
              }
            }
          }
          else {
            uVar2 = 1;
          }
        }
        else {
          uVar2 = 1;
        }
        if (uVar2 != 0) {
          bVar1 = true;
          local_28 = iVar6;
          local_18 = iVar5;
        }
      }
    }
    for (iVar4 = local_10; iVar4 <= local_24; iVar4 = iVar4 + 1) {
      iVar5 = iVar4 * *(int *)((int)this + 0x6c) + local_14;
      if (((*(int *)(*(int *)((int)this + 100) + iVar5 * 8) == 0) &&
          (uVar2 = FUN_004a4c50(this,iVar5), (param_2 & uVar2) != 0)) &&
         (iVar6 = FUN_004a8a50(this,param_1,iVar5), iVar6 < local_28)) {
        if ((param_2 & 0x100000) == 0) {
          if (((param_2 & 0x40000) == 0) || ((param_2 & 0x80000) == 0)) {
            if ((param_2 & 0x40000) == 0) {
              if ((param_2 & 0x80000) != 0) {
                if (DAT_005af0bc == 0) {
                  FUN_004c6660(&DAT_005aef04);
                }
                if ((((-1 < iVar5) && (-1 < param_3)) && (iVar5 < DAT_005aef10)) &&
                   (param_3 < DAT_005aef10)) {
                  bVar8 = *(short *)(DAT_005aef04 + 4 + iVar5 * 6) ==
                          *(short *)(DAT_005aef04 + 4 + param_3 * 6);
                  goto LAB_004a7883;
                }
              }
            }
            else {
              if (DAT_005af0bc == 0) {
                FUN_004c6660(&DAT_005aef04);
              }
              if (((-1 < iVar5) && (-1 < param_3)) &&
                 ((iVar5 < DAT_005aef10 && (param_3 < DAT_005aef10)))) {
                bVar8 = *(short *)(DAT_005aef04 + 2 + iVar5 * 6) ==
                        *(short *)(DAT_005aef04 + 2 + param_3 * 6);
                goto LAB_004a7883;
              }
            }
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
        }
        else {
          bVar8 = true;
        }
LAB_004a7883:
        if (bVar8) {
          bVar1 = true;
          local_28 = iVar6;
          local_18 = iVar5;
        }
      }
      iVar5 = iVar4 * *(int *)((int)this + 0x6c) + local_1c;
      if (((*(int *)(*(int *)((int)this + 100) + iVar5 * 8) == 0) &&
          (uVar2 = FUN_004a4c50(this,iVar5), (param_2 & uVar2) != 0)) &&
         (iVar6 = FUN_004a8a50(this,param_1,iVar5), iVar6 < local_28)) {
        if ((param_2 & 0x100000) == 0) {
          if (((param_2 & 0x40000) == 0) || ((param_2 & 0x80000) == 0)) {
            if ((param_2 & 0x40000) == 0) {
              if ((param_2 & 0x80000) != 0) {
                if (DAT_005af0bc == 0) {
                  FUN_004c6660(&DAT_005aef04);
                }
                if ((((-1 < iVar5) && (-1 < param_3)) && (iVar5 < DAT_005aef10)) &&
                   (param_3 < DAT_005aef10)) {
                  bVar8 = *(short *)(DAT_005aef04 + 4 + iVar5 * 6) ==
                          *(short *)(DAT_005aef04 + 4 + param_3 * 6);
                  goto LAB_004a79be;
                }
              }
            }
            else {
              if (DAT_005af0bc == 0) {
                FUN_004c6660(&DAT_005aef04);
              }
              if (((-1 < iVar5) && (-1 < param_3)) &&
                 ((iVar5 < DAT_005aef10 && (param_3 < DAT_005aef10)))) {
                bVar8 = *(short *)(DAT_005aef04 + 2 + iVar5 * 6) ==
                        *(short *)(DAT_005aef04 + 2 + param_3 * 6);
                goto LAB_004a79be;
              }
            }
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
        }
        else {
          bVar8 = true;
        }
LAB_004a79be:
        if (bVar8) {
          bVar1 = true;
          local_28 = iVar6;
          local_18 = iVar5;
        }
      }
    }
    local_c = local_c + 1;
    if ((bVar1) ||
       (((local_14 == 0 && (local_10 == 0)) &&
        ((local_1c == *(int *)((int)this + 0x6c) + -1 &&
         (local_24 == *(int *)((int)this + 0x70) + -1)))))) {
      return local_18;
    }
  } while( true );
}


