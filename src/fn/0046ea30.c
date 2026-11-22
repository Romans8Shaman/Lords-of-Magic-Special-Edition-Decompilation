/* Rebuilt from lomse.exe FUN_0046ea30 @ 0x0046ea30 (245 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0046ea10 ((undefined4 (__cdecl *)(undefined4 *, undefined4 *))0x0046ea10)

#define LOM_SELF_0046ea30 1
undefined4 __thiscall rb_0046ea30(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((((-1 < param_1) && (param_1 < *(int *)((int)this + 0xc))) && (-1 < param_2)) &&
     (param_2 < *(int *)((int)this + 0xc))) {
    iVar1 = *(int *)((int)this + 4);
    iVar2 = param_2 * 0x30;
    iVar3 = param_1 * 0x30;
    if (*(int *)(iVar3 + 0x10 + iVar1) == *(int *)(iVar1 + 0x10 + iVar2)) {
      FUN_0046ea10((undefined4 *)(iVar3 + 0x10 + iVar1),(undefined4 *)(iVar1 + 0x10 + iVar2));
      FUN_0046ea10((undefined4 *)(iVar3 + 0x14 + *(int *)((int)this + 4)),
                   (undefined4 *)(*(int *)((int)this + 4) + 0x14 + iVar2));
      FUN_0046ea10((undefined4 *)(iVar3 + 0x18 + *(int *)((int)this + 4)),
                   (undefined4 *)(*(int *)((int)this + 4) + 0x18 + iVar2));
      FUN_0046ea10((undefined4 *)(iVar3 + 0x1c + *(int *)((int)this + 4)),
                   (undefined4 *)(*(int *)((int)this + 4) + 0x1c + iVar2));
      FUN_0046ea10((undefined4 *)(iVar3 + 0x20 + *(int *)((int)this + 4)),
                   (undefined4 *)(*(int *)((int)this + 4) + 0x20 + iVar2));
      FUN_0046ea10((undefined4 *)(iVar3 + 0x24 + *(int *)((int)this + 4)),
                   (undefined4 *)(*(int *)((int)this + 4) + 0x24 + iVar2));
      FUN_0046ea10((undefined4 *)(iVar3 + 0x28 + *(int *)((int)this + 4)),
                   (undefined4 *)(*(int *)((int)this + 4) + 0x28 + iVar2));
      return 1;
    }
  }
  return 0;
}
