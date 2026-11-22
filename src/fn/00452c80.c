/* Rebuilt from lomse.exe FUN_00452c80 @ 0x00452c80 (89 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005792b8 (*(byte *)0x005792b8)
#define DAT_005792c4 (*(int *)0x005792c4)
#define DAT_005792fc (*(int *)0x005792fc)
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_00452c80 1
void __cdecl rb_00452c80(void)

{
  int arg1;
  
  if ((DAT_005792b8 & 1) == 0) {
    DAT_005792b8 = DAT_005792b8 | 1;
    while (arg1 = DAT_005792c4, DAT_005792c4 = arg1, arg1 != 0) {
      DAT_005792c4 = *(int *)(arg1 + 0x24);
      if (arg1 != 0) {
        DAT_005792fc = DAT_005792fc + -0x28;
        Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
      }
    }
  }
  return;
}
