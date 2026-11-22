/* Rebuilt from lomse.exe FUN_00497aa0 @ 0x00497aa0 (32 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define _strncpy ((char * (__cdecl *)(char *, char *, size_t))0x0053a220)

#define LOM_SELF_00497aa0 1
void __thiscall rb_00497aa0(void *this,char *param_1,size_t param_2)

{
  if ((0 < (int)param_2) && (*(char **)this != (char *)0x0)) {
    _strncpy(param_1,*(char **)this,param_2);
  }
  return;
}
