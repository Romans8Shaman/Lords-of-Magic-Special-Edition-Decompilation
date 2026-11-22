/* Rebuilt from lomse.exe FUN_00487730 @ 0x00487730 (42 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00487650 ((undefined4 (__thiscall *)(void *, int))0x00487650)
#define FUN_0053ac20 ((DWORD (__cdecl *)(undefined4 *))0x0053ac20)

#define LOM_SELF_00487730 1
void __thiscall rb_00487730(void *this,undefined4 *param_1)

{
  DWORD DVar1;
  
  if (*(int *)((int)this + 0xa0) != 0) {
    DVar1 = FUN_0053ac20(param_1);
    FUN_00487650(*(void **)((int)this + 0xa0),DVar1);
  }
  return;
}
