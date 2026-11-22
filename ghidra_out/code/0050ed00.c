
undefined4 __thiscall FUN_0050ed00(void *this)

{
  undefined4 uVar1;
  
  if (*(int **)((int)this + 0x58) == (int *)0x0) {
    return *(undefined4 *)((int)this + 0x5c);
  }
                    /* WARNING: Could not recover jumptable at 0x0050ed0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (/*IC:0050ed0f*/**(code **)(**(int **)((int)this + 0x58) + 0x3c))();
  return uVar1;
}


