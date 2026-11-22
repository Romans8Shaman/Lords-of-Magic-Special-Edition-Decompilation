/* Rebuilt from lomse.exe FUN_00528e20 @ 0x00528e20 (82 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d2f0c (*(byte *)0x005d2f0c)
#define DAT_005d2f50 (*(int *)0x005d2f50)
#define FUN_00526c10 ((undefined4 (__stdcall *)(void))0x00526c10)
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_00528e20 1
void __cdecl rb_00528e20(void)

{
  int arg1;
  
  if ((DAT_005d2f0c & 1) == 0) {
    DAT_005d2f0c = DAT_005d2f0c | 1;
    while (arg1 = DAT_005d2f50, DAT_005d2f50 = arg1, arg1 != 0) {
      DAT_005d2f50 = *(int *)(arg1 + 0x1c);
      if (arg1 != 0) {
        FUN_00526c10();
        Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
      }
    }
  }
  return;
}
