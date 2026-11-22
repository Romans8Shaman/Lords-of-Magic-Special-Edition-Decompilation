
void __thiscall FUN_004ecc30(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  iVar2 = *(int *)((int)this + 0x54) + -1;
  *(int *)((int)this + 0x54) = iVar2;
  iVar1 = *(int *)((int)this + 0x50);
  *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
  *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = param_1;
  return;
}


