
undefined4 __thiscall FUN_00404ab0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x90) = param_1;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return 0;
}


