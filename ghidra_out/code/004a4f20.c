
undefined4 __thiscall FUN_004a4f20(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_004a4b00(this,param_3);
  iVar4 = param_2 * param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(int *)((int)this + 0x5c) = param_1;
  *(int *)((int)this + 0x60) = param_2;
  *(int *)((int)this + 0x58) = iVar4;
  iVar1 = Ordinal_401(iVar4 * 8,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  *(int *)((int)this + 0x54) = iVar1;
  if (iVar1 == 0) {
    FUN_004a4b00(this,param_3);
    return 0;
  }
  DAT_005838a4 = DAT_005838a4 + *(int *)((int)this + 0x58) * 8;
  *(int *)((int)this + 0x70) = param_2;
  iVar2 = (param_2 + -1) * param_1;
  *(int *)((int)this + 0x6c) = param_1;
  *(int *)((int)this + 0x78) = param_1 + -1;
  iVar1 = param_1 * 2 + -1;
  iVar3 = (param_2 + -2) * param_1 + 1;
  *(int *)((int)this + 0x74) = iVar2;
  *(int *)((int)this + 0x68) = iVar4;
  *(int *)((int)this + 0x8c) = iVar2 + -1;
  *(int *)((int)this + 0x7c) = iVar1;
  *(int *)((int)this + 0x80) = iVar2 + 1;
  *(int *)((int)this + 0x84) = iVar3;
  *(int *)((int)this + 0x88) = param_1 + 1;
  *(int *)((int)this + 0x90) = iVar4 + -1;
  *(int *)((int)this + 0x94) = iVar1;
  *(int *)((int)this + 0x98) = iVar2 + 1;
  *(int *)((int)this + 0x9c) = iVar3;
  *(int *)((int)this + 0xa0) = param_1 + 1;
  *(int *)((int)this + 0xa4) = iVar4 + -1;
  iVar1 = Ordinal_401(iVar4 * 8,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  *(int *)((int)this + 100) = iVar1;
  if (iVar1 == 0) {
    FUN_004a4b00(this,1);
    return 0;
  }
  DAT_005838a4 = DAT_005838a4 + *(int *)((int)this + 0x68) * 8;
  iVar1 = Ordinal_401(*(int *)((int)this + 0x68) << 5,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  *(int *)((int)this + 0x18) = iVar1;
  if (iVar1 == 0) {
    FUN_004a4b00(this,1);
    return 0;
  }
  iVar1 = 0;
  DAT_005838a4 = DAT_005838a4 + *(int *)((int)this + 0x68) * 4;
  if (0 < *(int *)((int)this + 0x68)) {
    do {
      iVar2 = 0;
      iVar4 = iVar1 << 5;
      do {
        iVar3 = FUN_004a4d10(this,iVar1,iVar2);
        iVar2 = iVar2 + 1;
        *(int *)(iVar4 + *(int *)((int)this + 0x18)) = iVar3;
        iVar4 = iVar4 + 4;
      } while (iVar2 < 8);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)((int)this + 0x68));
  }
  iVar1 = FUN_004b1410(this,200);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = 0;
  if (0 < *(int *)((int)this + 0x58)) {
    do {
      iVar1 = iVar1 + 1;
      *(undefined2 *)(*(int *)((int)this + 0x54) + -8 + iVar1 * 8) = 0;
      *(undefined2 *)(*(int *)((int)this + 0x54) + -6 + iVar1 * 8) =
           *(undefined2 *)((int)this + 0x48);
      *(undefined4 *)(*(int *)((int)this + 0x54) + -4 + iVar1 * 8) = 0;
    } while (iVar1 < *(int *)((int)this + 0x58));
  }
  iVar1 = 0;
  if (0 < *(int *)((int)this + 0x68)) {
    do {
      iVar1 = iVar1 + 1;
      *(undefined4 *)(*(int *)((int)this + 100) + -4 + iVar1 * 8) = 0;
      *(undefined4 *)(*(int *)((int)this + 100) + -8 + iVar1 * 8) = 0;
    } while (iVar1 < *(int *)((int)this + 0x68));
  }
  if (param_3 == 0) {
    FUN_004fd6b0((int)this + 0x1c);
  }
  else {
    iVar1 = FUN_004f5db0((void *)((int)this + 0x1c),
                         ((int)(*(int *)((int)this + 0x68) +
                               (*(int *)((int)this + 0x68) >> 0x1f & 3U)) >> 2) + 200,200,this);
    if (iVar1 == 0) {
      return 0;
    }
  }
  FUN_00519a10(&DAT_005876d0);
  return 1;
}


