
uint __thiscall FUN_004414a0(void *this,uint param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  iVar1 = (/*IC:004414c0*/**(code **)(*(int *)this + 0x3c))(this);
  if ((iVar1 < 0) || (0xf < iVar1)) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = &DAT_005af194 + iVar1 * 0x1d84;
  }
  if ((((int)param_1 < 0) || (DAT_005cd2f0 <= (int)param_1)) || (DAT_005cd2f4 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_005cd2f4 + param_1 * 1000;
  }
  if ((puVar3 != (undefined *)0x0) && (iVar1 != 0)) {
    iVar2 = FUN_005225b0(param_1,param_2,(int)this,param_3);
    if ((iVar2 != 0) &&
       ((iVar2 = *(int *)(iVar1 + 0x84 + *(int *)((int)this + 0x58) * 4),
        iVar2 <= *(int *)((int)this + 0x5c) && (0 < iVar2)))) {
      return (uint)(*(int *)(iVar1 + 0x1c) == (int)*(short *)((int)this + 0x56));
    }
  }
  return 0;
}


