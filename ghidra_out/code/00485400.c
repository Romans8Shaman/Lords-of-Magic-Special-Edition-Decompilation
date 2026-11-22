
undefined * __thiscall FUN_00485400(void *this,int param_1,byte param_2)

{
  undefined *puVar1;
  
  if (((param_2 & 1) != 0) &&
     (puVar1 = (undefined *)FUN_00482ac0(this,param_1,2), puVar1 != (undefined *)0x0)) {
    return puVar1;
  }
  if (((param_2 & 2) != 0) && (param_1 == -3)) {
    return *(undefined **)((int)this + 0x4828);
  }
  if (((param_2 & 4) == 0) || (param_1 != -2)) {
    return (undefined *)0x0;
  }
  return &DAT_00583440;
}


