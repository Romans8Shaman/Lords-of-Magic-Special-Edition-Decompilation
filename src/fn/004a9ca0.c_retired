/* Rebuilt from lomse.exe FUN_004a9ca0 @ 0x004a9ca0 (106 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004a9b90 ((undefined4 (__thiscall *)(void *, int))0x004a9b90)
#define FUN_004fbe60 ((undefined4 (__thiscall *)(void *, int, int))0x004fbe60)
#define FUN_0050d770 ((undefined4 (__fastcall *)(int))0x0050d770)

#define LOM_SELF_004a9ca0 1
void __thiscall rb_004a9ca0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)((int)this + 0x68)) {
    do {
      if (param_1 != 0) {
        *(uint *)(*(int *)((int)this + 100) + 4 + iVar1 * 8) =
             *(uint *)(*(int *)((int)this + 100) + 4 + iVar1 * 8) & 0xff5c0fff;
      }
      FUN_004a9b90(this,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)((int)this + 0x68));
  }
  for (iVar1 = FUN_004fbe60((void *)((int)this + 0x1c),0,1); iVar1 != 0;
      iVar1 = FUN_004fbe60((void *)((int)this + 0x1c),iVar1,1)) {
    FUN_0050d770(iVar1);
  }
  return;
}
