/* Rebuilt from lomse.exe FUN_0049cd50 @ 0x0049cd50 (39 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004b9d00 ((undefined4 (__thiscall *)(void *, int, int, uint))0x004b9d00)

#define LOM_SELF_0049cd50 1
void __thiscall rb_0049cd50(void *this,int param_1,uint param_2)

{
  int iVar1;
  
  if ((*(int *)((int)this + 0x3c) != 0) &&
     (iVar1 = *(int *)(*(int *)((int)this + 0x3c) + 0x11c), iVar1 != 0)) {
    FUN_004b9d00((void *)((int)this + 0x30),iVar1,param_1,param_2);
  }
  return;
}
