/* Rebuilt from lomse.exe FUN_00486c50 @ 0x00486c50 (214 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00486b40 ((undefined4 (__fastcall *)(undefined4 *))0x00486b40)
#define op_sunlight ((undefined4 (__stdcall *)(void))0x0051bc30)

#define LOM_SELF_00486c50 1
int __thiscall rb_00486c50(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_18;
  typedef undefined4 _t_local_14;
  typedef undefined4 _t_local_10;
#define local_18 (*(_t_local_18 *)(_fr + 0x0))
#define local_14 (*(_t_local_14 *)(_fr + 0x4))
#define local_10 (*(_t_local_10 *)(_fr + 0x8))

  FUN_00486b40(&local_18);
  iVar2 = *(int *)((int)this + 4);
  if (*(int *)this <= iVar2) {
    op_sunlight();
    return -1;
  }
  if (*(int *)((int)this + 8) == 0) {
    op_sunlight();
    return -1;
  }
  local_18 = param_1;
  local_14 = 1;
  puVar1 = (undefined4 *)(*(int *)((int)this + 8) + iVar2 * 0xc);
  *puVar1 = param_1;
  puVar1[1] = 1;
  puVar1[2] = local_10;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  op_sunlight();
  return iVar2;
#undef local_18
#undef local_14
#undef local_10
}
