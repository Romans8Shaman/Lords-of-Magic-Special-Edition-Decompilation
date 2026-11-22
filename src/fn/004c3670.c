/* Rebuilt from lomse.exe op_knockoutprisoners @ 0x004c3670 (32 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_004c1d70 ((undefined4 (__fastcall *)(int))0x004c1d70)

#define LOM_SELF_004c3670 1
void __cdecl rb_004c3670(void *vm)

{
  int iVar1;
  
  iVar1 = FUN_0041be40(vm,&vm);
  if (iVar1 == 0) {
    return;
  }
  FUN_004c1d70((int)vm);
  return;
}
