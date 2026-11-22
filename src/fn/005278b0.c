/* Rebuilt from lomse.exe FUN_005278b0 @ 0x005278b0 (30 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd18c (*(undefined *)0x005cd18c)
#define FUN_0052b540 ((int * (__thiscall *)(void *, int))0x0052b540)

#define LOM_SELF_005278b0 1
int __fastcall rb_005278b0(int *param_1)

{
  int *piVar1;
  
  piVar1 = FUN_0052b540(&DAT_005cd18c,param_1[8]);
  if (piVar1 == (int *)0x0) {
    return *param_1;
  }
  return piVar1[1];
}
