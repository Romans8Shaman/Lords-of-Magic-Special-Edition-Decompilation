
int __thiscall FUN_004a6ff0(void *this,int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int local_8;
  int local_4;
  
  iVar1 = param_3;
  local_8 = 99999;
  local_4 = -1;
  uVar2 = FUN_004a4c50(this,param_1);
  if (((param_2 & uVar2) == 0) || (*(int *)(*(int *)((int)this + 100) + param_1 * 8) != 0))
  goto LAB_004a70cd;
  if ((param_2 & 0x100000) == 0) {
    if (((param_2 & 0x40000) == 0) || ((param_2 & 0x80000) == 0)) {
      if ((param_2 & 0x40000) == 0) {
        if ((param_2 & 0x80000) == 0) goto LAB_004a70bb;
        uVar2 = FUN_004acea0(&DAT_005aef04,param_1,param_3);
      }
      else {
        if (DAT_005af0bc == 0) {
          FUN_004c6660(&DAT_005aef04);
        }
        if ((((param_1 < 0) || (param_3 < 0)) || (DAT_005aef10 <= param_1)) ||
           (DAT_005aef10 <= param_3)) {
LAB_004a70bb:
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
LAB_004a70cd:
  iVar4 = 0;
  if (0 < *(int *)((int)this + 0x68)) {
    param_3 = 0;
    do {
      if ((*(int *)(*(int *)((int)this + 100) + iVar4 * 8) == 0) &&
         (uVar2 = FUN_004a4c50(this,iVar4), (param_2 & uVar2) != 0)) {
        if ((param_2 & 0x100000) == 0) {
          if (((param_2 & 0x40000) == 0) || ((param_2 & 0x80000) == 0)) {
            if ((param_2 & 0x40000) == 0) {
              if ((param_2 & 0x80000) != 0) {
                if (DAT_005af0bc == 0) {
                  FUN_004c6660(&DAT_005aef04);
                }
                if ((((-1 < iVar4) && (-1 < iVar1)) && (iVar4 < DAT_005aef10)) &&
                   (iVar1 < DAT_005aef10)) {
                  bVar5 = *(short *)(DAT_005aef04 + 4 + param_3) ==
                          *(short *)(DAT_005aef04 + 4 + iVar1 * 6);
                  goto LAB_004a71d4;
                }
              }
            }
            else {
              if (DAT_005af0bc == 0) {
                FUN_004c6660(&DAT_005aef04);
              }
              if (((-1 < iVar4) && (-1 < iVar1)) &&
                 ((iVar4 < DAT_005aef10 && (iVar1 < DAT_005aef10)))) {
                bVar5 = *(short *)(DAT_005aef04 + 2 + param_3) ==
                        *(short *)(DAT_005aef04 + 2 + iVar1 * 6);
                goto LAB_004a71d4;
              }
            }
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
        }
        else {
          bVar5 = true;
        }
LAB_004a71d4:
        if ((bVar5) && (iVar3 = FUN_004a8960(this,param_1,iVar4), iVar3 < local_8)) {
          local_8 = iVar3;
          local_4 = iVar4;
        }
      }
      iVar4 = iVar4 + 1;
      param_3 = param_3 + 6;
    } while (iVar4 < *(int *)((int)this + 0x68));
  }
  return local_4;
}


