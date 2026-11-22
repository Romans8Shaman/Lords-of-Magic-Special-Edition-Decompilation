
DWORD __cdecl FUN_00548e10(uint param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  
  if ((DAT_005d6b20 <= param_1) ||
     ((*(byte *)((&DAT_005d6a20)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) == 0)) {
    pDVar3 = FUN_0053b4c0();
    *pDVar3 = 9;
    pDVar3 = FUN_0053b4d0();
    *pDVar3 = 0;
    return 0xffffffff;
  }
  FUN_00542f50(param_1);
  DVar1 = FUN_0053f600(param_1,0,1);
  if (DVar1 == 0xffffffff) {
    FUN_00542fc0(param_1);
    return 0xffffffff;
  }
  DVar2 = FUN_0053f600(param_1,0,2);
  if (DVar1 != DVar2) {
    FUN_0053f600(param_1,DVar1,0);
  }
  FUN_00542fc0(param_1);
  return DVar2;
}


