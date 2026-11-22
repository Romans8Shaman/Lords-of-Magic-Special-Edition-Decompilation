
void __fastcall FUN_00508090(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x1a;
  do {
    iVar1 = 0;
    do {
      if (iVar1 < 3) {
        *(undefined4 *)(param_1 + (iVar1 + iVar2) * 4) = 0;
      }
      else {
        *(undefined4 *)(param_1 + (iVar1 + iVar2) * 4) = 0xffffffff;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x32);
    iVar2 = iVar2 + 0x32;
  } while (iVar2 < 0x33a);
  return;
}


