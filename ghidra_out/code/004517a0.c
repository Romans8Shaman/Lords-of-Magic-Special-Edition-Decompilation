
undefined4 __thiscall FUN_004517a0(void *this,int *param_1)

{
  int iVar1;
  undefined *this_00;
  
  iVar1 = FUN_004516a0(this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = *(int *)((int)this + 0x1c);
  this_00 = FUN_004c6fc0();
  FUN_004a7d50(this_00,this,iVar1);
  return 1;
}


