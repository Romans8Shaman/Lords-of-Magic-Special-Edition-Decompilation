/* Rebuilt from lomse.exe FUN_004b2df0 @ 0x004b2df0 (95 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a9e10 (*(undefined *)0x005a9e10)
#define FUN_00471540 ((undefined4 (__thiscall *)(void *, int *))0x00471540)
#define FUN_00476010 ((bool (__thiscall *)(void *, int, int, int, int))0x00476010)
#define FUN_00495590 ((undefined4 (__fastcall *)(int *))0x00495590)
#define _DAT_00584cd0 (*(undefined4 *)0x00584cd0)

#define LOM_SELF_004b2df0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall rb_004b2df0(int param_1)

{
  int *piVar1;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_10[4];
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
  
  _DAT_00584cd0 = 1;
  *(undefined4 *)(param_1 + 0x5e4) = 0;
  FUN_00495590((int *)(param_1 + 0x4c0));
  piVar1 = (int *)FUN_00471540((void *)(param_1 + 0x4e0),local_10);
  FUN_00476010(&DAT_005a9e10,*piVar1,piVar1[1],piVar1[2],piVar1[3]);
  return;
#undef local_10
}
