/* Rebuilt from lomse.exe FUN_00518690 @ 0x00518690 (93 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00518690 1
undefined4 __thiscall
rb_00518690(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)((int)this + 0x202ac) + 4 + param_2 * 4);
  if ((((param_6 < *(short *)(iVar1 + 2 + param_1 * 8)) ||
       (iVar2 = *(int *)(*(int *)((int)this + 0x202ac) + param_2 * 4),
       *(short *)(iVar2 + 10 + param_1 * 8) < param_4)) ||
      (*(short *)(iVar2 + param_1 * 8) < param_3)) ||
     (param_5 < *(short *)(iVar1 + 8 + param_1 * 8))) {
    return 0xffffffff;
  }
  return 8;
}
