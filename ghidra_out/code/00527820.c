
undefined4 __thiscall FUN_00527820(void *this,undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_005274b0(this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = FUN_0052b540(&DAT_005cd18c,*(int *)((int)this + 0x20));
  if (piVar2 != (int *)0x0) {
    piVar2[1] = (int)param_1;
  }
  return 1;
}


