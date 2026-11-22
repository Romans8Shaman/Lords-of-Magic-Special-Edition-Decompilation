/* Rebuilt from lomse.exe FUN_0053cae0 @ 0x0053cae0 (101 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053c770 ((undefined1 * (__cdecl *)(uint *, undefined1 *, int, int))0x0053c770)
#define FUN_0053c8f0 ((char * (__cdecl *)(uint *, char *, uint))0x0053c8f0)
#define FUN_0053ca20 ((undefined4 (__cdecl *)(uint *, char *, uint, int))0x0053ca20)

#define LOM_SELF_0053cae0 1
void __cdecl rb_0053cae0(uint *param_1,char *param_2,int param_3,uint param_4,int param_5)

{
  if ((param_3 == 0x65) || (param_3 == 0x45)) {
    FUN_0053c770(param_1,param_2,param_4,param_5);
    return;
  }
  if (param_3 == 0x66) {
    FUN_0053c8f0(param_1,param_2,param_4);
    return;
  }
  FUN_0053ca20(param_1,param_2,param_4,param_5);
  return;
}
