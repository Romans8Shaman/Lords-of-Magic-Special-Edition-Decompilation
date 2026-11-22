/* Rebuilt from lomse.exe FUN_0040c9c0 @ 0x0040c9c0 (117 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00555728 (*(int *)0x00555728)
#define DAT_00578138 (*(undefined4 *)0x00578138)
#define FUN_0040caf0 ((undefined4 (__thiscall *)(void *, int))0x0040caf0)

#define LOM_SELF_0040c9c0 1
undefined4 __thiscall rb_0040c9c0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)((int)this + 0xc) == 0) {
    iVar3 = 0;
    iVar1 = *(int *)this;
    if (*(int *)this != 0) {
      do {
        iVar2 = iVar1;
        if (*(int *)(iVar2 + 0x34) == param_1) {
          if (iVar3 == 0) {
            *(undefined4 *)this = *(undefined4 *)(iVar2 + 0x38);
            FUN_0040caf0(this,iVar2);
            return 1;
          }
          *(undefined4 *)(iVar3 + 0x38) = *(undefined4 *)(iVar2 + 0x38);
          FUN_0040caf0(this,iVar2);
          return 1;
        }
        iVar1 = *(int *)(iVar2 + 0x38);
        iVar3 = iVar2;
      } while (*(int *)(iVar2 + 0x38) != 0);
      return 0;
    }
  }
  else if (param_1 == DAT_00555728) {
    DAT_00578138 = 1;
    return 1;
  }
  return 0;
}
