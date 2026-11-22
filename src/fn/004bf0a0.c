/* Rebuilt from lomse.exe FUN_004bf0a0 @ 0x004bf0a0 (93 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00539660 ((uint (__cdecl *)(char *, uint, uint, int *))0x00539660)

#define LOM_SELF_004bf0a0 1
undefined4 __thiscall rb_004bf0a0(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00539660((char *)((int)this + 4),4,1,param_1);
  if (uVar1 != 1) {
    return 0;
  }
  iVar2 = *(int *)((int)this + 4) + 0x1f >> 5;
  if (0 < iVar2) {
    uVar1 = FUN_00539660(*(char **)this,iVar2 << 2,1,param_1);
    if (uVar1 != 1) {
      return 0;
    }
  }
  return 1;
}
