/* Rebuilt from lomse.exe FUN_0052b260 @ 0x0052b260 (50 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_0052b260 1
void __fastcall rb_0052b260(int *param_1)

{
  int iVar1;
  int arg1;
  
  iVar1 = *param_1;
  while (arg1 = iVar1, arg1 != 0) {
    iVar1 = *(int *)(arg1 + 0xc);
    if (arg1 != 0) {
      Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
    }
  }
  *param_1 = 0;
  return;
}
