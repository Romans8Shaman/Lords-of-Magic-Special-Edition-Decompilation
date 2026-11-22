/* Rebuilt from lomse.exe FUN_004d3110 @ 0x004d3110 (123 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004d3110 1
int __fastcall rb_004d3110(int param_1,undefined4 unused_reg_1,undefined4 unused_stack_0)

{
  int *arg1;
  int iVar1;
  
  arg1 = (int *)Ordinal_401(8,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  if (arg1 == (int *)0x0) {
    return 0;
  }
  iVar1 = Ordinal_401(unused_stack_0,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  *arg1 = iVar1;
  if (iVar1 == 0) {
    Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
    return 0;
  }
  *(int *)(param_1 + 0xa9c) = *(int *)(param_1 + 0xa9c) + 8;
  arg1[1] = *(int *)(param_1 + 0x84);
  *(int **)(param_1 + 0x84) = arg1;
  return *arg1;
}
