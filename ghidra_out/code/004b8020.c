
undefined4 __thiscall FUN_004b8020(void *this,undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(void **)((int)this + 0x4b2c) != (void *)0x0) {
    iVar1 = FUN_004b7890(*(void **)((int)this + 0x4b2c),param_2);
    if (iVar1 != 0) {
      uVar2 = (/*IC:004b804a*/**(code **)(**(int **)((int)this + 0x4b2c) + 0x50))
                        (*(int **)((int)this + 0x4b2c),param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}


