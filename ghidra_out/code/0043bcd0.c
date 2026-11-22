
undefined4 __thiscall FUN_0043bcd0(void *this,void *param_1,uint param_2,int param_3)

{
  if (*(void **)((int)this + 0x2c) == (void *)0x0) {
    return 0;
  }
  FUN_0049da80(*(void **)((int)this + 0x2c),(uint)*(byte *)((int)this + 0x50));
  FUN_0049d510(*(void **)((int)this + 0x2c),param_1,param_2,param_3,-1,1);
  if (*(int *)((int)this + 0x58) == 10) {
    if ((*(byte *)((int)this + 0x52) & 1) != 0) {
      FUN_0049da80(*(void **)((int)this + 0x2c),1);
      FUN_0049d510(*(void **)((int)this + 0x2c),param_1,param_2,param_3,-1,1);
    }
    if ((*(byte *)((int)this + 0x52) & 2) != 0) {
      FUN_0049da80(*(void **)((int)this + 0x2c),2);
      FUN_0049d510(*(void **)((int)this + 0x2c),param_1,param_2,param_3,-1,1);
    }
    if ((*(byte *)((int)this + 0x52) & 4) != 0) {
      FUN_0049da80(*(void **)((int)this + 0x2c),3);
      FUN_0049d510(*(void **)((int)this + 0x2c),param_1,param_2,param_3,-1,1);
    }
    if ((*(byte *)((int)this + 0x52) & 8) != 0) {
      FUN_0049da80(*(void **)((int)this + 0x2c),4);
      FUN_0049d510(*(void **)((int)this + 0x2c),param_1,param_2,param_3,-1,1);
    }
  }
  return 1;
}


