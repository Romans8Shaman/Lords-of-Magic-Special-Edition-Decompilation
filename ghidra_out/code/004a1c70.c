
void __cdecl op_updatespellsusedincombat(void *vm)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = false;
  bVar2 = false;
  if (((*(byte *)(&DAT_005b076c + DAT_005aa7d4 * 0x761) & 1) != 0) && (DAT_005aa7d4 != 0xf)) {
    bVar1 = true;
  }
  if (((*(byte *)(&DAT_005b076c + DAT_005aadb0 * 0x761) & 1) != 0) && (DAT_005aadb0 != 0xf)) {
    bVar2 = true;
  }
  if ((bVar1) && (bVar2)) {
    FUN_004a1a30(0x5aa12c);
  }
  return;
}


