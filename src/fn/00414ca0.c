/* Rebuilt from lomse.exe FUN_00414ca0 @ 0x00414ca0 (93 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00521e50 ((uint (__fastcall *)(int *))0x00521e50)

#define LOM_SELF_00414ca0 1
undefined4 __thiscall rb_00414ca0(void *this,uint param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(int *)((int)this + 0x4c) < 1) {
    return 1;
  }
  piVar2 = (int *)((int)this + 0xc4);
  do {
    if ((param_1 & 1 << ((byte)iVar3 & 0x1f)) != 0) {
      uVar1 = FUN_00521e50(piVar2);
      if (uVar1 != 0) {
        return 0;
      }
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 0x13;
  } while (iVar3 < *(int *)((int)this + 0x4c));
  return 1;
}
