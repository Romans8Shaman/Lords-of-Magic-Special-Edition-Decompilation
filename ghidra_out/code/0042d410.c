
undefined4 __fastcall FUN_0042d410(int param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_004efe80(&DAT_005aee6c,*(int *)(param_1 + 8));
  if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 4) == 0)) {
    return 0;
  }
  return 1;
}


