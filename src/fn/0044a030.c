/* Rebuilt from lomse.exe FUN_0044a030 @ 0x0044a030 (28 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define _strncpy ((char * (__cdecl *)(char *, char *, size_t))0x0053a220)

#define LOM_SELF_0044a030 1
void __thiscall rb_0044a030(void *this,char *param_1)

{
  _strncpy((char *)((int)this + 0x41c),param_1,0x80);
  return;
}
