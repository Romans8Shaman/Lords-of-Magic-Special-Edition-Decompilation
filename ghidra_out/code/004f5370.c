
undefined4 __cdecl FUN_004f5370(undefined4 *in_stack_4,undefined4 in_stack_8,undefined4 in_stack_c)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054b94b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = (undefined4 *)Ordinal_401(0x11c,s_c__NEWERSTORM_H_storm_h_00573258,0x3ef,0);
  uStack_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_004f5440((int)puVar1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0x27f;
    puVar1[3] = 0x1dc;
  }
  uStack_4 = 0xffffffff;
  *in_stack_4 = puVar1;
  FUN_004f5350(in_stack_8,in_stack_c);
  ExceptionList = pvStack_c;
  return 0;
}


