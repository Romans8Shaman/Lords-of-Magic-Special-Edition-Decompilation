
void __thiscall FUN_00490370(void *this,int param_1)

{
  void *this_00;
  
  if ((param_1 < 0) || (*(int *)((int)this + 0x50) <= param_1)) {
    DAT_00583610 = 0;
  }
  else {
    DAT_00583610 = *(int *)((int)this + 0x4c) + param_1 * 0x2c;
    this_00 = (void *)FUN_00493360(&DAT_005a7b50,
                                   *(int *)(*(int *)((int)this + 0x4c) + 0xc + param_1 * 0x2c));
    if (this_00 != (void *)0x0) {
      FUN_00497ac0(this_00,1);
      return;
    }
  }
  return;
}


