/* Rebuilt from lomse.exe FUN_00539ac0 @ 0x00539ac0 (42 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053e4c0 ((undefined4 (__cdecl *)(PEXCEPTION_RECORD, PVOID, DWORD, undefined4, int *, int, PVOID, char))0x0053e4c0)

#define LOM_SELF_00539ac0 1
void __cdecl rb_00539ac0(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3)

{
  FUN_0053e4c0(param_1,*(PVOID *)((int)param_2 + 0xc),param_3,0,*(int **)((int)param_2 + 8),
               *(int *)((int)param_2 + 0x10),param_2,'\0');
  return;
}
