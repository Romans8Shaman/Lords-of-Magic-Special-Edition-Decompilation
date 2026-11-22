
undefined4 __thiscall FUN_004f5b90(void *this,int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  
  pvVar1 = *(void **)((int)this + 0x2c);
  if (pvVar1 == (void *)0x0) {
    return 0;
  }
  *(int *)((int)pvVar1 + 0xc) = param_1 + -1;
  uVar2 = FUN_0049d9a0(pvVar1);
  return uVar2;
}


