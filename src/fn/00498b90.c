/* Rebuilt from lomse.exe FUN_00498b90 @ 0x00498b90 (57 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00498b00 ((undefined4 (__fastcall *)(int))0x00498b00)
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_00498b90 1
void __fastcall rb_00498b90(int *param_1)

{
  int arg1;
  int iVar1;
  
  iVar1 = 0x14;
  do {
    arg1 = *param_1;
    if (arg1 != 0) {
      FUN_00498b00(arg1);
      Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
      *param_1 = 0;
    }
    param_1 = param_1 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}
