/* Rebuilt from lomse.exe FUN_004277e0 @ 0x004277e0 (57 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004277e0 1
int __thiscall rb_004277e0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = *(int *)((int)this + 4) - param_1;
  if (0 < iVar3) {
    do {
      iVar2 = 0;
      if (0 < param_1) {
        do {
          if (*(char *)(iVar2 + *(int *)this + iVar1) != '\x10') break;
          iVar2 = iVar2 + 1;
        } while (iVar2 < param_1);
      }
      if (iVar2 == param_1) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar3);
  }
  return -1;
}
