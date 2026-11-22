/* Rebuilt from lomse.exe __allmul @ 0x00541de0 (52 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define __allmul ((longlong (__stdcall *)(uint, int, uint, int))0x00541de0)

#define LOM_SELF_00541de0 1
/* Library Function - Single Match
    __allmul
   
   Library: Visual Studio */

longlong __stdcall rb_00541de0(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
                  param_2 * param_3 + param_1 * param_4,
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}
