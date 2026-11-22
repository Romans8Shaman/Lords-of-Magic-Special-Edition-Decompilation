
undefined4 __fastcall FUN_004b4970(int param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 local_4;
  
  local_4 = 0;
  if ((DAT_005aa7d4 < 0) || (0xf < DAT_005aa7d4)) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &DAT_005af194 + DAT_005aa7d4 * 0x1d84;
  }
  if ((DAT_005aadb0 < 0) || (0xf < DAT_005aadb0)) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = &DAT_005af194 + DAT_005aadb0 * 0x1d84;
  }
  if ((puVar4 != (undefined *)0x0) && (puVar3 != (undefined *)0x0)) {
    iVar1 = *(int *)(puVar4 + 0x15dc);
    if (*(int *)(param_1 + 0x4b2c) == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = FUN_004b7dd0(*(int *)(param_1 + 0x4b2c));
    }
    if ((iVar1 != iVar2) || ((puVar4[0x15d8] & 2) != 0)) {
      iVar1 = *(int *)(puVar3 + 0x15dc);
      if (*(int *)(param_1 + 0x4b2c) == 0) {
        iVar2 = 1;
      }
      else {
        iVar2 = FUN_004b7dd0(*(int *)(param_1 + 0x4b2c));
      }
      if (iVar1 != iVar2) {
        return 0;
      }
      if ((puVar3[0x15d8] & 2) != 0) {
        return 0;
      }
    }
    local_4 = 1;
  }
  return local_4;
}


