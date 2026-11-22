
uint __thiscall FUN_00482ac0(void *this,int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = FUN_004f6000((void *)((int)this + 0x4848),param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return uVar1 & (*(int *)(uVar1 + 4) != param_2) - 1;
}


