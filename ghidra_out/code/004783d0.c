
undefined4 __fastcall FUN_004783d0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = Ordinal_1(0,(undefined4 *)(param_1 + 0x13b4),0);
  if (-1 < iVar2) {
    piVar1 = *(int **)(param_1 + 0x13b4);
    iVar2 = (/*IC:004783f3*/**(code **)(*piVar1 + 0x18))(piVar1,DAT_00584d54,1);
    if (-1 < iVar2) {
      return 1;
    }
  }
  return 0;
}


