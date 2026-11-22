
uint __cdecl FUN_00541b70(uint param_1)

{
  uint uVar1;
  
  if (DAT_00575094 < 2) {
    uVar1 = (byte)PTR_DAT_00574e88[param_1 * 2] & 4;
  }
  else {
    uVar1 = FUN_00541d40(param_1,4);
  }
  if (uVar1 == 0) {
    param_1 = (param_1 & 0xffffffdf) - 7;
  }
  return param_1;
}


