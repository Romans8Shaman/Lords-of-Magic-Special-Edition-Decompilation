
undefined4 __thiscall FUN_00420890(void *this,int param_1)

{
  undefined *this_00;
  int iVar1;
  
  this_00 = FUN_004c6fc0();
  iVar1 = FUN_004a8300(this_00,param_1,0);
  if ((-1 < iVar1) && (iVar1 != *(int *)((int)this + 0x28))) {
    iVar1 = FUN_00420580((int)this);
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}


