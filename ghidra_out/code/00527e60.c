
undefined4 __thiscall FUN_00527e60(void *this,int param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x48) = 0xffffffff;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 8;
  if (param_1 == 0x9c) {
    *(undefined4 *)((int)this + 0x10) = param_2;
    return 1;
  }
  return 0;
}


