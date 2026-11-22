/* Rebuilt from lomse.exe op_artifactdefendmodifications @ 0x0042c2e0 (32 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_0042c290 ((undefined4 (__fastcall *)(int))0x0042c290)

#define LOM_SELF_0042c2e0 1
void __cdecl rb_0042c2e0(void *vm)

{
  int iVar1;
  
  iVar1 = FUN_0041be40(vm,&vm);
  if (iVar1 == 0) {
    return;
  }
  FUN_0042c290((int)vm);
  return;
}
