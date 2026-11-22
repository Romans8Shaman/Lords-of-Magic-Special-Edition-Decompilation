
int __thiscall FUN_00413180(void *this,int param_1)

{
  undefined *this_00;
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x54);
  iVar1 = param_1;
  this_00 = FUN_004c6fc0();
  iVar1 = FUN_004a6f60(this_00,iVar1,uVar2);
  if (iVar1 < 0) {
    iVar1 = param_1;
  }
  return iVar1;
}


