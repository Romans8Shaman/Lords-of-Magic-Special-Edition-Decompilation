
undefined4 __cdecl FUN_004f3b20(undefined4 *param_1,undefined4 param_2,void *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004f3810((ushort *)*param_1);
  if (param_3 != (void *)0x0) {
    FUN_004f56e0(param_3,*(undefined4 *)((int)param_3 + 4));
    *(undefined1 *)((int)param_3 + 0xc) = 0;
  }
  return uVar1;
}


