/* Rebuilt from lomse.exe op_donewithnewinitiates @ 0x00451d10 (32 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00451a70 ((undefined4 (__cdecl *)(void *, uint *))0x00451a70)
#define FUN_00451bd0 ((undefined4 (__fastcall *)(int))0x00451bd0)

#define LOM_SELF_00451d10 1
void __cdecl rb_00451d10(void *vm)

{
  int iVar1;
  
  iVar1 = FUN_00451a70(vm,(uint *)&vm);
  if (iVar1 == 0) {
    return;
  }
  FUN_00451bd0((int)vm);
  return;
}
