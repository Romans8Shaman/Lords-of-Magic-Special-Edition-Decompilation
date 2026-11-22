
void __thiscall FUN_0047b4b0(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    FUN_0047b560((undefined4 *)((int)this + 0x255a4));
    return;
  }
  iVar1 = *(int *)((int)this + 0x25318);
  while (iVar1 != 0) {
    iVar1 = **(int **)((int)this + 0x25318);
    FUN_0048ed70(*(int **)((int)this + 0x25318),0xffffffff);
    *(int *)((int)this + 0x25318) = iVar1;
  }
  FUN_0047b520((undefined4 *)((int)this + 0x255a4));
  return;
}


