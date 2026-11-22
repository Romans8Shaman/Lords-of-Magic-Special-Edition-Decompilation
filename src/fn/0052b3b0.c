/* Rebuilt from lomse.exe FUN_0052b3b0 @ 0x0052b3b0 (189 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00539660 ((uint (__cdecl *)(char *, uint, uint, int *))0x00539660)

#define LOM_SELF_0052b3b0 1
undefined4 __thiscall rb_0052b3b0(void *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_8;
  typedef uint _t_local_4;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  local_8 = 0;
  for (iVar1 = *(int *)this; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
    local_8 = local_8 + 1;
  }
  local_4 = 0xc;
  uVar2 = FUN_00539660((char *)&local_8,4,1,param_1);
  if (uVar2 != 1) {
    return 0;
  }
  uVar2 = FUN_00539660((char *)&local_4,4,1,param_1);
  if (uVar2 != 1) {
    return 0;
  }
  if ((local_8 < 1) || (pcVar3 = *(char **)this, pcVar3 == (char *)0x0)) {
    return 1;
  }
  do {
    uVar2 = FUN_00539660(pcVar3,local_4,1,param_1);
    if (uVar2 != 1) {
      return 0;
    }
    pcVar3 = *(char **)(pcVar3 + 0xc);
  } while (pcVar3 != (char *)0x0);
  return 1;
#undef local_8
#undef local_4
}
