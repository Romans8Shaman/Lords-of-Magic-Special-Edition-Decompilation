
void __thiscall FUN_004c1c20(void *this,int param_1)

{
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 0x5b4) = 0xffffffff;
    return;
  }
  *(undefined4 *)((int)this + 0x5b4) = *(undefined4 *)(param_1 + 0x28);
  return;
}


