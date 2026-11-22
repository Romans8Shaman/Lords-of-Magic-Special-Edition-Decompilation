
uint __thiscall FUN_004c52a0(void *this,byte param_1)

{
  return (uint)((*(byte *)((int)this + 8) & (byte)(1 << (param_1 & 0x1f))) != 0);
}


