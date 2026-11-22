/* Rebuilt from lomse.exe FUN_0049acf0 @ 0x0049acf0 (185 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0049acf0 1
int __thiscall rb_0049acf0(void *this,uint param_1,uint param_2,undefined4 *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)this != 0) && (iVar2 = *(int *)(*(int *)this + 8), iVar2 != 0)) {
    if (*(int *)((int)this + 4) != 0) {
      if ((int)param_1 < 0) {
        return 0;
      }
      if (*(int *)((int)this + 8) <= (int)param_1) {
        return 0;
      }
      param_1 = *(uint *)(*(int *)((int)this + 4) + param_1 * 4);
    }
    if ((-1 < (int)param_1) && ((int)param_1 < (int)(uint)*(ushort *)(iVar2 + 0x1a))) {
      iVar2 = (param_1 & 0xffff) * 0x10;
      *param_3 = 0;
      iVar3 = *(int *)(*(int *)(*(int *)this + 8) + 0x1c) + iVar2;
      if (((*(byte *)(iVar3 + 1) & 0x80) != 0) &&
         (bVar1 = *(byte *)(iVar3 + 0xb), (int)(uint)bVar1 <= (int)param_2)) {
        *param_3 = 1;
        param_2 = ((uint)bVar1 * 2 - param_2) - 2;
      }
      if ((-1 < (int)param_2) && ((int)param_2 < (int)(uint)*(byte *)(iVar3 + 0xb))) {
        return *(int *)(*(int *)(*(int *)(*(int *)this + 8) + 0x1c) + 0xc + iVar2) +
               (param_2 & 0xffff) * 8;
      }
    }
  }
  return 0;
}
