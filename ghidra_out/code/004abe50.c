
uint __thiscall FUN_004abe50(void *this,int param_1,byte param_2)

{
  return (uint)((byte)((byte)*(undefined4 *)(*(int *)((int)this + 100) + 4 + param_1 * 8) &
                      (byte)(1 << (param_2 & 0x1f))) != 0);
}


