/* Rebuilt from lomse.exe FUN_00477910 @ 0x00477910 (157 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00494a50 ((undefined4 (__thiscall *)(void *, uint, uint, uint, uint, uint))0x00494a50)
#define FUN_00494e60 ((undefined4 (__thiscall *)(void *, int, int, int, int, uint))0x00494e60)

#define LOM_SELF_00477910 1
void __thiscall rb_00477910(void *this,void *param_1,uint param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  iVar3 = 0;
  local_4 = 0;
  if (0 < *(int *)this) {
    do {
      piVar2 = (int *)(*(int *)((int)this + 0x10) + iVar3);
      FUN_00494e60(param_1,*piVar2,piVar2[1],piVar2[2],piVar2[3],param_2);
      puVar1 = (uint *)(*(int *)((int)this + 0x10) + iVar3);
      FUN_00494a50(param_1,*puVar1,puVar1[1],puVar1[2],
                   *(uint *)(*(int *)((int)this + 0x10) + 0xc + iVar3),param_2);
      puVar1 = (uint *)(*(int *)((int)this + 0x10) + iVar3);
      FUN_00494a50(param_1,puVar1[2],puVar1[1],*puVar1,
                   *(uint *)(*(int *)((int)this + 0x10) + 0xc + iVar3),param_2);
      local_4 = local_4 + 1;
      iVar3 = iVar3 + 0x10;
    } while (local_4 < *(int *)this);
  }
  return;
#undef local_4
}
