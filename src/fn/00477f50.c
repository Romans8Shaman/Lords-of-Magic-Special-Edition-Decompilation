/* Rebuilt from lomse.exe FUN_00477f50 @ 0x00477f50 (67 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00539eb0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *))0x00539eb0)
#define LAB_00478910 (*(undefined *)0x00478910) /* code label used as address */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_00477f50 1
void __fastcall rb_00477f50(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    if (iVar1 != 0) {
      FUN_00539eb0(iVar1,4,*(int *)(iVar1 + -4),&LAB_00478910);
      if (iVar1 + -4 != 0) {
        Ordinal_403(iVar1 + -4,s_C__lomse_source_storm_h_00555130,0x3f6,0);
      }
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}
