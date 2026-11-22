
void __cdecl op_C(void)

{
  int *piVar1;
  uint uVar2;
  
  if (DAT_005d5314 == 0) {
    PTR_DAT_00577d80 = *(undefined **)PTR_PTR_00577db0;
    PTR_DAT_00577d84 = *(undefined **)(PTR_PTR_00577db0 + 4);
    PTR_DAT_00577d88 = *(undefined **)(PTR_PTR_00577db0 + 8);
    PTR_PTR_00577db0 = (undefined *)&PTR_DAT_00577d80;
    FUN_00545750((int)DAT_005d5688);
    FUN_0053bce0((undefined *)DAT_005d5688);
    DAT_005d5688 = (int *)0x0;
    return;
  }
  piVar1 = FUN_0053c4d0(1,0x30);
  if (piVar1 == (int *)0x0) {
    return;
  }
  uVar2 = FUN_005455c0((int)piVar1);
  if (uVar2 == 0) {
    *piVar1 = *(int *)PTR_PTR_00577db0;
    piVar1[1] = *(int *)(PTR_PTR_00577db0 + 4);
    piVar1[2] = *(int *)(PTR_PTR_00577db0 + 8);
    PTR_PTR_00577db0 = (undefined *)piVar1;
    FUN_00545750((int)DAT_005d5688);
    FUN_0053bce0((undefined *)DAT_005d5688);
    DAT_005d5688 = piVar1;
    return;
  }
  FUN_00545750((int)piVar1);
  FUN_0053bce0((undefined *)piVar1);
  return;
}


