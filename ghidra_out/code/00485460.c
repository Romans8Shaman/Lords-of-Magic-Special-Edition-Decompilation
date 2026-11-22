
uint __thiscall FUN_00485460(void *this,int param_1,byte param_2)

{
  uint uVar1;
  
  if (((param_2 & 1) != 0) && (uVar1 = FUN_00482ac0(this,param_1,3), uVar1 != 0)) {
    return uVar1;
  }
  if (((param_2 & 2) == 0) || (param_1 != -3)) {
    return 0;
  }
  return *(uint *)((int)this + 0x4820);
}


