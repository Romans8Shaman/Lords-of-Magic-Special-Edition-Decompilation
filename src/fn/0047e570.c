/* Rebuilt from lomse.exe FUN_0047e570 @ 0x0047e570 (83 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0042dc60 ((undefined4 (__thiscall *)(void *, int))0x0042dc60)
#define FUN_0049dbe0 ((undefined4 (__fastcall *)(void *))0x0049dbe0)
#define FUN_004b0990 ((undefined4 (__thiscall *)(void *, int))0x004b0990)
#define FUN_004f5b50 ((undefined4 (__thiscall *)(void *, int))0x004f5b50)

#define LOM_SELF_0047e570 1
void __thiscall rb_0047e570(void *this,int param_1)

{
  void *pvVar1;
  
  FUN_004f5b50(this,param_1);
  FUN_004b0990((void *)((int)this + 0x88),param_1);
  pvVar1 = *(void **)((int)this + 0xb8);
  if ((pvVar1 != (void *)0x0) && (*(int *)((int)pvVar1 + 0x3c) == param_1)) {
    FUN_0049dbe0(pvVar1);
  }
  pvVar1 = *(void **)((int)this + 0xc0);
  if ((pvVar1 != (void *)0x0) && (*(int *)((int)pvVar1 + 0x3c) == param_1)) {
    FUN_0049dbe0(pvVar1);
  }
  FUN_0042dc60((void *)((int)this + 0x94),param_1);
  return;
}
