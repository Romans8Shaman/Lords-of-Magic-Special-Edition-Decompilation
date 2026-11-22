
void __thiscall FUN_00428170(void *this,int param_1)

{
  *(undefined4 *)((int)this + 0x48) = 0xffffffff;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 8;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((int)this + 0x1c);
  *(int *)((int)this + 0x1c) = param_1;
  return;
}


