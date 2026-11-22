
void __cdecl op_cleargroups(void)

{
  undefined *puVar1;
  
  if ((DAT_005577c8 < 0) || (0xf < DAT_005577c8)) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &DAT_005af194 + DAT_005577c8 * 0x1d84;
  }
  if ((puVar1 == (undefined *)0x0) || (puVar1 + 0x15e0 == (undefined *)0x0)) {
    return;
  }
  FUN_004986b0((int)(puVar1 + 0x15e0));
  return;
}


