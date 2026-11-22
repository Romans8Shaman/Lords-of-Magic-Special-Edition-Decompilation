/* Rebuilt from lomse.exe FUN_0044b4f0 @ 0x0044b4f0 (268 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0044b730 ((undefined4 * (__fastcall *)(undefined4 *))0x0044b730)
#define FUN_0044b8e0 ((undefined4 * (__fastcall *)(undefined4 *))0x0044b8e0)
#define FUN_0044b950 ((undefined4 * (__fastcall *)(undefined4 *))0x0044b950)
#define FUN_0044b970 ((undefined4 * (__fastcall *)(undefined4 *))0x0044b970)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_0044b4f0 1
undefined4 * __cdecl rb_0044b4f0(undefined4 param_1)

{
  undefined4 *puVar1;

  puVar1 = (undefined4 *)0x0;
  switch(param_1) {
  case 0:
    puVar1 = (undefined4 *)Ordinal_401(0x28,s_C__lomse_source_storm_h_00555130,0x3ef,0);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = FUN_0044b730(puVar1);
      goto switchD_0044b514_default;
    }
    break;
  case 1:
    puVar1 = (undefined4 *)Ordinal_401(0x14,s_C__lomse_source_storm_h_00555130,0x3ef,0);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = FUN_0044b8e0(puVar1);
      goto switchD_0044b514_default;
    }
    break;
  case 2:
    puVar1 = (undefined4 *)Ordinal_401(0x14,s_C__lomse_source_storm_h_00555130,0x3ef,0);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = FUN_0044b950(puVar1);
      goto switchD_0044b514_default;
    }
    break;
  case 3:
    puVar1 = (undefined4 *)Ordinal_401(0x48,s_C__lomse_source_storm_h_00555130,0x3ef,0);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = FUN_0044b970(puVar1);
      goto switchD_0044b514_default;
    }
    break;
  default:
    goto switchD_0044b514_default;
  }
  puVar1 = (undefined4 *)0x0;
switchD_0044b514_default:
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0;
    puVar1[3] = 1;
    puVar1[4] = 0xffffffff;
  }
  return puVar1;
}
