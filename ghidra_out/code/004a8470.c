
undefined4 __thiscall FUN_004a8470(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_004f6380((void *)((int)this + 0x1c),param_1,param_2,param_3);
  iVar1 = FUN_004f6000((void *)((int)this + 0x1c),iVar1);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(iVar1 + 0x28);
}


