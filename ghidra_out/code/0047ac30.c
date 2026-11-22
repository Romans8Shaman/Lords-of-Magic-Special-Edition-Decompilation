
void __thiscall FUN_0047ac30(void *this,undefined4 param_1)

{
  if (*(int *)((int)this + 0xcc) != 0x32) {
    *(undefined4 *)((int)this + *(int *)((int)this + 0xcc) * 4 + 4) = param_1;
    *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 1;
  }
  return;
}


