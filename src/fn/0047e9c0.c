/* Rebuilt from lomse.exe FUN_0047e9c0 @ 0x0047e9c0 (140 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0047ca20 ((undefined4 (__fastcall *)(int))0x0047ca20)
#define FUN_0047ca70 ((undefined4 * (__fastcall *)(undefined4 *))0x0047ca70)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_0047e9c0 1
undefined4 * __fastcall rb_0047e9c0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar2 = (undefined4 *)*param_1;
  if (puVar2 != (undefined4 *)0x0) {
    *param_1 = puVar2[0xf];
    puVar2[0xf] = 0;
    FUN_0047ca20((int)puVar2);
    return puVar2;
  }
  puVar1 = (undefined4 *)Ordinal_401(0xc4,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar2 = FUN_0047ca70(puVar1);
  return puVar2;
}
