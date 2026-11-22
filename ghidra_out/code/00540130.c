
undefined4 __cdecl FUN_00540130(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_00574bb8;
  do {
    if (*piVar1 == param_1) {
      return *(undefined4 *)(iVar2 * 8 + 0x574bbc);
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x574c90);
  return 0;
}


