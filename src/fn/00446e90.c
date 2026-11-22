/* Rebuilt from lomse.exe FUN_00446e90 @ 0x00446e90 (22 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00446be0 ((undefined4 (__thiscall *)(void *, int *))0x00446be0)

#define LOM_SELF_00446e90 1
void __fastcall rb_00446e90(void *param_1)

{
  undefined4 *puVar1;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef void * _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  local_4 = param_1;
  puVar1 = (undefined4 *)FUN_00446be0(param_1,(int *)&local_4);
  *(undefined4 *)((int)param_1 + 0x44) = *puVar1;
  return;
#undef local_4
}
