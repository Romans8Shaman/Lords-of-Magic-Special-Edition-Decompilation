
int __thiscall FUN_00493360(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00491c20(this,param_1);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if (*piVar1 == 7) {
    return piVar1[1];
  }
  return 0;
}


