
undefined4 __thiscall FUN_004a5ed0(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x54) == 0) {
    return 0;
  }
  iVar1 = FUN_004a5170(this,param_1,param_2);
  if (*(short *)(*(int *)((int)this + 0x54) + iVar1 * 8) != param_3) {
    *(short *)(*(int *)((int)this + 0x54) + iVar1 * 8) = (short)param_3;
    FUN_005179f0(&DAT_005876d0,iVar1 % *(int *)((int)this + 0x5c),iVar1 / *(int *)((int)this + 0x5c)
                );
    FUN_004a9d10(this,iVar1);
  }
  return 1;
}


