/* Rebuilt from lomse.exe FUN_004f3b20 @ 0x004f3b20 (47 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004f3810 ((undefined4 (__cdecl *)(ushort *))0x004f3810)
#define FUN_004f56e0 ((undefined4 (__thiscall *)(void *, undefined4))0x004f56e0)

#define LOM_SELF_004f3b20 1
undefined4 __cdecl rb_004f3b20(undefined4 *param_1,undefined4 param_2,void *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004f3810((ushort *)*param_1);
  if (param_3 != (void *)0x0) {
    FUN_004f56e0(param_3,*(undefined4 *)((int)param_3 + 4));
    *(undefined1 *)((int)param_3 + 0xc) = 0;
  }
  return uVar1;
}
