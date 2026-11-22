
void __thiscall FUN_004b6af0(void *this,undefined4 param_1)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x4b2c) == 0) {
    FUN_004b7b10(0,param_1);
    return;
  }
  iVar1 = FUN_004b7dd0(*(int *)((int)this + 0x4b2c));
  FUN_004b7b10(iVar1 + -1,param_1);
  return;
}


