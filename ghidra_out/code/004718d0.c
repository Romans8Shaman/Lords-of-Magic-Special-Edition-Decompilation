
void __thiscall FUN_004718d0(void *this,int param_1)

{
  if (param_1 == 0) {
    *(uint *)((int)this + 0x178) = *(uint *)((int)this + 0x178) | 1;
    FUN_00472720(this);
    return;
  }
  *(uint *)((int)this + 0x178) = *(uint *)((int)this + 0x178) & 0xfffffffe;
  FUN_00472720(this);
  return;
}


