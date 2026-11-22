
undefined4 __thiscall FUN_005251c0(void *this,undefined4 param_1)

{
  if (*(int *)((int)this + 0x34c) < 10) {
    *(undefined4 *)((int)this + *(int *)((int)this + 0x34c) * 4 + 0x324) = param_1;
    *(int *)((int)this + 0x34c) = *(int *)((int)this + 0x34c) + 1;
    return 1;
  }
  return 0;
}


