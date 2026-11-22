/* Rebuilt from lomse.exe FUN_00509ee0 @ 0x00509ee0 (82 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d2cb8 (*(byte *)0x005d2cb8)
#define DAT_005d2cbc (*(int *)0x005d2cbc)
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define op_sunlight ((undefined4 (__stdcall *)(void))0x0051bc30)
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_00509ee0 1
void __cdecl rb_00509ee0(void)

{
  int arg1;
  
  if ((DAT_005d2cb8 & 1) == 0) {
    DAT_005d2cb8 = DAT_005d2cb8 | 1;
    while (arg1 = DAT_005d2cbc, DAT_005d2cbc = arg1, arg1 != 0) {
      DAT_005d2cbc = *(int *)(arg1 + 0x14);
      if (arg1 != 0) {
        op_sunlight();
        Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
      }
    }
  }
  return;
}
