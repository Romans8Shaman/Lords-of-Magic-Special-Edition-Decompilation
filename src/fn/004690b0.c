/* Rebuilt from lomse.exe op_checkaimissileunittarget @ 0x004690b0 (44 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005577c8 (*(int *)0x005577c8)
#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_00469070 ((undefined4 (__fastcall *)(void *))0x00469070)

#define LOM_SELF_004690b0 1
void __cdecl rb_004690b0(void *vm)

{
  int iVar1;
  
  iVar1 = FUN_0041be40(vm,&vm);
  if ((iVar1 == 0) || (*(int *)((int)vm + 0x48) != DAT_005577c8)) {
    return;
  }
  FUN_00469070(vm);
  return;
}
