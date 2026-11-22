/* Rebuilt from lomse.exe FUN_0053c1f0 @ 0x0053c1f0 (20 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d5558 (*(int *)0x005d5558)
#define FUN_0053c210 ((int * (__cdecl *)(uint, int))0x0053c210)

#define LOM_SELF_0053c1f0 1
int * __cdecl rb_0053c1f0(uint param_1)

{
  int *piVar1;
  
  piVar1 = FUN_0053c210(param_1,DAT_005d5558);
  return piVar1;
}
