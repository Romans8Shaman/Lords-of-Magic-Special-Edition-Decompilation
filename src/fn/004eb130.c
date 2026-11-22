/* Rebuilt from lomse.exe FUN_004eb130 @ 0x004eb130 (62 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004eb130 1
undefined4 __fastcall rb_004eb130(int *param_1)

{
  int iVar1;
  
  if ((param_1[9] == 0) || (param_1[1] == 0)) {
    return 0;
  }
  if ((code *)param_1[0x10] != (code *)0x0) {
    iVar1 = ((undefined4 (__thiscall *)(void *))(*(code *)param_1[0x10]))((void *)param_1); /* ECX unchanged = param_1 */
    if (iVar1 == 1) {
      *param_1 = 1;
      return 1;
    }
    if (*param_1 != 0) {
      *param_1 = 0;
    }
  }
  return 0;
}
