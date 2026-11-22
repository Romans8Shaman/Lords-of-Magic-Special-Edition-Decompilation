
void __thiscall FUN_0041dc10(void *this,int param_1)

{
  if (param_1 == 0) {
    FUN_0041dc40((int)this);
    return;
  }
  *(uint *)((int)this + 0x588) = *(uint *)((int)this + 0x588) & 0xfffffffd | 1;
  return;
}


