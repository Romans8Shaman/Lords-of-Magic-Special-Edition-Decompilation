
void __thiscall FUN_0047d630(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0xb8) != 0) {
    iVar1 = FUN_004b02a0((int *)((int)this + 0x88));
    if (iVar1 != 0) {
      uVar2 = FUN_0047d680(param_1);
      FUN_0049da80(*(void **)((int)this + 0xb8),uVar2);
      return;
    }
    FUN_0049da80(*(void **)((int)this + 0xb8),param_1);
  }
  return;
}


