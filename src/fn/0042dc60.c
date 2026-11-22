/* Rebuilt from lomse.exe FUN_0042dc60 @ 0x0042dc60 (81 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0049dbe0 ((undefined4 (__fastcall *)(void *))0x0049dbe0)

#define LOM_SELF_0042dc60 1
void __thiscall rb_0042dc60(void *this,int param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((int)this + 0x10);
  if ((pvVar1 != (void *)0x0) && (*(int *)((int)pvVar1 + 0x3c) == param_1)) {
    FUN_0049dbe0(pvVar1);
  }
  pvVar1 = *(void **)((int)this + 0x14);
  if ((pvVar1 != (void *)0x0) && (*(int *)((int)pvVar1 + 0x3c) == param_1)) {
    FUN_0049dbe0(pvVar1);
  }
  pvVar1 = *(void **)((int)this + 0x18);
  if ((pvVar1 != (void *)0x0) && (*(int *)((int)pvVar1 + 0x3c) == param_1)) {
    FUN_0049dbe0(pvVar1);
  }
  pvVar1 = *(void **)((int)this + 0x1c);
  if ((pvVar1 != (void *)0x0) && (*(int *)((int)pvVar1 + 0x3c) == param_1)) {
    FUN_0049dbe0(pvVar1);
  }
  return;
}
