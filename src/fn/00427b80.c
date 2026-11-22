/* Rebuilt from lomse.exe FUN_00427b80 @ 0x00427b80 (16 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd340 (*(undefined *)0x005cd340)
#define FUN_00427d10 ((int (__thiscall *)(void *, int))0x00427d10)

#define LOM_SELF_00427b80 1
int __cdecl rb_00427b80(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00427d10(&DAT_005cd340,param_1);
  return iVar1;
}
