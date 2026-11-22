
void __thiscall FUN_005260e0(void *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  if (((iVar1 < 0) || (DAT_005cd2f0 <= iVar1)) || (DAT_005cd2f4 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_005cd2f4 + iVar1 * 1000;
  }
  *param_1 = *(undefined4 *)(iVar1 + 0x114);
  param_1[1] = *(undefined4 *)(iVar1 + 0x118);
  return;
}


