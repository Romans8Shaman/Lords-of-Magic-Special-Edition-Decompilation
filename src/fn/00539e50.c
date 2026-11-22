/* Rebuilt from lomse.exe FUN_00539e50 @ 0x00539e50 (21 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00539dc0 ((int (__cdecl *)(int))0x00539dc0)

#define LOM_SELF_00539e50 1
int __cdecl rb_00539e50(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00539dc0(param_1);
  return (iVar1 != 0) - 1;
}
