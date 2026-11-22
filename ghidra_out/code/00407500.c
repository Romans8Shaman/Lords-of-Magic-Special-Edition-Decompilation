
undefined4 __thiscall FUN_00407500(void *this,undefined4 *param_1)

{
  char cVar1;
  
  cVar1 = *(char *)this;
  if ((cVar1 < *(char *)((int)this + 1)) && (-1 < cVar1)) {
    *param_1 = *(undefined4 *)((int)this + cVar1 * 8 + 4);
    param_1[1] = *(undefined4 *)((int)this + *(char *)this * 8 + 8);
    return 1;
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  return 0;
}


