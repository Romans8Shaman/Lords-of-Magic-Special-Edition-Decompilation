/* Rebuilt from lomse.exe FUN_00432b30 @ 0x00432b30 (142 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00432b30 1
undefined4 __cdecl rb_00432b30(uint param_1,int *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  
  iVar1 = (int)param_1 >> 0x18;
  *param_2 = iVar1;
  if ((iVar1 < 0) || (0xb < iVar1)) {
    return 0;
  }
  *param_3 = param_1 & 0xffff;
  iVar1 = *param_2;
  if (iVar1 == 0) {
    *param_4 = 0;
    *param_3 = 0;
    *param_5 = 0;
    return 1;
  }
  if ((iVar1 < 1) || (4 < iVar1)) {
    *param_4 = param_1 & 0xffff;
    *param_3 = 1;
    *param_5 = param_1 >> 0x10 & 0xff;
    return 1;
  }
  *param_4 = 0;
  *param_5 = 0;
  return 1;
}
