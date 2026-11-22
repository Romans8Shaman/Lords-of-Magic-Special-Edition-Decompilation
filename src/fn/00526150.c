/* Rebuilt from lomse.exe FUN_00526150 @ 0x00526150 (57 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d2f08 (*(byte *)0x005d2f08)
#define DAT_005d2f28 (*(int *)0x005d2f28)
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_00526150 1
void __cdecl rb_00526150(void)

{
  if ((DAT_005d2f08 & 1) != 0) {
    return;
  }
  DAT_005d2f08 = DAT_005d2f08 | 1;
  if (DAT_005d2f28 != 0) {
    Ordinal_403(DAT_005d2f28,s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  return;
}
