
uint * __cdecl FUN_00548d30(uint *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  
  if (DAT_005d5530 == 0) {
    puVar3 = FUN_0053ae60(param_1,(char)param_2);
    return puVar3;
  }
  FUN_0053cbb0(0x19);
  bVar1 = (byte)*param_1;
  while (uVar2 = (uint)bVar1, bVar1 != 0) {
    if ((*(byte *)((int)&DAT_005d5328 + uVar2 + 1) & 4) == 0) {
      puVar3 = param_1;
      if (param_2 == uVar2) break;
    }
    else {
      puVar3 = (uint *)((int)param_1 + 1);
      if (*(char *)((int)param_1 + 1) == '\0') {
        FUN_0053cc30(0x19);
        return (uint *)0x0;
      }
      if (param_2 == CONCAT11(bVar1,*(char *)((int)param_1 + 1))) {
        FUN_0053cc30(0x19);
        return param_1;
      }
    }
    param_1 = (uint *)((int)puVar3 + 1);
    bVar1 = *(byte *)((int)puVar3 + 1);
  }
  FUN_0053cc30(0x19);
  return (uint *)((param_2 != uVar2) - 1 & (uint)param_1);
}


