
int __thiscall FUN_004a6180(void *this,int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x58) == 0) {
    return -1;
  }
  iVar1 = FUN_00519da0(&DAT_005876d0,param_1,param_2,&param_1);
  iVar1 = FUN_004a51c0(this,iVar1 % *(int *)((int)this + 0x5c) + (param_1 >> 8),
                       iVar1 / *(int *)((int)this + 0x5c) + (param_2 >> 8));
  return iVar1;
}


