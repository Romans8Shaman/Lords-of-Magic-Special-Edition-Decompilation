/* Rebuilt from lomse.exe FUN_004979c0 @ 0x004979c0 (50 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583630 (*(byte *)0x00583630)
#define DAT_00583640 (*(int *)0x00583640)
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004979c0 1
void __cdecl rb_004979c0(void)

{
  if ((DAT_00583630 & 1) == 0) {
    DAT_00583630 = DAT_00583630 | 1;
    if (DAT_00583640 != 0) {
      Ordinal_403(DAT_00583640,s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
  }
  return;
}
