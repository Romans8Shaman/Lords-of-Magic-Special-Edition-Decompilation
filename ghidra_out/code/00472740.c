
undefined4 __thiscall FUN_00472740(void *this,uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(uint *)((int)this + 0x178) = *(uint *)((int)this + 0x178) & 0xfffffffd;
  if (-1 < *(int *)((int)this + 0x16c)) {
    iVar2 = ShowCursor(0);
    *(int *)((int)this + 0x16c) = iVar2;
  }
  if (((int)param_1 < 0) || (0x4d < (int)param_1)) {
    return *(undefined4 *)((int)this + 0xe8);
  }
  uVar1 = *(undefined4 *)((int)this + 0xe8);
  *(uint *)((int)this + 0xe8) = param_1;
  if (*(void **)((int)this + 0x170) != (void *)0x0) {
    FUN_0049da80(*(void **)((int)this + 0x170),param_1);
  }
  FUN_00472720(this);
  return uVar1;
}


