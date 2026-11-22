/* Rebuilt from lomse.exe FUN_004a2c10 @ 0x004a2c10 (37 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004a2c10 1
void __fastcall rb_004a2c10(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    Ordinal_403(*(int *)(param_1 + 0x14),s_C__lomse_source_storm_h_00555130,0x3f6,0);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}
