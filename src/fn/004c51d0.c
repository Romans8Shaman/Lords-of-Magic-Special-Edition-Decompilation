/* Rebuilt from lomse.exe FUN_004c51d0 @ 0x004c51d0 (44 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004c6f70 ((undefined4 (__fastcall *)(int))0x004c6f70)
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004c51d0 1
void __fastcall rb_004c51d0(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    Ordinal_403(*(int *)(param_1 + 0xc),s_C__lomse_source_storm_h_00555130,0x3f6,0);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  FUN_004c6f70(param_1);
  return;
}
