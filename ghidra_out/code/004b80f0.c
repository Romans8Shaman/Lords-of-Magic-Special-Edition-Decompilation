
undefined4 __thiscall FUN_004b80f0(void *this,undefined4 param_1)

{
  if (*(int *)((int)this + 8) < 4) {
    *(undefined4 *)((int)this + *(int *)((int)this + 8) * 4 + 0x124) = param_1;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    return 1;
  }
  return 0;
}


