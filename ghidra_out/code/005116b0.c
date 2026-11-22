
void __thiscall FUN_005116b0(void *this,void *param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int local_350;
  int local_34c;
  uint local_348;
  uint local_344;
  uint local_340;
  void *local_33c;
  float local_338;
  uint local_334;
  undefined4 local_330;
  float local_328;
  uint local_324 [2];
  float local_31c;
  uint local_318 [2];
  uint local_310;
  uint local_30c [2];
  uint local_304;
  undefined1 local_300;
  byte local_2ff [767];
  
  local_33c = this;
  FUN_004a2380(&DAT_005aea70,(int)&local_300);
  local_350 = 0;
  local_330 = 1;
  local_34c = 0x152;
  iVar3 = 0;
  pbVar4 = local_2ff;
  while( true ) {
    local_344 = (uint)*pbVar4 << 2;
    local_340 = (uint)pbVar4[-1] << 2;
    local_348 = (uint)pbVar4[1] << 2;
    if (*(int *)((int)param_1 + 0x54) == 0) {
      *(undefined4 *)((int)param_1 + 0x90) = 3;
      FUN_004d4550(param_1);
      *(undefined4 *)((int)param_1 + 0x90) = 0;
      *(undefined4 *)((int)param_1 + 0xa4) = 0;
    }
    else {
      iVar1 = *(int *)((int)param_1 + 0x50);
      iVar2 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar2;
      *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
      *(uint *)(iVar1 + 4 + iVar2 * 8) = local_340;
    }
    if (*(int *)((int)param_1 + 0x54) == 0) {
      *(undefined4 *)((int)param_1 + 0x90) = 3;
      FUN_004d4550(param_1);
      *(undefined4 *)((int)param_1 + 0x90) = 0;
      *(undefined4 *)((int)param_1 + 0xa4) = 0;
    }
    else {
      iVar1 = *(int *)((int)param_1 + 0x50);
      iVar2 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar2;
      *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
      *(uint *)(iVar1 + 4 + iVar2 * 8) = local_344;
    }
    if (*(int *)((int)param_1 + 0x54) == 0) {
      *(undefined4 *)((int)param_1 + 0x90) = 3;
      FUN_004d4550(param_1);
      *(undefined4 *)((int)param_1 + 0x90) = 0;
      *(undefined4 *)((int)param_1 + 0xa4) = 0;
    }
    else {
      iVar1 = *(int *)((int)param_1 + 0x50);
      iVar2 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar2;
      *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
      *(uint *)(iVar1 + 4 + iVar2 * 8) = local_348;
    }
    if (*(int *)((int)param_1 + 0x54) == 0) {
      *(undefined4 *)((int)param_1 + 0x90) = 3;
      FUN_004d4550(param_1);
      *(undefined4 *)((int)param_1 + 0x90) = 0;
      *(undefined4 *)((int)param_1 + 0xa4) = 0;
    }
    else {
      iVar1 = *(int *)((int)param_1 + 0x50);
      iVar2 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar2;
      *(undefined4 *)(iVar1 + iVar2 * 8) = local_330;
      *(int *)(iVar1 + 4 + iVar2 * 8) = local_350;
    }
    FUN_004d05e0(param_1,param_2,param_3);
    FUN_0040adb0(param_1,local_324);
    iVar1 = FUN_004026a0(local_324,&local_348,&local_304,&local_328);
    if (iVar1 == 0) break;
    FUN_0040adb0(param_1,local_318);
    iVar1 = FUN_004026a0(local_318,&local_344,&local_310,&local_338);
    if (iVar1 == 0) break;
    FUN_0040adb0(param_1,local_30c);
    iVar1 = FUN_004026a0(local_30c,&local_340,&local_334,&local_31c);
    if (iVar1 == 0) break;
    local_340 = local_340 & ((int)local_340 < 1) - 1;
    if (0xff < (int)local_340) {
      local_340 = 0xff;
    }
    local_344 = ((int)local_344 < 1) - 1 & local_344;
    if (0xff < (int)local_344) {
      local_344 = 0xff;
    }
    local_348 = ((int)local_348 < 1) - 1 & local_348;
    if (0xff < (int)local_348) {
      local_348 = 0xff;
    }
    pbVar4 = pbVar4 + 3;
    iVar1 = iVar3 + local_34c;
    iVar3 = iVar3 + 1;
    *(short *)((int)local_33c + iVar1 * 2) =
         (short)(((int)local_340 >> (DAT_005853f0 & 0x1f)) << ((byte)DAT_005853ec & 0x1f)) +
         (short)(((int)local_348 >> (DAT_00585400 & 0x1f)) << ((byte)DAT_005853fc & 0x1f)) +
         (short)(((int)local_344 >> (DAT_005853f8 & 0x1f)) << ((byte)DAT_005853f4 & 0x1f));
    if (0xff < iVar3) {
      local_34c = local_34c + 0x100;
      local_350 = local_350 + 1;
      if (0x10151 < local_34c) {
        return;
      }
      iVar3 = 0;
      pbVar4 = local_2ff;
    }
  }
  *(undefined4 *)((int)param_1 + 0x90) = 0xe;
  FUN_004d4550(param_1);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  return;
}


