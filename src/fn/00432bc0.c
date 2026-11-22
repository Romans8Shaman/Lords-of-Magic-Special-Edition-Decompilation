/* Rebuilt from lomse.exe FUN_00432bc0 @ 0x00432bc0 (26 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00432bc0 1
int __fastcall rb_00432bc0(short *param_1)

{
  char cVar1;
  
  cVar1 = (char)param_1[2];
  if (cVar1 == '\0') {
    return 0;
  }
  if ((cVar1 < '\x01') || ('\x04' < cVar1)) {
    return 1;
  }
  return (int)*param_1;
}
