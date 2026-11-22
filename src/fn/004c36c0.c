/* Rebuilt from lomse.exe op_freeprisoners @ 0x004c36c0 (63 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_004c1320 ((undefined4 (__stdcall *)(int, undefined4, undefined4, undefined1))0x004c1320)
#define FUN_004c1c50 ((undefined4 (__fastcall *)(int))0x004c1c50)

#define LOM_SELF_004c36c0 1
void __cdecl rb_004c36c0(void *vm)

{
  int iVar1;
  
  iVar1 = FUN_0041be40(vm,&vm);
  if (iVar1 != 0) {
    iVar1 = FUN_004c1c50((int)vm);
    if (iVar1 != 0) {
      FUN_004c1320(*(int *)((int)vm + 0x5b4),0xffffffff,0xffffffff,3);
    }
  }
  return;
}
