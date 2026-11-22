
int __fastcall FUN_00428c40(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (((byte)*(undefined4 *)(iVar1 + 0x10) & 3) == 2) break;
    iVar1 = *(int *)(iVar1 + 0x14);
  }
  return iVar1;
}


