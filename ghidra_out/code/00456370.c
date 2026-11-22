
void __thiscall FUN_00456370(void *this,int param_1,int param_2,int param_3)

{
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (*(int *)((int)this + 0x6c) <= param_3) {
    param_3 = *(int *)((int)this + 0x70) + -1;
  }
  for (; param_2 <= param_3; param_2 = param_2 + 1) {
    FUN_004562f0(this,param_1,param_2);
  }
  return;
}


