
undefined4 __thiscall FUN_004829b0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  
  *(int *)((int)this + 0x228a8) = param_1[2];
  iVar1 = param_1[1];
  if ((iVar1 < 0) || (0xf < iVar1)) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)this + iVar1 * 0x1d84 + 0x5068;
  }
  if (iVar2 == 0) {
    FUN_005047d0(s_p__NULL_0055b298);
    return 0;
  }
  FUN_00482a20(this,iVar1,*param_1,1);
  return 1;
}


