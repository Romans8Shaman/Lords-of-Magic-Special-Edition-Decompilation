/* Rebuilt from lomse.exe FUN_00427af0 @ 0x00427af0 (89 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00578800 (*(byte *)0x00578800)
#define DAT_00578818 (*(int *)0x00578818)
#define DAT_005788c8 (*(int *)0x005788c8)
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_00427af0 1
void __cdecl rb_00427af0(void)

{
  int arg1;
  
  if ((DAT_00578800 & 1) == 0) {
    DAT_00578800 = DAT_00578800 | 1;
    while (arg1 = DAT_00578818, DAT_00578818 = arg1, arg1 != 0) {
      DAT_00578818 = *(int *)(arg1 + 0x14);
      if (arg1 != 0) {
        DAT_005788c8 = DAT_005788c8 + -0x18;
        Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
      }
    }
  }
  return;
}
