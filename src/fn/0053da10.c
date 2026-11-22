/* Rebuilt from lomse.exe FUN_0053da10 @ 0x0053da10 (61 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053d980 ((undefined4 (__cdecl *)(uint, int *, int *))0x0053d980)

#define LOM_SELF_0053da10 1
void __cdecl rb_0053da10(char *param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  
  if (0 < param_2) {
    do {
      param_2 = param_2 + -1;
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      FUN_0053d980((int)cVar1,param_3,param_4);
      if (*param_4 == -1) {
        return;
      }
    } while (0 < param_2);
  }
  return;
}
