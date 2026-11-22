/* Rebuilt from lomse.exe FUN_004b7b90 @ 0x004b7b90 (42 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004b7bc0 ((undefined1 * (__thiscall *)(void *, int))0x004b7bc0)
#define _strncpy ((char * (__cdecl *)(char *, char *, size_t))0x0053a220)

#define LOM_SELF_004b7b90 1
void __thiscall rb_004b7b90(void *this,int param_1)

{
  char *_Source;
  size_t _Count;
  
  _Count = 0x1d;
  _Source = FUN_004b7bc0(this,param_1);
  _strncpy((char *)((int)this + 0xe0),_Source,_Count);
  *(undefined1 *)((int)this + 0xfd) = 0;
  return;
}
