/* Rebuilt from lomse.exe FUN_0043be20 @ 0x0043be20 (18 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd310 (*(undefined *)0x005cd310)
#define FUN_0043c2b0 ((int (__thiscall *)(void *, int))0x0043c2b0)

#define LOM_SELF_0043be20 1
int __fastcall rb_0043be20(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0043c2b0(&DAT_005cd310,*(int *)(param_1 + 0x90));
  return iVar1;
}
