
undefined4 * __fastcall FUN_0046fb00(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_004b66c0(param_1);
  *param_1 = &PTR_FUN_0054d8b0;
  puVar1 = param_1 + 0xfb;
  iVar2 = 8;
  do {
    puVar1[-8] = 0xffffffff;
    *puVar1 = 0xffffffff;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return param_1;
}


