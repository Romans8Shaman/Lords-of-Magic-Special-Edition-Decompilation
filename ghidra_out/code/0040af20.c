
undefined4 __thiscall FUN_0040af20(void *this,byte *param_1)

{
  int iVar1;
  byte *pbVar2;
  int local_50;
  uint local_4c;
  int local_48;
  int local_44;
  byte local_40;
  
  local_40 = param_1[1];
  local_4c = (uint)*param_1;
  local_48 = 0xffffffff;
  local_44 = 0xffffffff;
  iVar1 = FUN_0040ae20(local_4c);
  if (iVar1 < 0) {
    return 0;
  }
  iVar1 = 0;
  if (0 < *(short *)(param_1 + 2)) {
    pbVar2 = param_1 + 6;
    do {
      local_50 = (int)*(short *)(pbVar2 + -2);
      local_48 = (int)*(short *)pbVar2;
      local_44 = local_48;
      FUN_00405440(this,&local_50);
      iVar1 = iVar1 + 1;
      pbVar2 = pbVar2 + 4;
    } while (iVar1 < *(short *)(param_1 + 2));
  }
  return 1;
}


