
void __fastcall FUN_0047b520(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = 1;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  puVar1 = param_1 + 2;
  iVar2 = 6;
  do {
    puVar1[-1] = 0;
    *puVar1 = 0xffffffff;
    puVar1[1] = 0xffffffff;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0xffffffff;
    puVar1 = puVar1 + 5;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


