/* Rebuilt from lomse.exe op_resetarmyeffectivemovement @ 0x004e6dd0 (32 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_00420630 ((undefined4 (__fastcall *)(int))0x00420630)

#define LOM_SELF_004e6dd0 1
void __cdecl rb_004e6dd0(void *vm)

{
  int iVar1;
  
  iVar1 = FUN_0041be40(vm,&vm);
  if (iVar1 == 0) {
    return;
  }
  FUN_00420630((int)vm);
  return;
}
