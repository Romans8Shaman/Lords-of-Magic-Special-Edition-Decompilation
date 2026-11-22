
uint * __cdecl FUN_00541e20(uint *param_1,byte *param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint local_14;
  uint local_10;
  ushort local_c [6];
  
  pbVar1 = param_2;
  uVar4 = 0;
  uVar2 = FUN_00546720(local_c,(int *)&param_2,param_2,0,0,0,0);
  if ((uVar2 & 4) == 0) {
    iVar3 = FUN_00544060(local_c,&local_14);
    if (((uVar2 & 2) != 0) || (iVar3 == 1)) {
      uVar4 = 0x80;
    }
    if (((uVar2 & 1) != 0) || (iVar3 == 2)) {
      uVar4 = uVar4 | 0x100;
    }
  }
  else {
    uVar4 = 0x200;
    local_14 = 0;
    local_10 = 0;
  }
  *param_1 = uVar4;
  param_1[1] = (int)param_2 - (int)pbVar1;
  param_1[4] = local_14;
  param_1[5] = local_10;
  return param_1;
}


