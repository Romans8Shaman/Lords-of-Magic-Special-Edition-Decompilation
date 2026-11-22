
undefined4 __thiscall FUN_00509570(void *this,int *param_1)

{
  uint uVar1;
  
  if (param_1 == (int *)0x0) {
    return *(undefined4 *)((int)this + 0x3c);
  }
  if (*param_1 < 1) {
    return *(undefined4 *)((int)this + 0x3c);
  }
  uVar1 = FUN_0053a110();
  return *(undefined4 *)(param_1[1] + ((int)uVar1 % *param_1) * 4);
}


