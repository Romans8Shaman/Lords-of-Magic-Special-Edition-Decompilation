
void __fastcall FUN_0049f200(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 10;
  puVar1 = param_1;
  do {
    *puVar1 = 0x32;
    puVar1[10] = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  param_1[0x17] = 2;
  return;
}


