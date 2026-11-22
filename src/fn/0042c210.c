/* Rebuilt from lomse.exe FUN_0042c210 @ 0x0042c210 (70 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00427b80 ((undefined4 (__cdecl *)(int))0x00427b80)
#define FUN_00428190 ((undefined4 (__thiscall *)(void *, undefined4, undefined4, uint, int *))0x00428190)

#define LOM_SELF_0042c210 1
void __thiscall rb_0042c210(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int *this_00;
  int iVar2;
  
  piVar1 = *(int **)((int)this + 0x1c);
  while (this_00 = piVar1, this_00 != (int *)0x0) {
    piVar1 = (int *)this_00[5];
    if ((*(byte *)(this_00 + 4) & 0x1f) != 0) {
      iVar2 = FUN_00427b80(*this_00);
      FUN_00428190(this_00,param_1,param_2,*(uint *)(iVar2 + 100),*(int **)(iVar2 + 0x68));
    }
  }
  return;
}
