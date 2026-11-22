
undefined4 __thiscall FUN_0043d6f0(void *this,char *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x90);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  if (iVar1 == 0) {
    return 0;
  }
  FUN_004d41c0(this,param_1);
  return 1;
}


