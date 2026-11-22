/* Rebuilt from lomse.exe FUN_0053cd70 @ 0x0053cd70 (53 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py; HAND 2026-11-12: _commit call target 00544740 declared. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053cdb0 ((undefined4 (__cdecl *)(int *))0x0053cdb0)
#define FUN_00544740 ((int (__cdecl *)(int))0x00544740) /* CRT _commit (inside raw CRT range 00544720) */

#define LOM_SELF_0053cd70 1
int __cdecl rb_0053cd70(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0053cdb0(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((param_1[3] & 0x4000U) == 0) {
    return 0;
  }
  iVar1 = FUN_00544740(param_1[4]);
  return -(uint)(iVar1 != 0);
}
