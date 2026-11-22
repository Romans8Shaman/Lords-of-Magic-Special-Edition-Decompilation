
void __fastcall FUN_004553d0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_004b0ee0(&DAT_005cd304,*param_1);
  if (iVar1 != 0) {
    FUN_0050cff0(iVar1);
  }
  iVar1 = FUN_004b0ee0(&DAT_005cd304,param_1[1]);
  if (iVar1 != 0) {
    FUN_0050cff0(iVar1);
  }
  iVar1 = FUN_004b0ee0(&DAT_005cd304,param_1[2]);
  if (iVar1 != 0) {
    FUN_0050cff0(iVar1);
  }
  iVar1 = FUN_004b0ee0(&DAT_005cd304,param_1[3]);
  if (iVar1 != 0) {
    FUN_0050cff0(iVar1);
  }
  iVar1 = FUN_004b0ee0(&DAT_005cd304,param_1[4]);
  if (iVar1 != 0) {
    FUN_0050cff0(iVar1);
  }
  iVar1 = param_1[6];
  if (((iVar1 < 0) || (DAT_005cd2f0 <= iVar1)) || (DAT_005cd2f4 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_005cd2f4 + iVar1 * 1000;
  }
  if (iVar1 != 0) {
    FUN_00523160(iVar1);
  }
  iVar1 = param_1[7];
  if (((iVar1 < 0) || (DAT_005cd2f0 <= iVar1)) || (DAT_005cd2f4 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_005cd2f4 + iVar1 * 1000;
  }
  if (iVar1 != 0) {
    FUN_00523160(iVar1);
  }
  return;
}


