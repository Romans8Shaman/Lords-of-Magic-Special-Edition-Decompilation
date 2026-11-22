
int __thiscall FUN_004fbf20(void *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = FUN_004fbe60(this,param_2,3);
  if (iVar1 == 0) {
    return 0;
  }
  do {
    uVar2 = FUN_004c5e60(&DAT_005aef04,*(int *)(iVar1 + 0x1c));
    iVar3 = FUN_004c5ec0(&DAT_005aef04,uVar2);
    if (iVar3 == param_1) {
      return iVar1;
    }
    iVar1 = FUN_004fbe60(this,iVar1,3);
  } while (iVar1 != 0);
  return 0;
}


