/* Rebuilt from lomse.exe FUN_0046f360 @ 0x0046f360 (74 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005831dc (*(undefined4 * *)0x005831dc)
#define FUN_004eacf0 ((undefined4 (__fastcall *)(undefined4 *))0x004eacf0)
#define FUN_004eb080 ((undefined4 (__fastcall *)(undefined4 *))0x004eb080)
#define FUN_004eb110 ((undefined4 (__fastcall *)(undefined4 *))0x004eb110)
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_0046f360 1
void __stdcall rb_0046f360(void)

{
  undefined4 *arg1;
  
  if (DAT_005831dc != (undefined4 *)0x0) {
    FUN_004eb110(DAT_005831dc);
    FUN_004eb080(DAT_005831dc);
    arg1 = DAT_005831dc;
    if (DAT_005831dc != (undefined4 *)0x0) {
      FUN_004eacf0(DAT_005831dc);
      Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
    }
    DAT_005831dc = (undefined4 *)0x0;
  }
  return;
}
