
undefined4 __thiscall FUN_004f5a50(void *this,LONG param_1,LONG param_2)

{
  undefined4 uVar1;
  
  if (*(void **)((int)this + 0x2c) == (void *)0x0) {
    return 0;
  }
  if (*(int *)((int)this + 0x28) < 0) {
    return 0;
  }
  uVar1 = FUN_0049d840(*(void **)((int)this + 0x2c),param_1,param_2,*(int *)((int)this + 0x14),
                       *(int *)((int)this + 0x18));
  return uVar1;
}


