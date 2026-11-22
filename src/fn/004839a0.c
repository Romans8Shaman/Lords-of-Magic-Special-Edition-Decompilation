/* Rebuilt from lomse.exe FUN_004839a0 @ 0x004839a0 (109 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00539660 ((uint (__cdecl *)(char *, uint, uint, int *))0x00539660)

#define LOM_SELF_004839a0 1
bool __stdcall rb_004839a0(int *param_1,char *param_2,char *param_3)

{
  uint uVar1;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef char _t_local_4[4];
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  local_4[0] = -0x5c;
  local_4[1] = '\0';
  local_4[2] = '\0';
  local_4[3] = '\0';
  uVar1 = FUN_00539660(local_4,4,1,param_1);
  if (uVar1 != 1) {
    return false;
  }
  uVar1 = FUN_00539660(param_2,0xa4,1,param_1);
  if (uVar1 == 1) {
    uVar1 = FUN_00539660(param_3,0x240,1,param_1);
    return (bool)('\x01' - (uVar1 != 1));
  }
  return false;
#undef local_4
}
