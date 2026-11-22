
void __thiscall FUN_00455820(void *this,int param_1)

{
  *(int *)((int)this + 0x38) = param_1;
  if (*(int *)((int)this + 0x30) != 2) {
    *(undefined1 *)((int)this + 0x4d) = 8;
    return;
  }
  if (param_1 < 0) {
    *(undefined1 *)((int)this + 0x4d) = 8;
    return;
  }
  if (param_1 == 0) {
    *(undefined1 *)((int)this + 0x4d) = 4;
  }
  return;
}


