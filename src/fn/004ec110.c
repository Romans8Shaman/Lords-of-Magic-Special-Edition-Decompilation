/* Rebuilt from lomse.exe FUN_004ec110 @ 0x004ec110 (170 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004ec110 1
int __thiscall rb_004ec110(void *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)((int)this + 0xac);
  if ((*(byte *)((int)this + 0xd4) & 1) == 0) {
    if ((iVar1 <= param_2) && (param_2 <= *(int *)(*(int *)((int)this + 0x30) + 0x10) + -1 + iVar1))
    {
      iVar1 = 0;
      if (0 < *(int *)this) {
        piVar2 = (int *)((int)this + 0xb4);
        do {
          if ((*piVar2 <= param_1) &&
             (param_1 <= *(int *)(*(int *)((int)this + 0x30) + 0xc) + *piVar2)) {
            return iVar1;
          }
          iVar1 = iVar1 + 1;
          piVar2 = piVar2 + 1;
        } while (iVar1 < *(int *)this);
      }
    }
  }
  else if ((iVar1 <= param_1) &&
          (param_1 <= *(int *)(*(int *)((int)this + 0x30) + 0xc) + -1 + iVar1)) {
    iVar1 = 0;
    if (0 < *(int *)this) {
      piVar2 = (int *)((int)this + 0xb4);
      while ((param_2 < *piVar2 || (*(int *)(*(int *)((int)this + 0x30) + 0x10) + *piVar2 < param_2)
             )) {
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 1;
        if (*(int *)this <= iVar1) {
          return -1;
        }
      }
      return iVar1;
    }
  }
  return -1;
}
