/* Rebuilt from lomse.exe FUN_005395d0 @ 0x005395d0 (55 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053ccc0 ((undefined4 (__cdecl *)(uint))0x0053ccc0)
#define FUN_0053dab0 ((undefined4 * (__cdecl *)(LPCSTR, char *, uint, undefined4 *))0x0053dab0)
#define FUN_0053dc80 ((undefined4 * (__stdcall *)(void))0x0053dc80)

#define LOM_SELF_005395d0 1
undefined4 * __cdecl rb_005395d0(LPCSTR param_1,char *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = FUN_0053dc80();
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar2 = FUN_0053dab0(param_1,param_2,param_3,puVar1);
  FUN_0053ccc0((uint)puVar1);
  return puVar2;
}
