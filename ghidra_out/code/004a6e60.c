
undefined4 __thiscall FUN_004a6e60(void *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_004f6360((void *)((int)this + 0x1c),param_1,param_2);
  iVar1 = FUN_004f6000((void *)((int)this + 0x1c),iVar1);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(iVar1 + 0x28);
}


