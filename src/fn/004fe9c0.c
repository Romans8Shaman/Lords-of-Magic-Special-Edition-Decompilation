/* Rebuilt from lomse.exe FUN_004fe9c0 @ 0x004fe9c0 (35 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004fe9c0 1
void __fastcall rb_004fe9c0(int *param_1)

{
  int arg1;
  
  arg1 = *param_1;
  if (((arg1 != 0) && ((*(byte *)(param_1 + 3) & 4) == 0)) && (arg1 != 0)) {
    Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  return;
}
