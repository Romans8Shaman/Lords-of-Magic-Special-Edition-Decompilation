
void __thiscall FUN_00411b50(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x58c) != 0) {
    iVar1 = FUN_004b02a0((int *)((int)this + 0x55c));
    if (iVar1 != 0) {
      uVar2 = FUN_0047d680(param_1);
      FUN_0049da80(*(void **)((int)this + 0x58c),uVar2);
      return;
    }
    FUN_0049da80(*(void **)((int)this + 0x58c),param_1);
  }
  return;
}


