/* Rebuilt from lomse.exe FUN_004c0400 @ 0x004c0400 (88 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define _strncpy ((char * (__cdecl *)(char *, char *, size_t))0x0053a220)

#define LOM_SELF_004c0400 1
undefined4 __thiscall rb_004c0400(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 < 0) || (0xf < iVar1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)this + iVar1 * 0x1d84 + 0x5068;
  }
  if (iVar1 == 0) {
    return 0;
  }
  _strncpy((char *)(iVar1 + 0x44),(char *)(param_1 + 1),0x1e);
  *(undefined1 *)(iVar1 + 0x62) = 0;
  return 1;
}
