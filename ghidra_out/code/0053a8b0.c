
void __cdecl FUN_0053a8b0(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  size_t sVar6;
  byte *local_4;
  
  iVar4 = -1;
  pbVar5 = param_1;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar2 = *pbVar5;
    pbVar5 = pbVar5 + 1;
  } while (bVar2 != 0);
  local_4 = (byte *)0x0;
  if ((iVar4 == -2) || (param_1[1] != 0x3a)) {
    if (param_2 != (byte *)0x0) {
      *param_2 = 0;
    }
  }
  else {
    if (param_2 != (byte *)0x0) {
      FUN_00540920(param_2,param_1,2);
      param_2[2] = 0;
    }
    param_1 = param_1 + 2;
  }
  param_2 = (byte *)0x0;
  pbVar5 = param_1;
  if (*param_1 != 0) {
    do {
      bVar2 = *pbVar5;
      if ((*(byte *)((int)&DAT_005d5328 + bVar2 + 1) & 4) == 0) {
        if ((bVar2 == 0x2f) || (bVar2 == 0x5c)) {
          param_2 = pbVar5 + 1;
        }
        else if (bVar2 == 0x2e) {
          local_4 = pbVar5;
        }
      }
      else {
        pbVar5 = pbVar5 + 1;
      }
      pbVar1 = pbVar5 + 1;
      pbVar5 = pbVar5 + 1;
    } while (*pbVar1 != 0);
  }
  if (param_2 == (byte *)0x0) {
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
    }
  }
  else {
    if (param_3 != (byte *)0x0) {
      uVar3 = (int)param_2 - (int)param_1;
      if (0xfe < uVar3) {
        uVar3 = 0xff;
      }
      FUN_00540920(param_3,param_1,uVar3);
      param_3[uVar3] = 0;
    }
    param_1 = param_2;
  }
  if ((local_4 == (byte *)0x0) || (local_4 < param_1)) {
    if (param_4 != (byte *)0x0) {
      sVar6 = (int)pbVar5 - (int)param_1;
      if (0xfe < sVar6) {
        sVar6 = 0xff;
      }
      FUN_00540920(param_4,param_1,sVar6);
      param_4[sVar6] = 0;
    }
    if (param_5 != (byte *)0x0) {
      *param_5 = 0;
    }
  }
  else {
    if (param_4 != (byte *)0x0) {
      uVar3 = (int)local_4 - (int)param_1;
      if (0xfe < uVar3) {
        uVar3 = 0xff;
      }
      FUN_00540920(param_4,param_1,uVar3);
      param_4[uVar3] = 0;
    }
    if (param_5 != (byte *)0x0) {
      sVar6 = (int)pbVar5 - (int)local_4;
      if (0xfe < sVar6) {
        sVar6 = 0xff;
      }
      FUN_00540920(param_5,local_4,sVar6);
      param_5[sVar6] = 0;
      return;
    }
  }
  return;
}


