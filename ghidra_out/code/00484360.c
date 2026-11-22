
undefined4 __thiscall FUN_00484360(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if (DAT_005d1e84 == 0) {
    bVar3 = true;
  }
  else {
    iVar1 = *(int *)(DAT_005d1e84 + 0x390);
    iVar2 = FUN_004b7dd0(DAT_005d1e84);
    bVar3 = iVar1 == iVar2;
  }
  if (!bVar3) {
    DAT_00573428 = *param_1;
    FUN_004843d0((int)this);
  }
  return 1;
}


