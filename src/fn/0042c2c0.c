/* Rebuilt from lomse.exe op_artifactattackmodifications @ 0x0042c2c0 (32 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_0042c260 ((undefined4 (__fastcall *)(int))0x0042c260)

#define LOM_SELF_0042c2c0 1
void __cdecl rb_0042c2c0(void *vm)

{
  int iVar1;
  
  iVar1 = FUN_0041be40(vm,&vm);
  if (iVar1 == 0) {
    return;
  }
  FUN_0042c260((int)vm);
  return;
}
