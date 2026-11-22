/* Rebuilt from lomse.exe FUN_004f0060 @ 0x004f0060 (70 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004efd60 ((undefined4 (__stdcall *)(void))0x004efd60)
#define FUN_00539eb0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *))0x00539eb0)
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004f0060 1
void __fastcall rb_004f0060(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    if (iVar1 != 0) {
      FUN_00539eb0(iVar1,0xac,*(int *)(iVar1 + -4),FUN_004efd60);
      if (iVar1 + -4 != 0) {
        Ordinal_403(iVar1 + -4,s_C__lomse_source_storm_h_00555130,0x3f6,0);
      }
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}
