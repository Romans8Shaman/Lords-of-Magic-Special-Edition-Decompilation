/* Rebuilt from lomse.exe FUN_004bcae0 @ 0x004bcae0 (29 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005844c8 (*(void * *)0x005844c8)
#define FUN_0050b880 ((undefined4 (__thiscall *)(void *, undefined4, undefined4 *))0x0050b880)

#define LOM_SELF_004bcae0 1
undefined4 __cdecl rb_004bcae0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (DAT_005844c8 == (void *)0x0) {
    return 0;
  }
  uVar1 = FUN_0050b880(DAT_005844c8,param_1,param_2);
  return uVar1;
}
