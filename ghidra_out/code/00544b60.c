
undefined4 __cdecl FUN_00544b60(void)

{
  int *piVar1;
  uint uVar2;
  
  if (DAT_005d531c == 0) {
    PTR_PTR_00577d74 = (undefined *)&PTR_DAT_00577cc8;
    FUN_00544f90(DAT_005d5678);
    FUN_0053bce0((undefined *)DAT_005d5678);
    DAT_005d5678 = (int *)0x0;
    return 0;
  }
  piVar1 = FUN_0053c4d0(1,0xac);
  if (piVar1 == (int *)0x0) {
    return 1;
  }
  uVar2 = FUN_00544c10((char *)piVar1);
  if (uVar2 == 0) {
    PTR_PTR_00577d74 = (undefined *)piVar1;
    FUN_00544f90(DAT_005d5678);
    FUN_0053bce0((undefined *)DAT_005d5678);
    DAT_005d5678 = piVar1;
    return 0;
  }
  FUN_00544f90(piVar1);
  FUN_0053bce0((undefined *)piVar1);
  return 1;
}


