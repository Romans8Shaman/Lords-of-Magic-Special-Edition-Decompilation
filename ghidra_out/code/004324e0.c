
void __cdecl op_clearslots(void *vm)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = &DAT_00584d2a;
  iVar2 = 7;
  do {
    puVar1[-0x2a] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 6;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


