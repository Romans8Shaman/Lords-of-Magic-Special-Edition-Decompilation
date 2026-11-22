
void __thiscall FUN_004c1bc0(void *this,undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    FUN_004c2450((int)this);
    return;
  }
  *(undefined4 *)((int)this + 0x5b0) = param_1[10];
  *(undefined4 *)((int)this + 0x5b8) = *(undefined4 *)((int)this + 0x48);
  *(undefined4 *)((int)this + 0x48) = param_1[0x12];
  *(undefined4 *)((int)this + 0x5c0) = 0;
  *(undefined4 *)((int)this + 0x5c4) = 0;
  *(undefined1 *)((int)this + 0x5c8) = 0;
  *(undefined4 *)((int)this + 0x5bc) = 0;
  *(uint *)((int)this + 0x30) = *(uint *)((int)this + 0x30) & 0x9fffffff;
  FUN_00415b10(this,param_1,0);
  return;
}


