
int * __thiscall FUN_00430460(void *this,int *param_1)

{
  int iVar1;
  
  DAT_005789b8 = DAT_005789b8 + 0x2c;
  iVar1 = FUN_00492760(&DAT_005a7b50,*param_1);
  *(int *)this = iVar1;
  iVar1 = FUN_00492760(&DAT_005a7b50,param_1[1]);
  *(int *)((int)this + 8) = iVar1;
  iVar1 = FUN_00492760(&DAT_005a7b50,param_1[7]);
  *(int *)((int)this + 0xc) = iVar1;
  *(int *)((int)this + 0x10) = param_1[2];
  *(int *)((int)this + 0x14) = param_1[3];
  *(int *)((int)this + 0x18) = param_1[4];
  *(int *)((int)this + 0x1c) = param_1[5];
  *(int *)((int)this + 0x20) = param_1[8];
  *(int *)((int)this + 0x24) = param_1[9];
  *(int *)((int)this + 4) = param_1[6];
  return this;
}


