
undefined4 __fastcall FUN_004c2a70(int param_1)

{
  int iVar1;
  undefined4 *this;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int local_14;
  int *local_10;
  uint local_c;
  
  iVar1 = FUN_004c1cf0(param_1);
  if (((iVar1 != 0) && (*(int *)(param_1 + 0x5bc) < 1)) &&
     ((this = FUN_00485080(&DAT_005aa12c,*(int *)(param_1 + 0x5b0),0x2f), this == (undefined4 *)0x0
      || (iVar1 = FUN_004c1d30((int)this), iVar1 == 0)))) {
    iVar1 = FUN_00506010(this,0);
    local_c = 0;
    local_14 = 0;
    uVar5 = 0;
    if (0 < *(int *)(param_1 + 0x4c)) {
      local_10 = (int *)(param_1 + 0xc4);
      do {
        iVar2 = FUN_00521e00(local_10);
        if (iVar2 != 0) {
          iVar2 = FUN_00525fc0(local_10);
          iVar3 = FUN_005228b0(local_10,*(undefined4 *)(param_1 + 0x28),local_14);
          iVar4 = FUN_00522870((int)this);
          iVar6 = 0;
          if ((iVar2 == 0) || (iVar2 == 1)) {
            if ((10 - iVar3 < 1) || (*(int *)(param_1 + 0x5c0) % (10 - iVar3) == 0)) {
              iVar6 = (iVar3 - iVar4) * 10;
              if (0 < iVar6) goto LAB_004c2bca;
              if (iVar3 < 5) {
                iVar6 = 1;
              }
              else {
                iVar6 = ((8 < iVar3) - 1 & 0xfffffffd) + 5;
              }
            }
LAB_004c2bc6:
            if (iVar6 < 1) goto LAB_004c2bf8;
          }
          else {
            if ((iVar2 != 2) || ((0 < 7 - iVar3 && (*(int *)(param_1 + 0x5c0) % (7 - iVar3) != 0))))
            goto LAB_004c2bc6;
            iVar6 = (iVar1 + iVar3) * 5 - iVar4;
            if (iVar6 < 1) {
              if (iVar3 < 5) {
                iVar6 = 1;
              }
              else {
                iVar6 = ((8 < iVar3) - 1 & 0xfffffffd) + 5;
              }
              goto LAB_004c2bc6;
            }
          }
LAB_004c2bca:
          uVar5 = FUN_0053a110();
          if ((int)uVar5 % 100 <= iVar6) {
            local_c = local_c | 1 << ((byte)local_14 & 0x1f);
          }
        }
LAB_004c2bf8:
        local_14 = local_14 + 1;
        local_10 = local_10 + 0x13;
      } while (local_14 < *(int *)(param_1 + 0x4c));
      uVar5 = local_c;
    }
    if (uVar5 != 0) {
      FUN_004c1320(*(int *)(param_1 + 0x28),uVar5,0xffffffff,1);
      return 1;
    }
    iVar1 = FUN_00416a30(param_1);
    if (iVar1 != 0) {
      FUN_004c2550(*(undefined4 *)(param_1 + 0x5b0),*(undefined4 *)(param_1 + 0x28));
      return 0;
    }
    FUN_004c1120(*(int *)(param_1 + 0x28));
  }
  return 0;
}


