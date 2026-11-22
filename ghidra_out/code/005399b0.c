
void FUN_005399b0(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x005399b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (/*IC:005399b5*/*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}


