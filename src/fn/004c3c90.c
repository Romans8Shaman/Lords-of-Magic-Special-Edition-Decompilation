/* Rebuilt from lomse.exe FUN_004c3c90 @ 0x004c3c90 (80 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00539eb0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *))0x00539eb0)
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define op_sunlight ((undefined4 (__stdcall *)(void))0x0051bc30)
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004c3c90 1
void __fastcall rb_004c3c90(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if (iVar1 != 0) {
    if (iVar1 != 0) {
      FUN_00539eb0(iVar1,8,*(int *)(iVar1 + -4),op_sunlight);
      if (iVar1 + -4 != 0) {
        Ordinal_403(iVar1 + -4,s_C__lomse_source_storm_h_00555130,0x3f6,0);
      }
    }
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}
