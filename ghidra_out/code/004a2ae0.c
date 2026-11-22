
undefined4 __cdecl FUN_004a2ae0(int param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  pbVar5 = (byte *)0x0;
  if (param_2 != (byte *)0x3) {
    do {
      if ((((pbVar5[param_1] == 0x43) && (pbVar5[param_1 + 1] == 0x4d)) &&
          (pbVar5[param_1 + 2] == 0x41)) && (pbVar5[param_1 + 3] == 0x50)) {
        pbVar5 = pbVar5 + 8;
        break;
      }
      pbVar5 = pbVar5 + 1;
    } while (pbVar5 < param_2 + -3);
  }
  pbVar1 = pbVar5 + 0x300;
  if (param_2 <= pbVar1) {
    return 0;
  }
  if (pbVar5 < pbVar1) {
    pbVar6 = pbVar5 + param_3;
    pbVar2 = pbVar5 + param_1 + 1;
    do {
      pbVar4 = pbVar6 + -(int)pbVar5;
      pbVar3 = pbVar2 + 3;
      *pbVar4 = pbVar2[-1] >> 2;
      pbVar4[1] = *pbVar2 >> 2;
      pbVar4[2] = pbVar2[1] >> 2;
      pbVar6 = pbVar6 + 3;
      pbVar2 = pbVar3;
    } while (pbVar3 + (-1 - param_1) < pbVar1);
  }
  return 1;
}


