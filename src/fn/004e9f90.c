/* Rebuilt from lomse.exe FUN_004e9f90 @ 0x004e9f90 (271 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_00492760 ((int (__thiscall *)(void *, int))0x00492760)

#define LOM_SELF_004e9f90 1
int __thiscall rb_004e9f90(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_c;
#define local_c (*(_t_local_c *)(_fr + 0x4))
  
  iVar1 = param_2 - *(int *)((int)this + 0x21c);
  iVar3 = param_1 - *(int *)((int)this + 0x218);
  param_1 = FUN_00492760(&DAT_005a7b50,*(int *)((int)this + 4));
  if (param_1 == 0) {
    param_1 = FUN_00492760(&DAT_005a7b50,*(int *)((int)this + 8));
  }
  if (param_1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xc);
  }
  local_c = 0;
  if (*(int *)((int)this + 0x20c) < 1) {
    return -1;
  }
  piVar4 = (int *)((int)this + 0xc);
  iVar5 = iVar2;
  while( true ) {
    if (param_1 == 0) {
      iVar2 = FUN_00492760(&DAT_005a7b50,piVar4[2]);
      if (iVar2 == 0) {
        iVar2 = 0;
        iVar5 = 0;
      }
      else {
        iVar2 = *(int *)(iVar2 + 0xc);
        iVar5 = iVar2;
      }
    }
    if ((((*piVar4 <= iVar3) && (piVar4[1] <= iVar1)) && (iVar3 <= *piVar4 + iVar2)) &&
       (iVar1 <= piVar4[1] + iVar5)) break;
    local_c = local_c + 1;
    piVar4 = piVar4 + 4;
    if (*(int *)((int)this + 0x20c) <= local_c) {
      return -1;
    }
  }
  return local_c;
#undef local_c
}
