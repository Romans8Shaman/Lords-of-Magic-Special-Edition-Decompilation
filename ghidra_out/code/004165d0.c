
void __thiscall FUN_004165d0(void *this,void *param_1)

{
  void *this_00;
  int *piVar1;
  int iStack_14;
  int aiStack_10 [4];
  
  this_00 = param_1;
  if (*(int *)((int)this + 0x598) != 0) {
    *(byte *)((int)this + 0x34) = *(byte *)((int)this + 0x34) | 2;
  }
  if ((((*(byte *)((int)this + 0x34) & 2) != 0) ||
      (*(int *)((int)this + 0x14) != *(int *)((int)this + 0xc))) ||
     (*(int *)((int)this + 0x18) != *(int *)((int)this + 0x10))) {
    FUN_004fd4d0(this,param_1);
    if (*(void **)((int)this + 0x58c) != (void *)0x0) {
      piVar1 = (int *)FUN_0049cc10(*(void **)((int)this + 0x58c),aiStack_10,
                                   *(int *)((int)this + 0xc),
                                   *(int *)((int)this + 0x10) + *(int *)((int)this + 0x590));
      FUN_00476010(this_00,*piVar1,piVar1[1],piVar1[2],piVar1[3]);
    }
    param_1 = (void *)0x0;
    iStack_14 = 0;
    if ((*(int *)((int)this + 0x56c) != 0) && (*(void **)((int)this + 0x2c) != (void *)0x0)) {
      FUN_0049cb20(*(void **)((int)this + 0x2c),(int *)&param_1,&iStack_14,
                   *(int *)((int)this + 0x56c),0xffffffff);
    }
    FUN_0042d850((void *)((int)this + 0x568),this_00,(int)param_1 + *(int *)((int)this + 0xc),
                 iStack_14 + *(int *)((int)this + 0x10));
    FUN_004b0460((void *)((int)this + 0x55c),this_00,*(int *)((int)this + 0xc),
                 *(int *)((int)this + 0x10));
  }
  return;
}


