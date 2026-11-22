
undefined4 __thiscall FUN_00505a00(void *this,int param_1,undefined4 *param_2)

{
  if ((param_1 < 0) || (8 < param_1)) {
    return 0;
  }
  *param_2 = *(undefined4 *)((int)this + param_1 * 0xc + 0x23000);
  return 1;
}


