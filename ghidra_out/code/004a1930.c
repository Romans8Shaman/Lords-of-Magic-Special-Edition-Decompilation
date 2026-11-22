
void __fastcall FUN_004a1930(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0x32;
  do {
    *param_1 = 0xffffffff;
    param_1[0x32] = 0xffffffff;
    param_1 = param_1 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


