/* Rebuilt from lomse.exe FUN_00473930 @ 0x00473930 (66 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00471540 ((undefined4 (__thiscall *)(void *, int *))0x00471540)
#define FUN_00476010 ((bool (__thiscall *)(void *, int, int, int, int))0x00476010)

#define LOM_SELF_00473930 1
void __fastcall rb_00473930(int param_1)

{
  int *piVar1;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_10[4];
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
  
  *(undefined4 *)(param_1 + 0x38) = 3;
  piVar1 = (int *)FUN_00471540((void *)(param_1 + 0x70),local_10);
  FUN_00476010((void *)(param_1 + 0xc),*piVar1,piVar1[1],piVar1[2],piVar1[3]);
  return;
#undef local_10
}
