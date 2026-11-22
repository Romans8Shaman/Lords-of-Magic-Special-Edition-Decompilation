/* Rebuilt from lomse.exe FUN_004f5b50 @ 0x004f5b50 (26 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0049dbe0 ((undefined4 (__fastcall *)(void *))0x0049dbe0)

#define LOM_SELF_004f5b50 1
void __thiscall rb_004f5b50(void *this,int param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((int)this + 0x2c);
  if ((pvVar1 != (void *)0x0) && (*(int *)((int)pvVar1 + 0x3c) == param_1)) {
    FUN_0049dbe0(pvVar1);
  }
  return;
}
