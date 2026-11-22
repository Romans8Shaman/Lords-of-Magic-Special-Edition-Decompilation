/* Rebuilt from lomse.exe FUN_004eb2a0 @ 0x004eb2a0 (80 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define _strncpy ((char * (__cdecl *)(char *, char *, size_t))0x0053a220)

#define LOM_SELF_004eb2a0 1
undefined4 __thiscall rb_004eb2a0(void *this,char *param_1,size_t param_2,undefined4 param_3)

{
  int iVar1;
  uchar _fr[0x208] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef char _t_local_200[512];
#define local_200 (*(_t_local_200 *)(_fr + 0x0))
  
  iVar1 = ((undefined4 (__cdecl *)(__typeof__(local_200), __typeof__(param_3)))(**(code **)((int)this + 0x54)))(local_200,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  _strncpy(param_1,local_200,param_2);
  return 1;
#undef local_200
}
