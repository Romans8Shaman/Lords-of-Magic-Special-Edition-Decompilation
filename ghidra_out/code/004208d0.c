
int __thiscall FUN_004208d0(void *this,int param_1,int param_2)

{
  undefined *this_00;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int)this + 0x54);
  iVar1 = param_1;
  this_00 = FUN_004c6fc0();
  iVar1 = FUN_004a4c70(this_00,iVar1,param_2,uVar3);
  if ((iVar1 == param_1) || (iVar2 = FUN_00420890(this,iVar1), iVar2 == 0)) {
    return param_1;
  }
  return iVar1;
}


