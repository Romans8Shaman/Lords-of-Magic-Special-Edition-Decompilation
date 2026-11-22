/* Rebuilt from lomse.exe op_executeprisoners @ 0x004c3690 (45 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_004c1c50 ((undefined4 (__fastcall *)(int))0x004c1c50)
#define FUN_004c2520 ((undefined4 (__fastcall *)(int))0x004c2520)

#define LOM_SELF_004c3690 1
void __cdecl rb_004c3690(void *vm)

{
  int iVar1;
  
  iVar1 = FUN_0041be40(vm,&vm);
  if (iVar1 != 0) {
    iVar1 = FUN_004c1c50((int)vm);
    if (iVar1 != 0) {
      FUN_004c2520((int)vm);
      return;
    }
  }
  return;
}
