
int __fastcall FUN_004383b0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[0x13];
  if ((iVar1 < *param_1) && (param_1[0x12] < 0xf)) {
    iVar2 = param_1[2];
    param_1[param_1[0x12] + 3] = iVar1;
    param_1[0x13] = param_1[0x13] + 1;
    param_1[0x12] = param_1[0x12] + 1;
    return iVar2 + iVar1 * 0x10;
  }
  return 0;
}


