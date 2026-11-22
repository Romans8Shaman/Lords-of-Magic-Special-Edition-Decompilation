/* Rebuilt from lomse.exe FUN_004b7c20 @ 0x004b7c20 (85 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define _strncpy ((char * (__cdecl *)(char *, char *, size_t))0x0053a220)

#define LOM_SELF_004b7c20 1
bool __thiscall rb_004b7c20(void *this,char *param_1)

{
  int iVar1;
  
  _strncpy((char *)((int)this + *(int *)((int)this + 0x2c8) * 0x32 + 0x134),param_1,0x30);
  *(undefined1 *)((int)this + *(int *)((int)this + 0x2c8) * 0x32 + 0x164) = 0;
  iVar1 = *(int *)((int)this + 0x2c8) + 1;
  *(int *)((int)this + 0x2c8) = iVar1;
  return iVar1 < 7;
}
