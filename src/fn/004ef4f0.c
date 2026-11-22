/* Rebuilt from lomse.exe FUN_004ef4f0 @ 0x004ef4f0 (77 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004ef4f0 1
undefined4 __fastcall
rb_004ef4f0(undefined4 *param_1,undefined4 unused_reg_1,undefined4 *unused_stack_0,
            undefined4 unused_stack_4,undefined4 unused_stack_8)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)Ordinal_401(0x48,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  puVar3 = puVar1;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *unused_stack_0;
    unused_stack_0 = unused_stack_0 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar1[0xf] = unused_stack_4;
  puVar1[0x10] = unused_stack_8;
  puVar1[0x11] = *param_1;
  *param_1 = puVar1;
  return 1;
}
