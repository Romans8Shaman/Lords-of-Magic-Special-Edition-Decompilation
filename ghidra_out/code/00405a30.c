
undefined4 __thiscall FUN_00405a30(void *this,int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)((int)this + 0xc) != param_1) || (uVar1 = 1, (*(byte *)((int)this + 0x10) & 1) == 0))
  {
    uVar1 = 0;
  }
  return uVar1;
}


