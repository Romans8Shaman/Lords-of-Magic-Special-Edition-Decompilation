/* Rebuilt from lomse.exe FUN_0043de80 @ 0x0043de80 (96 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae98c (*(int *)0x005ae98c)
#define DAT_005ae998 (*(int *)0x005ae998)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)

#define LOM_SELF_0043de80 1
undefined4 __thiscall rb_0043de80(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = DAT_005ae98c;
  iVar3 = DAT_005ae998;
  if (DAT_005ae98c < DAT_005ae998) {
    return 0xffffffff;
  }
  while (((uVar2 = FUN_00482ac0(&DAT_005aa12c,iVar3,2), uVar2 == 0 ||
          (*(int *)(uVar2 + 0x80) != *(int *)((int)this + 0x28))) ||
         (*(int *)(uVar2 + 0x58) != param_1))) {
    iVar3 = iVar3 + 1;
    if (iVar1 < iVar3) {
      return 0xffffffff;
    }
  }
  return *(undefined4 *)(uVar2 + 0x28);
}
