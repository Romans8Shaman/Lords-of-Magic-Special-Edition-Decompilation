
void __thiscall FUN_00451340(void *this,int param_1)

{
  int *this_00;
  
  *(uint *)((int)this + 0x30) = *(uint *)((int)this + 0x30) | 8;
  FUN_004f5b50(this,param_1);
  this_00 = *(int **)((int)this + 0x44);
  if (this_00 != (int *)0x0) {
    (/*IC:00451361*/**(code **)(*this_00 + 0x34))(this_00,param_1);
  }
  return;
}


