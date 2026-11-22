
uint __fastcall FUN_00460fb0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  
  uVar1 = 0;
  if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3) {
    iVar2 = 0;
    puVar3 = (uint *)(param_1 + 0x6640);
    do {
      if (((*puVar3 & 0x18) != 0) && ((*puVar3 & 2) == 0)) {
        uVar1 = uVar1 | 1 << ((byte)iVar2 & 0x1f);
      }
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 0x761;
    } while (iVar2 < 0x10);
    return uVar1;
  }
  iVar2 = 0;
  puVar3 = (uint *)(param_1 + 0x6640);
  do {
    if (((*puVar3 & 1) != 0) && ((*puVar3 & 2) == 0)) {
      uVar1 = uVar1 | 1 << ((byte)iVar2 & 0x1f);
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 0x761;
  } while (iVar2 < 0x10);
  return uVar1;
}


