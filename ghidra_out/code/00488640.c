
undefined2 * __fastcall FUN_00488640(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  
  puVar1 = (undefined2 *)(param_1 + 0x2306c);
  iVar2 = 10;
  do {
    puVar1[10] = 0xffff;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return puVar1;
}


