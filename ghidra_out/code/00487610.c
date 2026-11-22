
void __thiscall FUN_00487610(void *this,int param_1)

{
  if (param_1 < 1) {
    *(undefined4 *)((int)this + 8) = 1;
    *(undefined4 *)((int)this + 0x10) = 1;
    *(undefined4 *)((int)this + 0xc) = 0;
    FUN_004876c0(this,0);
    return;
  }
  *(int *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0x10) = 1;
  *(undefined4 *)((int)this + 0xc) = 0;
  FUN_004876c0(this,0);
  return;
}


