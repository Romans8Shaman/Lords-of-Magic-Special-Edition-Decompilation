
undefined4 * __fastcall FUN_00462c90(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_00539ff0(param_1 + 0x179,0x10,10,&LAB_00498420,op_sunlight);
  param_1[1] = 0xffffffff;
  param_1[0x126] = 0;
  puVar1 = param_1 + 0x17a;
  iVar2 = 10;
  do {
    puVar1[-1] = 0;
    *(undefined1 *)puVar1 = 0xff;
    *(undefined1 *)((int)puVar1 + 1) = 0xff;
    puVar1[1] = 0xffffffff;
    puVar1[2] = 0xffffffff;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  param_1[0x127] = 0;
  param_1[0x129] = 0;
  param_1[0x178] = 0;
  puVar1 = param_1 + 300;
  iVar2 = 0x19;
  do {
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *param_1 = 0;
  return param_1;
}


