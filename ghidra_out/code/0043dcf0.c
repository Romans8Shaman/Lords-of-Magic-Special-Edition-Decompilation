
undefined4 __thiscall FUN_0043dcf0(void *this,int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00482ac0(this,*param_1,2);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if ((int *)piVar1[0x12] != (int *)0x0) {
    FUN_004245a0((int *)piVar1[0x12]);
  }
  piVar1[0x11] = 0;
  piVar1[0x21] = -1;
  piVar1[0x22] = 0;
  FUN_00483be0(this,piVar1);
  return 1;
}


