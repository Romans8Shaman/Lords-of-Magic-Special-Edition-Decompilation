/* Rebuilt from lomse.exe FUN_0053c210 @ 0x0053c210 (68 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053c260 ((int * (__cdecl *)(int))0x0053c260)
#define FUN_00543140 ((undefined4 (__cdecl *)(undefined4))0x00543140)

#define LOM_SELF_0053c210 1
int * __cdecl rb_0053c210(uint param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 < 0xffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      if (param_1 < 0xffffffe1) {
        piVar1 = FUN_0053c260(param_1);
      }
      else {
        piVar1 = (int *)0x0;
      }
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
      if (param_2 == 0) {
        return (int *)0x0;
      }
      iVar2 = FUN_00543140(param_1);
    } while (iVar2 != 0);
  }
  return (int *)0x0;
}
