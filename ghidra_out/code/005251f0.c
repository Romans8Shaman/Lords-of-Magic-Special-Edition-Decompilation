
undefined4 __thiscall FUN_005251f0(void *this,undefined4 param_1)

{
  if (*(int *)((int)this + 0x378) < 10) {
    *(undefined4 *)((int)this + *(int *)((int)this + 0x378) * 4 + 0x350) = param_1;
    *(int *)((int)this + 0x378) = *(int *)((int)this + 0x378) + 1;
    return 1;
  }
  return 0;
}


