
int __fastcall FUN_00428c10(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if ((*(uint *)(iVar1 + 0x10) & 1) != 0) break;
    if (((byte)*(uint *)(iVar1 + 0x10) & 4) == 4) {
      return iVar1;
    }
    iVar1 = *(int *)(iVar1 + 0x14);
  }
  return iVar1;
}


