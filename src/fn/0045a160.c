/* Rebuilt from lomse.exe FUN_0045a160 @ 0x0045a160 (74 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0045a360 ((undefined4 (__cdecl *)(int *, int *, char))0x0045a360)

#define LOM_SELF_0045a160 1
void __cdecl rb_0045a160(int volatile param_1, int volatile param_2, undefined4 volatile param_3, int *volatile param_4, int *volatile param_5)

{
  param_1 = param_1 * 2;
  param_2 = 2 - param_2;
  FUN_0045a360(&param_1,&param_2,(char)param_3);
  *param_4 = *param_4 + param_1;
  *param_5 = *param_5 - param_2;
  return;
}
