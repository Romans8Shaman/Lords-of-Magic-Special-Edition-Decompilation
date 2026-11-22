/* Rebuilt from lomse.exe FUN_00497d80 @ 0x00497d80 (50 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00497940 ((int (__fastcall *)(int *))0x00497940)
#define FUN_00498110 ((int (__fastcall *)(int))0x00498110)

#define LOM_SELF_00497d80 1
int __thiscall rb_00497d80(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00498110((int)this);
  iVar2 = FUN_00497940(this);
  if ((param_1 < iVar2) && (-1 < param_1)) {
    if (iVar2 - iVar1 < param_1) {
      param_1 = iVar2 - iVar1;
    }
    *(int *)((int)this + 0x20) = param_1;
  }
  return *(int *)((int)this + 0x20);
}
