
undefined4 __thiscall FUN_004f5bb0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int local_10 [4];
  
  if (*(void **)((int)this + 0x2c) == (void *)0x0) {
    return 0;
  }
  puVar1 = (undefined4 *)
           FUN_0049cc10(*(void **)((int)this + 0x2c),local_10,*(int *)((int)this + 0x14),
                        *(int *)((int)this + 0x18));
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  param_1[3] = puVar1[3];
  return 1;
}


