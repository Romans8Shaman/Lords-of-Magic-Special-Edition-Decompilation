
void __thiscall FUN_00472b80(void *this,int param_1,int param_2)

{
  if (*(int *)((int)this + 0x180) == *(int *)((int)this + 0x18c)) {
    *(int *)((int)this + 0x18c) = *(int *)((int)this + 0x18c) + param_1;
  }
  else {
    *(int *)((int)this + 0x194) = *(int *)((int)this + 0x194) + param_1;
  }
  if (*(int *)((int)this + 0x184) == *(int *)((int)this + 400)) {
    *(int *)((int)this + 400) = *(int *)((int)this + 400) + param_2;
  }
  else {
    *(int *)((int)this + 0x198) = *(int *)((int)this + 0x198) + param_2;
  }
  *(int *)((int)this + 0x180) = param_1 + *(int *)((int)this + 0x180);
  *(int *)((int)this + 0x184) = param_2 + *(int *)((int)this + 0x184);
  return;
}


