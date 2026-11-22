
void __thiscall FUN_004c5310(void *this,byte param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = (byte)(1 << (param_1 & 0x1f));
  if (param_2 == 0) {
    *(byte *)((int)this + 9) = *(byte *)((int)this + 9) & ~bVar1;
    return;
  }
  *(byte *)((int)this + 9) = *(byte *)((int)this + 9) | bVar1;
  return;
}


