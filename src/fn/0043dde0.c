/* Rebuilt from lomse.exe FUN_0043dde0 @ 0x0043dde0 (100 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae98c (*(int *)0x005ae98c)
#define DAT_005ae998 (*(int *)0x005ae998)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)

#define LOM_SELF_0043dde0 1
undefined4 __thiscall rb_0043dde0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_005ae98c;
  iVar3 = DAT_005ae998;
  if (DAT_005ae98c < DAT_005ae998) {
    return 0xffffffff;
  }
  while ((((iVar2 = FUN_004f6000(&DAT_005ae974,iVar3), iVar2 == 0 || (*(int *)(iVar2 + 4) != 2)) ||
          (*(int *)(iVar2 + 0x80) != *(int *)((int)this + 0x28))) ||
         (*(int *)(iVar2 + 0x58) != param_1))) {
    iVar3 = iVar3 + 1;
    if (iVar1 < iVar3) {
      return 0xffffffff;
    }
  }
  return *(undefined4 *)(iVar2 + 0x28);
}
