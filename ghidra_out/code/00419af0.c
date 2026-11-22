
undefined4 __thiscall FUN_00419af0(void *this,undefined4 param_1,int param_2)

{
  int iVar1;
  undefined *this_00;
  
  iVar1 = FUN_00420580((int)this);
  if (iVar1 != 0) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x53c) = *(undefined4 *)((int)this + 0x540);
  DAT_005aeef4 = 1;
  iVar1 = *(int *)((int)this + 0x1c);
  if (iVar1 != param_2) {
    this_00 = FUN_004c6fc0();
    iVar1 = FUN_004a8b50(this_00,iVar1,param_2);
    DAT_005aeef4 = 1;
    if (iVar1 < 8) {
      FUN_004f5b70(this,iVar1);
      *(int *)((int)this + 0x44) = iVar1;
      FUN_004b0310((void *)((int)this + 0x55c),iVar1);
      if (*(void **)((int)this + 0x58c) != (void *)0x0) {
        FUN_0049dcc0(*(void **)((int)this + 0x58c),iVar1);
      }
      if (*(void **)((int)this + 0x598) != (void *)0x0) {
        FUN_0049dcc0(*(void **)((int)this + 0x598),*(int *)((int)this + 0x44));
      }
      FUN_00421180(this);
    }
  }
  return 1;
}


