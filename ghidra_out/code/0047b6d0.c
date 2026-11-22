
int __fastcall FUN_0047b6d0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = param_1[0x20];
  param_1[0x21] = 5;
  param_1[0x22] = 5;
  if (iVar1 == 2) {
    param_1[0x21] = 0;
    param_1[0x22] = 2;
    if (param_1[1] == 0) {
      iVar1 = 0;
      puVar3 = param_1 + 0xb;
      for (iVar2 = 5; param_1 = param_1 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
        *param_1 = *puVar3;
        puVar3 = puVar3 + 1;
      }
    }
    else {
      iVar1 = param_1[0xb] - param_1[1];
    }
    return ((499 < iVar1) - 1 & 0xfffffffc) + 5;
  }
  if (iVar1 == 3) {
    param_1[0x21] = 1;
    param_1[0x22] = 3;
    if (param_1[6] == 0) {
      iVar1 = 0;
      puVar3 = param_1 + 0x10;
      puVar4 = param_1 + 6;
      for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
    }
    else {
      iVar1 = param_1[0x10] - param_1[6];
    }
    return ((499 < iVar1) - 1 & 0xfffffffc) + 6;
  }
  if (iVar1 != 4) {
    return 0;
  }
  if (param_1[0x1f] == 0) {
    param_1[0x21] = 0;
    return 3;
  }
  return (-(uint)(param_1[0x1f] != 1) & 3) + 4;
}


