
uint __cdecl FUN_0053e120(int *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  uVar2 = param_1[3];
  if (((uVar2 & 0x83) != 0) && ((uVar2 & 0x40) == 0)) {
    if ((uVar2 & 2) != 0) {
      param_1[3] = uVar2 | 0x20;
      return 0xffffffff;
    }
    param_1[3] = uVar2 | 1;
    if ((uVar2 & 0x10c) == 0) {
      FUN_005449f0(param_1);
    }
    else {
      *param_1 = param_1[2];
    }
    iVar3 = FUN_0053e210(param_1[4],(char *)param_1[2],param_1[6]);
    param_1[1] = iVar3;
    if ((iVar3 != 0) && (iVar3 != -1)) {
      if ((param_1[3] & 0x82U) == 0) {
        uVar2 = param_1[4];
        if (uVar2 == 0xffffffff) {
          puVar4 = &DAT_00574e58;
        }
        else {
          puVar4 = (undefined *)((&DAT_005d6a20)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24);
        }
        if ((puVar4[4] & 0x82) == 0x82) {
          param_1[3] = param_1[3] | 0x2000;
        }
      }
      if (((param_1[6] == 0x200) && ((param_1[3] & 8U) != 0)) && ((param_1[3] & 0x400U) == 0)) {
        param_1[6] = 0x1000;
      }
      param_1[1] = iVar3 + -1;
      bVar1 = *(byte *)*param_1;
      *param_1 = (int)((byte *)*param_1 + 1);
      return (uint)bVar1;
    }
    param_1[1] = 0;
    param_1[3] = param_1[3] | (-(uint)(iVar3 != 0) & 0x10) + 0x10;
  }
  return 0xffffffff;
}


