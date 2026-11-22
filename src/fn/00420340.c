/* Rebuilt from lomse.exe FUN_00420340 @ 0x00420340 (124 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_00420620 ((undefined4 (__fastcall *)(int))0x00420620)

#define LOM_SELF_00420340 1
undefined4 __thiscall rb_00420340(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 0x24);
  if (*(int *)((int)this + 0x18) < iVar3) {
    return 1;
  }
  while ((((iVar1 = *(int *)(*(int *)((int)this + 8) + iVar3 * 4), iVar1 == 0 ||
           (*(int *)(iVar1 + 4) != 0)) || (*(int *)(iVar1 + 0x48) != param_1)) ||
         ((((~*(uint *)(iVar1 + 0x30) & 0x100) == 0 || (iVar2 = FUN_00407d50(iVar1), iVar2 != 0)) ||
          ((iVar2 = FUN_00420620(iVar1), iVar2 != 0 || ((*(uint *)(iVar1 + 0x30) & 0x4000000) != 0))
          ))))) {
    iVar3 = iVar3 + 1;
    if (*(int *)((int)this + 0x18) < iVar3) {
      return 1;
    }
  }
  return 0;
}
