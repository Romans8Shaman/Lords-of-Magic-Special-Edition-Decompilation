
void __thiscall FUN_00428f70(void *this,void *param_1,int param_2)

{
  void *this_00;
  
  if (0x14 < param_2) {
    FUN_004d61e0(&DAT_00578810,param_1,param_2 + -0x15,(int)this);
    return;
  }
  this_00 = (void *)FUN_00427b80(*(int *)this);
  if (this_00 == (void *)0x0) {
    return;
  }
  FUN_00428f20(this_00,param_1,param_2);
  return;
}


