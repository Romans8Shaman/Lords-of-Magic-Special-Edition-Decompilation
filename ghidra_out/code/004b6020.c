
void __cdecl op_netlockgame(void)

{
  if (DAT_005d1e84 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004b602c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (/*IC:004b602c*/**(code **)(*DAT_005d1e84 + 0x58))();
  return;
}


