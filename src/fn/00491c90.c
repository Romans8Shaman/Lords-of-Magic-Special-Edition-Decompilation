/* Rebuilt from lomse.exe FUN_00491c90 @ 0x00491c90 (58 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0049dbe0 ((undefined4 (__fastcall *)(void *))0x0049dbe0)

#define LOM_SELF_00491c90 1
void __thiscall rb_00491c90(void *this,int param_1)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)this) {
    do {
      if ((*(int *)(*(int *)((int)this + 4) + iVar2 * 8) == 0xe) &&
         (pvVar1 = *(void **)(*(int *)((int)this + 4) + iVar2 * 8 + 4),
         *(int *)((int)pvVar1 + 0x3c) == param_1)) {
        FUN_0049dbe0(pvVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)this);
  }
  return;
}
