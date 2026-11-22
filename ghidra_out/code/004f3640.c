
void __thiscall FUN_004f3640(void *this)

{
  *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) & 0xffffffbf;
  if ((*(byte *)((int)this + 0x34) & 0x20) != 0) {
    *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) | 8;
  }
  return;
}


