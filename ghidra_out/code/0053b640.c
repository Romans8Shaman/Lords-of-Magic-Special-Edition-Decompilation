
float10 __cdecl FUN_0053b640(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  uint local_18 [6];
  
  while( true ) {
    if (DAT_00575094 < 2) {
      uVar2 = (byte)PTR_DAT_00574e88[(uint)*param_1 * 2] & 8;
    }
    else {
      uVar2 = FUN_00541d40((uint)*param_1,8);
    }
    if (uVar2 == 0) break;
    param_1 = param_1 + 1;
  }
  iVar3 = -1;
  pbVar4 = param_1;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 1;
  } while (bVar1 != 0);
  iVar3 = FUN_00541e20(local_18,param_1);
  return (float10)*(double *)(iVar3 + 0x10);
}


