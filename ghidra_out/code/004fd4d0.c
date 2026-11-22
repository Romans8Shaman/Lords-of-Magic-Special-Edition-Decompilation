
void __thiscall FUN_004fd4d0(void *this,void *param_1)

{
  int *piVar1;
  int local_10 [4];
  
  if ((*(void **)((int)this + 0x2c) != (void *)0x0) &&
     ((((*(byte *)((int)this + 0x34) & 2) != 0 ||
       (*(int *)((int)this + 0x14) != *(int *)((int)this + 0xc))) ||
      (*(int *)((int)this + 0x18) != *(int *)((int)this + 0x10))))) {
    piVar1 = (int *)FUN_0049cc10(*(void **)((int)this + 0x2c),local_10,*(int *)((int)this + 0xc),
                                 *(int *)((int)this + 0x10));
    FUN_00476010(param_1,*piVar1,piVar1[1],piVar1[2],piVar1[3]);
  }
  return;
}


