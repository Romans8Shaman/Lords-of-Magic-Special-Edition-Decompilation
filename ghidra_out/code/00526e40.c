
undefined4 * __fastcall FUN_00526e40(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  param_1[9] = 0x200008;
  puVar2 = param_1 + 10;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  return param_1;
}


