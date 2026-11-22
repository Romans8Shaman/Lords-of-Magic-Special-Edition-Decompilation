
void __fastcall FUN_004e9cb0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  puVar1 = param_1 + 6;
  iVar2 = 0x20;
  do {
    puVar1[-1] = 0xffffffff;
    *puVar1 = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x8c] = 0;
  param_1[0x8a] = 0;
  param_1[0x8d] = 0xffffffff;
  param_1[0x8b] = 1;
  return;
}


