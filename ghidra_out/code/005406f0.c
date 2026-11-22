
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005406f0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_005d5328;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_005d5530 = 0;
  _DAT_005d6b24 = 0;
  DAT_005d5534 = 0;
  _DAT_005d5538 = 0;
  _DAT_005d553c = 0;
  _DAT_005d5540 = 0;
  return;
}


