/* Rebuilt from lomse.exe FUN_004b80a0 @ 0x004b80a0 (65 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define _strncpy ((char * (__cdecl *)(char *, char *, size_t))0x0053a220)

#define LOM_SELF_004b80a0 1
undefined4 __thiscall rb_004b80a0(void *this,char *param_1,int param_2)

{
  if ((*(int *)((int)this + 0xd4) == 0) || (param_2 != 0)) {
    _strncpy((char *)((int)this + 0x104),param_1,0x17);
    *(undefined1 *)((int)this + 0x11b) = 0;
    return 1;
  }
  return 0;
}
