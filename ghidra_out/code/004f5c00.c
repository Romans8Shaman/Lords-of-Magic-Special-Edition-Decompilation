
undefined4 __thiscall FUN_004f5c00(void *this,int *param_1)

{
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if ((*(void **)((int)this + 0x2c) != (void *)0x0) && (-1 < *(int *)((int)this + 0x28))) {
    FUN_0049cc10(*(void **)((int)this + 0x2c),&local_10,*(int *)((int)this + 0xc),
                 *(int *)((int)this + 0x10));
    if ((*param_1 <= local_8) &&
       (((param_1[1] <= local_4 && (local_10 <= param_1[2])) && (local_c <= param_1[3])))) {
      return 1;
    }
  }
  return 0;
}


