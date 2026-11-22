
undefined4 __thiscall FUN_005192d0(void *this,undefined1 param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_005192b0((char)*(int *)((int)this + 0x1b0),*(int *)((int)this + 0x1b4),
               *(int *)((int)this + 0x1b0) + 0x280,*(int *)((int)this + 0x1b4) + 0x180);
  iVar2 = *(int *)((int)this + 0x20c) + 1;
  *(int *)((int)this + 0x20c) = iVar2;
  if (*(int *)((int)this + 0x1ec) / *(int *)((int)this + 0x1dc) <= iVar2) {
    *(undefined4 *)((int)this + 0x214) = 0;
  }
  FUN_00518c50(this,*(int *)((int)this + 0x1b8),*(int *)((int)this + 0x1bc),
               *(int *)((int)this + 0x1c0),*(undefined4 *)((int)this + 0x1c4),
               *(undefined4 *)((int)this + 0x1c8),*(undefined4 *)((int)this + 0x1cc),
               *(undefined4 *)((int)this + 0x1d0),*(undefined4 *)((int)this + 0x1d4),1);
  iVar2 = 0;
  iVar1 = 0;
  switch(param_1) {
  case 1:
    iVar2 = *(int *)((int)this + 0x1dc);
  case 0:
    iVar1 = -*(int *)((int)this + 0x1e0);
    break;
  case 2:
    iVar2 = *(int *)((int)this + 0x1dc);
    break;
  case 3:
    iVar2 = *(int *)((int)this + 0x1dc);
    iVar1 = *(int *)((int)this + 0x1e0);
    break;
  case 5:
    iVar2 = -*(int *)((int)this + 0x1dc);
  case 4:
    iVar1 = *(int *)((int)this + 0x1e0);
    break;
  case 6:
    iVar2 = -*(int *)((int)this + 0x1dc);
    break;
  case 7:
    iVar2 = -*(int *)((int)this + 0x1dc);
    iVar1 = -*(int *)((int)this + 0x1e0);
  }
  if (*(int *)((int)this + 0x214) != 0) {
    *(int *)((int)this + 0x1b0) = *(int *)((int)this + 0x1b0) + iVar2;
    *(int *)((int)this + 0x1b4) = *(int *)((int)this + 0x1b4) + iVar1;
  }
  *(int *)((int)this + 0x1a4) = *(int *)((int)this + 0x1a4) - iVar2;
  *(int *)((int)this + 0x1a8) = *(int *)((int)this + 0x1a8) - iVar1;
  FUN_004f6540(&DAT_005ae974,-iVar2,-iVar1);
  FUN_00472b80(&DAT_005a9e04,-iVar2,-iVar1);
  return 1;
}


