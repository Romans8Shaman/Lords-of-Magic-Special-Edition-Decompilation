
int __cdecl FUN_00539dc0(int param_1)

{
  SIZE_T SVar1;
  int *piVar2;
  
  FUN_0053f320();
  SVar1 = FUN_0053f510((undefined *)DAT_005d6b34);
  if (SVar1 < (uint)((int)DAT_005d6b30 + (4 - (int)DAT_005d6b34))) {
    SVar1 = FUN_0053f510((undefined *)DAT_005d6b34);
    piVar2 = FUN_0053f360(DAT_005d6b34,SVar1 + 0x10);
    if (piVar2 == (int *)0x0) {
      FUN_0053f330();
      return 0;
    }
    DAT_005d6b30 = piVar2 + ((int)DAT_005d6b30 - (int)DAT_005d6b34 >> 2);
    DAT_005d6b34 = piVar2;
  }
  *DAT_005d6b30 = param_1;
  DAT_005d6b30 = DAT_005d6b30 + 1;
  FUN_0053f330();
  return param_1;
}


