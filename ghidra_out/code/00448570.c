
undefined4 __thiscall FUN_00448570(void *this)

{
  undefined4 uVar1;
  
  if (*(int **)((int)this + 0x48) == (int *)0x0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00448579. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (/*IC:00448579*/**(code **)(**(int **)((int)this + 0x48) + 0x4c))();
  return uVar1;
}


