
int __cdecl FUN_0053e210(uint param_1,char *param_2,DWORD param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_005d6b20) &&
     ((*(byte *)((&DAT_005d6a20)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_00542f50(param_1);
    iVar1 = FUN_0053e290(param_1,param_2,param_3);
    FUN_00542fc0(param_1);
    return iVar1;
  }
  pDVar2 = FUN_0053b4c0();
  *pDVar2 = 9;
  pDVar2 = FUN_0053b4d0();
  *pDVar2 = 0;
  return -1;
}


