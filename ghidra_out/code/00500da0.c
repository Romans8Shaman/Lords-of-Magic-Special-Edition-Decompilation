
int __thiscall FUN_00500da0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x2bec) = param_1;
  if (*(int *)((int)this + 0x2dfc) == 0) {
    *(undefined1 *)((int)this + 0x22efc) = *(undefined1 *)((int)this + 0x2bec);
  }
  return *(int *)((int)this + 0x2dfc);
}


