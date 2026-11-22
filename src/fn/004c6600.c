/* Rebuilt from lomse.exe FUN_004c6600 @ 0x004c6600 (45 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004c6600 1
int __thiscall rb_004c6600(void *this,int param_1)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = *(int *)((int)this + 0xc);
  if (0 < iVar3) {
    psVar2 = (short *)(*(int *)this + 2);
    do {
      if (*psVar2 == *(short *)(*(int *)this + 2 + param_1 * 6)) {
        iVar1 = iVar1 + 1;
      }
      psVar2 = psVar2 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar1;
}
