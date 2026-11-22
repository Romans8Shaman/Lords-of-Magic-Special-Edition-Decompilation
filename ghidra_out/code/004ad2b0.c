
undefined4 __thiscall FUN_004ad2b0(void *this,int *param_1)

{
  int *piVar1;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int aiStack_10 [4];
  
  if ((*(void **)((int)this + 0x2c) != (void *)0x0) && (-1 < *(int *)((int)this + 0x28))) {
    FUN_0049cc10(*(void **)((int)this + 0x2c),&iStack_20,*(int *)((int)this + 0xc),
                 *(int *)((int)this + 0x10));
    if ((*param_1 <= iStack_18) &&
       (((param_1[1] <= iStack_14 && (iStack_20 <= param_1[2])) && (iStack_1c <= param_1[3])))) {
      return 1;
    }
    if (*(void **)((int)this + 0xe4) != (void *)0x0) {
      piVar1 = (int *)FUN_0049cc10(*(void **)((int)this + 0xe4),aiStack_10,*(int *)((int)this + 0xc)
                                   ,*(int *)((int)this + 0xdc) + *(int *)((int)this + 0x10));
      if (((*param_1 <= piVar1[2]) && (param_1[1] <= piVar1[3])) &&
         ((*piVar1 <= param_1[2] && (piVar1[1] <= param_1[3])))) {
        return 1;
      }
    }
  }
  return 0;
}


