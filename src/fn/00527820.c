/* Rebuilt from lomse.exe FUN_00527820 @ 0x00527820 (56 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd18c (*(undefined *)0x005cd18c)
#define FUN_005274b0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x005274b0)
#define FUN_0052b540 ((int * (__thiscall *)(void *, int))0x0052b540)

#define LOM_SELF_00527820 1
undefined4 __thiscall rb_00527820(void *this,undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_005274b0(this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = FUN_0052b540(&DAT_005cd18c,*(int *)((int)this + 0x20));
  if (piVar2 != (int *)0x0) {
    piVar2[1] = (int)param_1;
  }
  return 1;
}
