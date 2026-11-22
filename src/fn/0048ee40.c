/* Rebuilt from lomse.exe FUN_0048ee40 @ 0x0048ee40 (15 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_00492760 ((int (__thiscall *)(void *, int))0x00492760)

#define LOM_SELF_0048ee40 1
int __fastcall rb_0048ee40(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00492760(&DAT_005a7b50,*(int *)(param_1 + 8));
  return iVar1;
}
