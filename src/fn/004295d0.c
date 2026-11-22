/* Rebuilt from lomse.exe FUN_004295d0 @ 0x004295d0 (69 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00429150 ((undefined4 (__thiscall *)(void *, int, int, int, int, int))0x00429150)
#define FUN_00429380 ((undefined4 (__thiscall *)(void *, int, int, int, int, int))0x00429380)

#define LOM_SELF_004295d0 1
undefined4 __thiscall rb_004295d0(void *this,int *param_1)

{
  int iVar1;
  
  if (param_1[5] == 0) {
    iVar1 = FUN_00429150(this,*param_1,param_1[1],param_1[2],param_1[3],param_1[4]);
    if (iVar1 != 0) {
      return 1;
    }
  }
  else {
    iVar1 = FUN_00429380(this,*param_1,param_1[1],param_1[2],param_1[3],param_1[4]);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}
