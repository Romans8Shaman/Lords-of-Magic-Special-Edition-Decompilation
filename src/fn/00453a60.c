/* Rebuilt from lomse.exe FUN_00453a60 @ 0x00453a60 (67 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005792fc (*(int *)0x005792fc)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_00453a60 1
int __fastcall rb_00453a60(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    *param_1 = *(int *)(iVar1 + 0x24);
    *(undefined4 *)(iVar1 + 0x24) = 0;
    return iVar1;
  }
  iVar1 = Ordinal_401(0x28,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar1 + 0x24) = 0;
  DAT_005792fc = DAT_005792fc + 0x28;
  return iVar1;
}
