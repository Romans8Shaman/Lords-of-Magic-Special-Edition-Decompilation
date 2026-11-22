
void __thiscall FUN_0047e340(void *this,void *param_1)

{
  void *this_00;
  int *piVar1;
  int iStack_14;
  int aiStack_10 [4];
  
  this_00 = param_1;
  if ((((*(byte *)((int)this + 0x34) & 2) != 0) ||
      (*(int *)((int)this + 0x14) != *(int *)((int)this + 0xc))) ||
     (*(int *)((int)this + 0x18) != *(int *)((int)this + 0x10))) {
    FUN_004fd4d0(this,param_1);
    if (*(void **)((int)this + 0xb8) != (void *)0x0) {
      piVar1 = (int *)FUN_0049cc10(*(void **)((int)this + 0xb8),aiStack_10,*(int *)((int)this + 0xc)
                                   ,*(int *)((int)this + 0x10) + *(int *)((int)this + 0xbc));
      FUN_00476010(this_00,*piVar1,piVar1[1],piVar1[2],piVar1[3]);
    }
    param_1 = (void *)0x0;
    iStack_14 = 0;
    if ((*(int *)((int)this + 0x98) != 0) && (*(void **)((int)this + 0x2c) != (void *)0x0)) {
      FUN_0049cb20(*(void **)((int)this + 0x2c),(int *)&param_1,&iStack_14,
                   *(int *)((int)this + 0x98),0xffffffff);
    }
    FUN_0042d850((void *)((int)this + 0x94),this_00,(int)param_1 + *(int *)((int)this + 0xc),
                 iStack_14 + *(int *)((int)this + 0x10));
    FUN_004b0460((void *)((int)this + 0x88),this_00,*(int *)((int)this + 0xc),
                 *(int *)((int)this + 0x10));
  }
  return;
}


