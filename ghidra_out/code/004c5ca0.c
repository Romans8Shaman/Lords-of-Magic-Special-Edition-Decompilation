
uint __thiscall FUN_004c5ca0(void *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_004a6180(&DAT_005ae958,param_1,param_2);
  if ((iVar1 == -1) || (DAT_005ae9a4 <= *(short *)(DAT_005ae9ac + 2 + iVar1 * 8))) {
    return DAT_005af0d8;
  }
  uVar2 = FUN_004c5e60(this,iVar1);
  return uVar2;
}


