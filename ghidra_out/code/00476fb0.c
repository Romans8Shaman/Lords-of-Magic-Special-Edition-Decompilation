
void __thiscall FUN_00476fb0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  if (param_1 < *(int *)((int)this + 0x14)) {
    param_1 = *(int *)((int)this + 0x14);
  }
  if (param_2 < *(int *)((int)this + 0x18)) {
    param_2 = *(int *)((int)this + 0x18);
  }
  if (*(int *)((int)this + 0x1c) <= param_3) {
    param_3 = *(int *)((int)this + 0x1c);
  }
  if (*(int *)((int)this + 0x20) <= param_4) {
    param_4 = *(int *)((int)this + 0x20);
  }
  FUN_00477010(this,param_1,param_2,param_3,param_4);
  return;
}


