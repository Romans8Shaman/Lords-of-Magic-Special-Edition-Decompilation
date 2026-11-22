/* Rebuilt from lomse.exe FUN_004a6f60 @ 0x004a6f60 (137 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004a4c50 ((uint (__thiscall *)(void *, int))0x004a4c50)
#define FUN_004a8960 ((int (__thiscall *)(void *, int, int))0x004a8960)

#define LOM_SELF_004a6f60 1
int __thiscall rb_004a6f60(void *this,int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  iVar3 = 99999;
  local_4 = -1;
  uVar1 = FUN_004a4c50(this,param_1);
  if (((param_2 & uVar1) != 0) && (*(int *)(*(int *)((int)this + 100) + param_1 * 8) == 0)) {
    return param_1;
  }
  iVar4 = 0;
  if (0 < *(int *)((int)this + 0x68)) {
    do {
      if (((*(int *)(*(int *)((int)this + 100) + iVar4 * 8) == 0) &&
          (uVar1 = FUN_004a4c50(this,iVar4), (param_2 & uVar1) != 0)) &&
         (iVar2 = FUN_004a8960(this,param_1,iVar4), iVar2 < iVar3)) {
        iVar3 = iVar2;
        local_4 = iVar4;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((int)this + 0x68));
  }
  return local_4;
#undef local_4
}
