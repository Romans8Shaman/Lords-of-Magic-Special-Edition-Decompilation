
undefined4 __thiscall FUN_0042d620(void *this,uint param_1)

{
  int iVar1;
  
  *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) & 0xfffffffc;
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 4) = 4;
  }
  else if (param_1 == 1) {
    *(undefined4 *)((int)this + 4) = 2;
  }
  else {
    iVar1 = FUN_0042e130(&DAT_005cd334,*(int *)((int)this + 8));
    if (iVar1 != 0) {
      *(undefined4 *)((int)this + 4) = *(undefined4 *)(iVar1 + 0x20);
    }
  }
  if (*(void **)((int)this + 0x10) != (void *)0x0) {
    FUN_0049da80(*(void **)((int)this + 0x10),param_1);
  }
  if (*(void **)((int)this + 0x14) != (void *)0x0) {
    FUN_0049da80(*(void **)((int)this + 0x14),param_1);
  }
  if (*(void **)((int)this + 0x18) != (void *)0x0) {
    FUN_0049da80(*(void **)((int)this + 0x18),param_1);
  }
  if (*(int *)((int)this + 0x1c) != 0) {
    FUN_0049da80(*(void **)((int)this + 0x14),param_1);
  }
  return 1;
}


