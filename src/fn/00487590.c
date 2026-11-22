/* Rebuilt from lomse.exe FUN_00487590 @ 0x00487590 (90 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa1bc (*(undefined4 *)0x005aa1bc)
#define DAT_005aa1c0 (*(undefined4 *)0x005aa1c0)
#define DAT_005cd360 (*(void * *)0x005cd360)
#define FUN_004875f0 ((undefined4 (__fastcall *)(void *))0x004875f0)
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define _DAT_005aa1cc (*(undefined4 *)0x005aa1cc)
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_00487590 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall rb_00487590(undefined4 *param_1)

{
  void *arg1;
  
  arg1 = DAT_005cd360;
  if (DAT_005cd360 != (void *)0x0) {
    FUN_004875f0(DAT_005cd360);
    Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
    DAT_005cd360 = (void *)0x0;
  }
  param_1[4] = 0;
  param_1[2] = 100;
  *param_1 = DAT_005aa1bc;
  param_1[1] = DAT_005aa1c0;
  _DAT_005aa1cc = param_1;
  return param_1;
}
