
void __thiscall FUN_004f3710(void *this,int param_1,int param_2)

{
  *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) & 0xffffffbf;
  *(int *)((int)this + 0x24) = param_1 + -0x10;
  *(int *)((int)this + 0x2c) = param_1 + 0x10;
  *(int *)((int)this + 0x28) = param_2 + -0x10;
  *(int *)((int)this + 0x30) = param_2 + 0x10;
  return;
}


