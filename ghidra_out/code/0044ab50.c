
undefined4 FUN_0044ab50(int param_1,undefined4 param_2,byte param_3)

{
  undefined4 uVar1;
  undefined1 auStack_34 [52];
  
  if ((param_3 & 1) != 0) {
    OutputDebugStringA(s_EnumGamesProc_returning_FALSE_00556d20);
    return 0;
  }
  FUN_00505f30(auStack_34,*(uint *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
  if (DAT_005d1e84 == (int *)0x0) {
    return 0;
  }
  uVar1 = (/*IC:0044aba4*/**(code **)(*DAT_005d1e84 + 0x2c))
                    (*(undefined4 *)(param_1 + 0x30),param_1 + 8,auStack_34);
  return uVar1;
}


