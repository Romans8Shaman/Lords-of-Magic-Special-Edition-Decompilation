/* Rebuilt from lomse.exe FUN_004ad010 @ 0x004ad010 (59 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0049dbe0 ((undefined4 (__fastcall *)(void *))0x0049dbe0)
#define FUN_004f5b50 ((undefined4 (__thiscall *)(void *, int))0x004f5b50)

#define LOM_SELF_004ad010 1
void __thiscall rb_004ad010(void *this,int param_1)

{
  void *pvVar1;
  
  FUN_004f5b50(this,param_1);
  pvVar1 = *(void **)((int)this + 0xe4);
  if ((pvVar1 != (void *)0x0) && (*(int *)((int)pvVar1 + 0x3c) == param_1)) {
    FUN_0049dbe0(pvVar1);
  }
  pvVar1 = *(void **)((int)this + 0xe8);
  if ((pvVar1 != (void *)0x0) && (*(int *)((int)pvVar1 + 0x3c) == param_1)) {
    FUN_0049dbe0(pvVar1);
  }
  return;
}
