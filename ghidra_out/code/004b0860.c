
undefined4 __thiscall FUN_004b0860(void *this,int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int local_10 [4];
  
  if (*(void **)this != (void *)0x0) {
    piVar1 = (int *)FUN_0049cc10(*(void **)this,local_10,param_2,param_3);
    if ((((*param_1 <= piVar1[2]) && (param_1[1] <= piVar1[3])) && (*piVar1 <= param_1[2])) &&
       (piVar1[1] <= param_1[3])) {
      return 1;
    }
  }
  if (*(void **)((int)this + 4) != (void *)0x0) {
    piVar1 = (int *)FUN_0049cc10(*(void **)((int)this + 4),local_10,param_2,param_3);
    if (((*param_1 <= piVar1[2]) && (param_1[1] <= piVar1[3])) &&
       ((*piVar1 <= param_1[2] && (piVar1[1] <= param_1[3])))) {
      return 1;
    }
  }
  if (*(void **)((int)this + 8) != (void *)0x0) {
    piVar1 = (int *)FUN_0049cc10(*(void **)((int)this + 8),local_10,param_2,param_3);
    if (((*param_1 <= piVar1[2]) && (param_1[1] <= piVar1[3])) &&
       ((*piVar1 <= param_1[2] && (piVar1[1] <= param_1[3])))) {
      return 1;
    }
  }
  return 0;
}


