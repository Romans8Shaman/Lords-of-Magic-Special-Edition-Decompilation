
void __thiscall FUN_00448c70(void *this,int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int *this_00;
  int iVar4;
  int iVar5;
  int iVar6;
  uint local_10;
  int local_8;
  int local_4;
  
  uVar2 = FUN_00482ac0(&DAT_005aa12c,param_1,1);
  iVar5 = 0;
  local_10 = 0;
  param_1 = 0;
  if (uVar2 == 0) {
    OutputDebugStringA(s_DoSpecialAffect_HolyGateway___pT_00556860);
  }
  else {
    iVar4 = *(int *)((int)this + 0x48);
    if ((iVar4 != 0) && (iVar6 = 0, 0 < *(int *)(iVar4 + 0x4c))) {
      do {
        iVar3 = *(int *)(iVar5 + 0xc4 + iVar4);
        if ((iVar3 < 0) || ((DAT_005cd2f0 <= iVar3 || (DAT_005cd2f4 == 0)))) {
          iVar3 = 0;
        }
        else {
          iVar3 = DAT_005cd2f4 + iVar3 * 1000;
        }
        if (iVar3 != 0) {
          FUN_00527e90((void *)(iVar5 + 0xc4 + iVar4),0x2e,&local_8);
          iVar4 = *(int *)((int)this + 0x48);
          if (local_8 <= *(int *)(iVar5 + 0xd0 + iVar4)) {
            local_10 = local_10 | 1 << ((byte)iVar6 & 0x1f);
            param_1 = param_1 + 1;
          }
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x4c;
      } while (iVar6 < *(int *)(iVar4 + 0x4c));
      iVar5 = param_1;
    }
    if (0 < iVar5) {
      this_00 = *(int **)((int)this + 0x48);
      if (iVar5 <= this_00[0x13]) {
        if (iVar5 < this_00[0x13]) {
          iVar5 = FUN_00414e50(this_00,~local_10,&local_4);
          if (iVar5 == 0) {
            return;
          }
          this_00 = (int *)FUN_00482ac0(&DAT_005aa12c,local_4,0);
          if (this_00 == (int *)0x0) {
            return;
          }
        }
        else {
          *(undefined4 *)((int)this + 0x48) = 0;
        }
        if (*(void **)(uVar2 + 0x58) == (void *)0x0) {
          *(int **)(uVar2 + 0x58) = this_00;
          this_00[10] = *(int *)(uVar2 + 0x28);
          *(undefined4 *)(*(int *)(uVar2 + 0x58) + 0x1c) = *(undefined4 *)(uVar2 + 0x1c);
        }
        else {
          iVar5 = FUN_00415610(*(void **)(uVar2 + 0x58),(int)this_00);
          if (iVar5 != 0) {
            if ((this_00[0xc] & 0x1c00000U) != 0) {
              FUN_004245a0(this_00);
            }
            FUN_00415fd0(this_00,*(int **)(uVar2 + 0x58));
            return;
          }
          FUN_004245a0(*(int **)(uVar2 + 0x58));
          *(int **)(uVar2 + 0x58) = this_00;
          this_00[10] = *(int *)(uVar2 + 0x28);
          *(undefined4 *)(*(int *)(uVar2 + 0x58) + 0x1c) = *(undefined4 *)(uVar2 + 0x1c);
        }
        *(uint *)(*(int *)(uVar2 + 0x58) + 0x30) =
             *(uint *)(*(int *)(uVar2 + 0x58) + 0x30) | 0x1000000;
        puVar1 = (uint *)(*(int *)(uVar2 + 0x58) + 0x30);
        *puVar1 = *puVar1 & 0x9fffffff;
        return;
      }
    }
  }
  return;
}


