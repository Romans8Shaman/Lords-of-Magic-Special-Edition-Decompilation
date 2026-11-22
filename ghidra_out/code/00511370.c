
undefined4 __thiscall FUN_00511370(void *this)

{
  undefined4 uVar1;
  
  if (*(int **)((int)this + 0x58) == (int *)0x0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00511379. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (/*IC:00511379*/**(code **)(**(int **)((int)this + 0x58) + 0x4c))();
  return uVar1;
}


