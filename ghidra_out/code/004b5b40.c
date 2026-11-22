
void __cdecl op_deselectfaith(void)

{
  int iVar1;
  
  if (DAT_005d1e84 == 0) {
    FUN_004b7b10(0,0xffffffff);
    return;
  }
  iVar1 = FUN_004b7dd0(DAT_005d1e84);
  FUN_004b7b10(iVar1 + -1,0xffffffff);
  return;
}


