
undefined4 __thiscall FUN_004c8fe0(void *this,int param_1,int param_2)

{
  if ((param_1 < 0) || (1 < param_1)) {
    return 0;
  }
  if (param_2 == 0) {
    *(uint *)this = *(uint *)this & ~(1 << ((byte)param_1 & 0x1f));
    return 1;
  }
  *(uint *)this = *(uint *)this | 1 << ((byte)param_1 & 0x1f);
  return 1;
}


