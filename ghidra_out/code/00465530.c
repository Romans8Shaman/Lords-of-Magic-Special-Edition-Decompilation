
void __cdecl op_select_new_play(void)

{
  undefined *puVar1;
  
  if ((DAT_005577c8 < 0) || (0xf < DAT_005577c8)) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &DAT_005af194 + DAT_005577c8 * 0x1d84;
  }
  if ((puVar1 != (undefined *)0x0) && (puVar1 != (undefined *)0xffffea20)) {
    if (((char)*(uint *)(puVar1 + 0x1a84) == '\x06') && ((*(uint *)(puVar1 + 0x1a84) & 0x100) == 0))
    {
      *(undefined4 *)(puVar1 + 0x1a78) = DAT_005af134;
      FUN_004d09a0(DAT_005a7b78,*(uint *)(puVar1 + 0x1a84),*(int **)(puVar1 + 0x1a88),0);
    }
  }
  return;
}


