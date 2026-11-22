
void __fastcall FUN_004b2d60(int param_1)

{
  int iVar1;
  undefined1 local_12c [300];
  
  if ((DAT_005a7d8c < 0) || (0xf < DAT_005a7d8c)) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 + 0x5068 + DAT_005a7d8c * 0x1d84;
  }
  if (iVar1 != 0) {
    FUN_0053a090(local_12c,s_<_s>__s_0055ce5c,iVar1 + 0x44,param_1 + 0x13b);
    FUN_0053a090((undefined1 *)(param_1 + 0x138),&DAT_0055ce54,(uint)local_12c);
    FUN_004b23e0(param_1);
    FUN_004b2df0(param_1);
  }
  return;
}


