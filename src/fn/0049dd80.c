/* Rebuilt from lomse.exe FUN_0049dd80 @ 0x0049dd80 (71 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00547b90 ((uint (__cdecl *)(byte *, byte *))0x00547b90)

#define LOM_SELF_0049dd80 1
int __thiscall rb_0049dd80(void *this,byte *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)((int)this + 4) < 1) {
    return -1;
  }
  do {
    uVar1 = FUN_00547b90(*(byte **)(*(int *)this + iVar2 * 4),param_1);
    if (uVar1 == 0) {
      return iVar2;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < *(int *)((int)this + 4));
  return -1;
}
