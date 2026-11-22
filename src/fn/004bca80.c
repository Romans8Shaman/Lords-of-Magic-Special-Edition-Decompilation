/* Rebuilt from lomse.exe FUN_004bca80 @ 0x004bca80 (81 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005844c8 (*(int *)0x005844c8)
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define op_sunlight ((undefined4 (__stdcall *)(void))0x0051bc30)
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004bca80 1
void __fastcall rb_004bca80(int param_1)

{
  int iVar1;
  int arg1;
  
  iVar1 = *(int *)(param_1 + 0xd24);
  while (arg1 = iVar1, arg1 != 0) {
    iVar1 = *(int *)(arg1 + 0x20);
    if (arg1 == DAT_005844c8) {
      DAT_005844c8 = 0;
    }
    if (arg1 != 0) {
      op_sunlight();
      Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
    }
  }
  *(undefined4 *)(param_1 + 0xd24) = 0;
  return;
}
