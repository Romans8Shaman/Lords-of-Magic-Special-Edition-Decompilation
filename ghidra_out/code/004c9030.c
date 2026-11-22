
undefined4 __thiscall FUN_004c9030(void *this,int param_1,uint *param_2)

{
  if ((param_1 < 0) || (1 < param_1)) {
    return 0;
  }
  *param_2 = (uint)((1 << ((byte)param_1 & 0x1f) & *(uint *)this) != 0);
  return 1;
}


