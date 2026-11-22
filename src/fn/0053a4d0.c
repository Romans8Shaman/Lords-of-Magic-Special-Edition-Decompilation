/* Rebuilt from lomse.exe FUN_0053a4d0 @ 0x0053a4d0 (89 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053a530 ((undefined4 (__cdecl *)(undefined1 *, undefined1 *, int))0x0053a530)

#define LOM_SELF_0053a4d0 1
void __cdecl rb_0053a4d0(undefined1 *param_1,undefined1 *param_2,int param_3,undefined *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  
  for (; puVar2 = param_1, puVar1 = param_1, param_1 < param_2; param_2 = param_2 + -param_3) {
    while (puVar1 = puVar1 + param_3, puVar1 <= param_2) {
      iVar3 = ((undefined4 (__cdecl *)(__typeof__(puVar1), __typeof__(puVar2)))(*(code *)param_4))(puVar1,puVar2);
      if (0 < iVar3) {
        puVar2 = puVar1;
      }
    }
    FUN_0053a530(puVar2,param_2,param_3);
  }
  return;
}
