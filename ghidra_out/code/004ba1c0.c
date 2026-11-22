
void __thiscall FUN_004ba1c0(void *this,int param_1)

{
  if (param_1 == 0) {
    *(uint *)((int)this + 0x30) = *(uint *)((int)this + 0x30) | 2;
    return;
  }
  *(uint *)((int)this + 0x30) = *(uint *)((int)this + 0x30) & 0xfffffffd;
  return;
}


