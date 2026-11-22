
void __thiscall FUN_004c5490(void *this,int param_1)

{
  int *piVar1;
  
  if ((-1 < param_1) && (param_1 < 0x10)) {
    piVar1 = (int *)((int)this + param_1 * 4 + 0x158);
    *piVar1 = *piVar1 + 1;
  }
  return;
}


