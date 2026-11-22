
int * __thiscall FUN_0050a570(void *this,int param_1,int param_2)

{
  DAT_005d2cd8 = *(int **)((int)this + 0x84);
  if (DAT_005d2cd8 == (int *)0x0) {
    DAT_005d2cd8 = (int *)0x0;
    return (int *)0x0;
  }
  while ((*DAT_005d2cd8 != param_1 || (DAT_005d2cd8[1] != param_2))) {
    DAT_005d2cd8 = (int *)DAT_005d2cd8[5];
    if (DAT_005d2cd8 == (int *)0x0) {
      return (int *)0x0;
    }
  }
  return DAT_005d2cd8;
}


