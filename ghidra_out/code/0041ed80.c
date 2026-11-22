
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_0041ed80(void *this,int in_stack_4)

{
  void *this_00;
  int in_stack_4_00;
  
  this_00 = (void *)FUN_00521e00((int *)((int)this + *(int *)((int)this + 0x50) * 0x4c + 0xc4));
  _DAT_005867a0 = 0xfffffc18;
  in_stack_4_00 = FUN_00478920(&DAT_00585408);
  if (this_00 != (void *)0x0) {
    in_stack_4_00 = FUN_0041ecf0(this_00,in_stack_4);
    if (-1 < in_stack_4_00) {
      _DAT_005867b0 = 0;
      _DAT_005867a8 = DAT_00586778;
      _DAT_005867a0 = 0xfffffc18;
      _DAT_005867b4 = 0;
      DAT_005867a4 = in_stack_4_00;
      in_stack_4_00 = FUN_00478c00(&DAT_00585408,in_stack_4_00);
    }
  }
  return in_stack_4_00;
}


