
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051f320(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  DAT_005d2ed4 = *(undefined4 *)(param_1 + 0x28);
  iVar1 = *(int *)(param_1 + 0x548);
  if ((iVar1 < 0) || (DAT_005ae9c0 <= iVar1)) {
    DAT_005d2ed8 = 0xffffffff;
    DAT_005d2edc = 0xffffffff;
    DAT_005d2ee0 = 0xffffffff;
    _DAT_005d2ee4 = 0xffffffff;
  }
  else {
    puVar2 = FUN_004a8360(&DAT_005ae958,iVar1);
    if (puVar2 == (undefined4 *)0x0) {
      DAT_005d2ed8 = 0xffffffff;
    }
    else {
      DAT_005d2ed8 = puVar2[10];
    }
    DAT_005d2edc = FUN_004a8300(&DAT_005ae958,*(int *)(param_1 + 0x548),3);
    DAT_005d2ee0 = FUN_004a8300(&DAT_005ae958,*(int *)(param_1 + 0x548),2);
    _DAT_005d2ee4 = FUN_004a8300(&DAT_005ae958,*(int *)(param_1 + 0x548),1);
  }
  DAT_005d2ed0 = 0x12;
  FUN_0040cb30(&DAT_005aeea0,DAT_005a7b78,*(int *)(param_1 + 0x550));
  *(undefined4 *)(param_1 + 0x550) = 0xffffffff;
  return;
}


