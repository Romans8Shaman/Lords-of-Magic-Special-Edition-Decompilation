
undefined4 __thiscall FUN_0042da60(void *this,int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int local_10 [4];
  
  if (*(void **)((int)this + 0x10) != (void *)0x0) {
    piVar1 = (int *)FUN_0049cc10(*(void **)((int)this + 0x10),local_10,param_2,param_3);
    if ((((*param_1 <= piVar1[2]) && (param_1[1] <= piVar1[3])) && (*piVar1 <= param_1[2])) &&
       (piVar1[1] <= param_1[3])) {
      return 1;
    }
  }
  if (*(void **)((int)this + 0x14) != (void *)0x0) {
    piVar1 = (int *)FUN_0049cc10(*(void **)((int)this + 0x14),local_10,param_2,param_3);
    if (((*param_1 <= piVar1[2]) && (param_1[1] <= piVar1[3])) &&
       ((*piVar1 <= param_1[2] && (piVar1[1] <= param_1[3])))) {
      return 1;
    }
  }
  if (*(void **)((int)this + 0x18) != (void *)0x0) {
    piVar1 = (int *)FUN_0049cc10(*(void **)((int)this + 0x18),local_10,param_2,param_3);
    if (((*param_1 <= piVar1[2]) && (param_1[1] <= piVar1[3])) &&
       ((*piVar1 <= param_1[2] && (piVar1[1] <= param_1[3])))) {
      return 1;
    }
  }
  if (*(void **)((int)this + 0x1c) != (void *)0x0) {
    piVar1 = (int *)FUN_0049cc10(*(void **)((int)this + 0x1c),local_10,param_2,param_3);
    if ((((*param_1 <= piVar1[2]) && (param_1[1] <= piVar1[3])) && (*piVar1 <= param_1[2])) &&
       (piVar1[1] <= param_1[3])) {
      return 1;
    }
  }
  return 0;
}


