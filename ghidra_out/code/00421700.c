
undefined4 __thiscall FUN_00421700(void *this,int *param_1)

{
  int iVar1;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  iVar1 = FUN_004f5c00(this,param_1);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = FUN_004b0860((void *)((int)this + 0x55c),param_1,*(int *)((int)this + 0xc),
                       *(int *)((int)this + 0x10));
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = FUN_0042da60((void *)((int)this + 0x568),param_1,*(int *)((int)this + 0xc),
                       *(int *)((int)this + 0x10));
  if (iVar1 != 0) {
    return 1;
  }
  if (*(void **)((int)this + 0x58c) != (void *)0x0) {
    FUN_0049cc10(*(void **)((int)this + 0x58c),&iStack_10,*(int *)((int)this + 0xc),
                 *(int *)((int)this + 0x590) + *(int *)((int)this + 0x10));
    if ((((*param_1 <= iStack_8) && (param_1[1] <= iStack_4)) && (iStack_10 <= param_1[2])) &&
       (iStack_c <= param_1[3])) {
      return 1;
    }
  }
  return 0;
}


