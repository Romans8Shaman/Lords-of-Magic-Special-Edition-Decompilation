
undefined4 * __cdecl FUN_005395d0(LPCSTR param_1,char *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = FUN_0053dc80();
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar2 = FUN_0053dab0(param_1,param_2,param_3,puVar1);
  FUN_0053ccc0((uint)puVar1);
  return puVar2;
}


