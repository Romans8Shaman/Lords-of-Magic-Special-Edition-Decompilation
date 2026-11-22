/* Rebuilt from lomse.exe FUN_004a7d50 @ 0x004a7d50 (111 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004a6d20 ((undefined4 (__thiscall *)(void *, int, int))0x004a6d20)
#define FUN_004f6030 ((int (__thiscall *)(void *, int))0x004f6030)

#define LOM_SELF_004a7d50 1
int __thiscall rb_004a7d50(void *this,int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_004f6030((void *)((int)this + 0x1c),(int)param_1);
  if (iVar1 == -1) {
    return -1;
  }
  param_1[7] = param_2;
  if (param_1[1] == 0) {
    *(uint *)(*(int *)((int)this + 100) + 4 + param_2 * 8) =
         *(uint *)(*(int *)((int)this + 100) + 4 + param_2 * 8) |
         1 << ((byte)param_1[0x12] & 0x1f) & 0xffU;
  }
  if (*(int *)((int)this + 0x20) == 0) {
    ((undefined4 (__thiscall *)(__typeof__(param_1)))(**(code **)(*param_1 + 0x1c)))(param_1);
  }
  FUN_004a6d20(this,(int)param_1,param_2);
  return iVar1;
}
