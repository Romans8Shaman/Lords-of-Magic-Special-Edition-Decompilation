/* Rebuilt from lomse.exe FUN_00478b80 @ 0x00478b80 (118 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00478570 ((undefined4 (__thiscall *)(void *, undefined4, undefined4 *))0x00478570)

#define LOM_SELF_00478b80 1
undefined4 __thiscall rb_00478b80(void *this,int in_stack_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if (*(int *)((int)this + 0x13b4) != 0) {
    piVar2 = (int *)((int)this + 0x180);
    iVar1 = 0;
    piVar4 = piVar2;
    do {
      if (*piVar4 == in_stack_4) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      piVar4 = piVar4 + 7;
    } while (iVar1 < 0x32);
    iVar1 = 0;
    while (*piVar2 != -1) {
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 7;
      if (0x31 < iVar1) {
        return 0;
      }
    }
    iVar3 = FUN_00478570(this,in_stack_4,(undefined4 *)((int)this + iVar1 * 4 + 0x14));
    if (iVar3 != 0) {
      *(int *)((int)this + iVar1 * 0x1c + 0x180) = in_stack_4;
      return 1;
    }
  }
  return 0;
}
