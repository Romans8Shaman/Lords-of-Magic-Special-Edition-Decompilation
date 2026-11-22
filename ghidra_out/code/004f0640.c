
void __cdecl op_enableallspells(void)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_005aee70) {
    do {
      puVar1 = (uint *)FUN_004efe80(&DAT_005aee6c,iVar2);
      if (puVar1 != (uint *)0x0) {
        *puVar1 = *puVar1 & 0xfffffffb;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_005aee70);
  }
  return;
}


