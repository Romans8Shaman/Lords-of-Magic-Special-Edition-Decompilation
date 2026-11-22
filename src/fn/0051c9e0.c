/* Rebuilt from lomse.exe FUN_0051c9e0 @ 0x0051c9e0 (38 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0051b870 ((undefined4 (__stdcall *)(int))0x0051b870)
#define FUN_0051ca60 ((int (__thiscall *)(void *, int, uint))0x0051ca60)

#define LOM_SELF_0051c9e0 1
void __thiscall rb_0051c9e0(void *this,int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_0051b870(param_1);
  if (iVar1 == 0) {
    return;
  }
  FUN_0051ca60(this,iVar1,param_2);
  return;
}
