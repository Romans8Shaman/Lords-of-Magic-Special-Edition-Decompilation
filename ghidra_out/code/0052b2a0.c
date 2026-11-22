
undefined4 __thiscall FUN_0052b2a0(void *this,int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_0052b260(this);
  uVar1 = FUN_005397f0((char *)&local_10,4,1,param_1);
  if (uVar1 != 1) {
    return 0;
  }
  uVar1 = FUN_005397f0((char *)&local_14,4,1,param_1);
  if (uVar1 != 1) {
    return 0;
  }
  if (0xc < local_14) {
    return 0;
  }
  if (0 < local_10) {
    iVar3 = 0;
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    if (0 < local_10) {
      while( true ) {
        puVar2 = (undefined4 *)Ordinal_401(0x10,s_C__lomse_source_storm_h_00555130,0x3ef,0);
        if (puVar2 == (undefined4 *)0x0) {
          return 0;
        }
        puVar2[3] = *(undefined4 *)this;
        *(undefined4 **)this = puVar2;
        uVar1 = FUN_005397f0((char *)&local_c,local_14,1,param_1);
        if (uVar1 != 1) break;
        iVar3 = iVar3 + 1;
        *puVar2 = local_c;
        puVar2[1] = local_8;
        puVar2[2] = local_4;
        if (local_10 <= iVar3) {
          return 1;
        }
      }
      return 0;
    }
  }
  return 1;
}


