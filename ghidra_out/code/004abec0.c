
int __thiscall FUN_004abec0(void *this,int param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_1c;
  int local_18;
  int local_14;
  int local_c;
  undefined *local_8;
  int local_4;
  
  local_18 = 0;
  local_14 = 99999;
  local_c = -1;
  local_1c = 0;
  if (0 < *(int *)((int)this + 0x68)) {
    local_4 = 0;
    do {
      if (*(int *)(*(int *)((int)this + 100) + local_1c * 8) == 0) {
        if ((param_3 & 0x100000) == 0) {
          if (((param_3 & 0x40000) == 0) || ((param_3 & 0x80000) == 0)) {
            if ((param_3 & 0x40000) == 0) {
              if ((param_3 & 0x80000) == 0) goto LAB_004abf97;
              uVar1 = FUN_004acea0(&DAT_005aef04,local_1c,param_2);
            }
            else {
              if (DAT_005af0bc == 0) {
                FUN_004c6660(&DAT_005aef04);
              }
              if ((((local_4 < 0) || (param_2 < 0)) || (DAT_005aef10 <= local_1c)) ||
                 (DAT_005aef10 <= param_2)) {
LAB_004abf97:
                uVar1 = 0;
              }
              else {
                uVar1 = (uint)(*(short *)(DAT_005aef04 + 2 + local_4) ==
                              *(short *)(DAT_005aef04 + 2 + param_2 * 6));
              }
            }
          }
          else {
            uVar1 = 1;
          }
        }
        else {
          uVar1 = 1;
        }
        if (uVar1 != 0) {
          iVar5 = 0;
          iVar7 = 0;
          local_8 = &DAT_005af194;
          iVar6 = 0;
          do {
            if ((iVar6 < 0) || (puVar2 = local_8, 0x1d83f < iVar6)) {
              puVar2 = (undefined *)0x0;
            }
            if ((((*(uint *)(puVar2 + 0x15d8) & 2) == 0) && ((*(uint *)(puVar2 + 0x15d8) & 1) != 0))
               && (iVar4 = (iVar7 == param_1) + 1,
                  (*(byte *)(*(int *)((int)this + 100) + 4 + local_1c * 8) &
                  (byte)(1 << ((byte)iVar7 & 0x1f))) != 0)) {
              iVar5 = iVar5 + iVar4 * 0x100;
              if (local_14 < iVar5) break;
              iVar3 = FUN_004abdc0(this,local_1c,iVar7);
              if (iVar3 != 0) {
                iVar5 = iVar5 + iVar4;
              }
            }
            iVar6 = iVar6 + 0x1d84;
            iVar7 = iVar7 + 1;
            local_8 = local_8 + 0x1d84;
          } while (iVar6 < 0x1d840);
          if (iVar5 < local_14) {
            local_18 = 1;
            local_c = local_1c;
            local_14 = iVar5;
          }
          else if (iVar5 == local_14) {
            uVar1 = FUN_0053a110();
            if ((int)uVar1 % local_18 == 0) {
              local_c = local_1c;
            }
            local_18 = local_18 + 1;
          }
        }
      }
      local_1c = local_1c + 1;
      local_4 = local_4 + 6;
    } while (local_1c < *(int *)((int)this + 0x68));
  }
  return local_c;
}


