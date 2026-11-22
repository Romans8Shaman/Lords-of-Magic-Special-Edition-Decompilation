
void FUN_00539970(undefined *UNRECOVERED_JUMPTABLE)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x0053999b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (/*IC:0053999b*/*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}


