
undefined4 __thiscall FUN_00427130(void *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (*(int *)((int)this + 0x4c) <= param_1)) {
    return 0;
  }
  uVar1 = FUN_0052b110((int *)((int)this + param_1 * 0x4c + 0xc4));
  return uVar1;
}


