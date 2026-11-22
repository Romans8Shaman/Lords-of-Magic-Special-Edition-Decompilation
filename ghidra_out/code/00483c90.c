
void __thiscall FUN_00483c90(void *this,int param_1,int param_2)

{
  void *this_00;
  
  if ((param_1 < 0) || (0xf < param_1)) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)((int)this + param_1 * 0x1d84 + 0x5068);
  }
  if (this_00 != (void *)0x0) {
    FUN_004bd5b0(this_00,param_2);
  }
  return;
}


