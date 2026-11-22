
undefined4 __thiscall FUN_0052b470(void *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  piVar1 = FUN_0052b540(this,param_1[8]);
  if (piVar1 != (int *)0x0) {
    *piVar1 = param_1[8];
    piVar1[1] = *param_1;
    uVar2 = FUN_00529140(param_1);
    if (uVar2 == 0) {
      piVar1[2] = -1;
      return 1;
    }
    piVar1[2] = *(int *)(uVar2 + 0x10);
    return 1;
  }
  piVar1 = (int *)Ordinal_401(0x10,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  *piVar1 = param_1[8];
  piVar1[1] = *param_1;
  uVar2 = FUN_00529140(param_1);
  if (uVar2 == 0) {
    piVar1[2] = -1;
    piVar1[3] = *(int *)this;
    *(int **)this = piVar1;
    return 1;
  }
  piVar1[2] = *(int *)(uVar2 + 0x10);
  piVar1[3] = *(int *)this;
  *(int **)this = piVar1;
  return 1;
}


