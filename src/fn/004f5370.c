/* Rebuilt from lomse.exe FUN_004f5370 @ 0x004f5370 (151 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004f5350 ((undefined4 (__cdecl *)(undefined4, undefined4))0x004f5350)
#define FUN_004f5440 ((undefined4 (__fastcall *)(int))0x004f5440)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_c__NEWERSTORM_H_storm_h_00573258 (*(char (*)[])0x00573258)

#define LOM_SELF_004f5370 1
undefined4 __cdecl rb_004f5370(undefined4 *in_stack_4,undefined4 in_stack_8,undefined4 in_stack_c)

{
  undefined4 *puVar1;

  puVar1 = (undefined4 *)Ordinal_401(0x11c,s_c__NEWERSTORM_H_storm_h_00573258,0x3ef,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_004f5440((int)puVar1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0x27f;
    puVar1[3] = 0x1dc;
  }
  *in_stack_4 = puVar1;
  FUN_004f5350(in_stack_8,in_stack_c);
  return 0;
}
