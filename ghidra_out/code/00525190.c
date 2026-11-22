
undefined4 __thiscall FUN_00525190(void *this,undefined4 param_1)

{
  if (*(int *)((int)this + 800) < 10) {
    *(undefined4 *)((int)this + *(int *)((int)this + 800) * 4 + 0x2f8) = param_1;
    *(int *)((int)this + 800) = *(int *)((int)this + 800) + 1;
    return 1;
  }
  return 0;
}


