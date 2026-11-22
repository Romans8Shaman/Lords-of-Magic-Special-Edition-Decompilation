
undefined4 __thiscall FUN_00531120(void *this,LPCSTR unused_stack_4,int in_stack_8)

{
  LPCSTR arg1;
  int iVar1;
  undefined4 uVar2;
  tagMSG tStack_1c;
  
  if (*(int *)((int)this + 4) != 0) {
    FUN_00531030(this);
  }
  if (*(int *)((int)this + 0x224) == 0) {
    FUN_004750b0(&DAT_00584ae8,4,0x280,0x1e0,0x10);
  }
  arg1 = FUN_004fe670(&DAT_00584ae8,unused_stack_4);
  iVar1 = Ordinal_14(arg1,0xfe000,0xffffffff);
  *(int *)this = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00531930(this);
  uVar2 = FUN_0053c1f0(*(int *)(*(int *)this + 4) * *(int *)(*(int *)this + 8));
  *(undefined4 *)((int)this + 8) = uVar2;
  iVar1 = *(int *)this;
  *(int *)((int)this + 0x210) = *(int *)((int)this + 0x220);
  *(int *)((int)this + 0x20c) = *(int *)((int)this + 0x21c);
  *(int *)((int)this + 0x218) = *(int *)(iVar1 + 8) + *(int *)((int)this + 0x220);
  *(int *)((int)this + 0x214) = *(int *)(iVar1 + 4) + *(int *)((int)this + 0x21c);
  Ordinal_17(iVar1,1);
  iVar1 = *(int *)this;
  *(undefined4 *)((int)this + 4) = 1;
  Ordinal_23(iVar1,0,0,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),
             *(undefined4 *)((int)this + 8),0);
  Ordinal_19(*(undefined4 *)this);
  Ordinal_21(*(undefined4 *)this);
  if (in_stack_8 == 1) {
    iVar1 = *(int *)((int)this + 4);
    while (iVar1 != 0) {
      FUN_00530f00(&DAT_005867c0);
      iVar1 = Ordinal_32(DAT_005867c0);
      while (iVar1 != 0) {
        iVar1 = Ordinal_32(DAT_005867c0);
      }
      if (*(int *)(DAT_005867c0 + 0x374) == *(int *)(DAT_005867c0 + 0xc) + -1) {
        FUN_00531030(&DAT_005867c0);
      }
      PeekMessageA(&tStack_1c,(HWND)0x0,0x100,0x108,1);
      if (tStack_1c.message == 0x100) {
        FUN_00531030(&DAT_005867c0);
      }
      PeekMessageA(&tStack_1c,(HWND)0x0,0x200,0x209,1);
      if (tStack_1c.message == 0x202) {
        FUN_00531030(&DAT_005867c0);
      }
      if (tStack_1c.message == 0x205) {
        FUN_00531030(&DAT_005867c0);
      }
      iVar1 = *(int *)((int)this + 4);
    }
  }
  return 1;
}


