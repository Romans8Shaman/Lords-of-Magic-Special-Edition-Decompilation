
void __thiscall FUN_00456330(void *this,int param_1,int param_2,int param_3)

{
  if (param_1 < 0) {
    param_1 = 0;
  }
  if (*(int *)((int)this + 0x6c) <= param_2) {
    param_2 = *(int *)((int)this + 0x6c) + -1;
  }
  for (; param_1 <= param_2; param_1 = param_1 + 1) {
    FUN_004562f0(this,param_1,param_3);
  }
  return;
}


