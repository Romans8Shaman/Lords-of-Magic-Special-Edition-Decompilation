/* Rebuilt from lomse.exe FUN_004b2820 @ 0x004b2820 (143 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a9e10 (*(undefined *)0x005a9e10)
#define FUN_00471540 ((undefined4 (__thiscall *)(void *, int *))0x00471540)
#define FUN_00476010 ((bool (__thiscall *)(void *, int, int, int, int))0x00476010)
#define FUN_00495590 ((undefined4 (__fastcall *)(int *))0x00495590)

#define LOM_SELF_004b2820 1
void __fastcall rb_004b2820(undefined4 *param_1)

{
  int *piVar1;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_10[4];
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
  
  FUN_00495590(param_1 + 2);
  FUN_00495590(param_1 + 0x1a);
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)FUN_00471540(param_1 + 10,local_10);
  FUN_00476010(&DAT_005a9e10,*piVar1,piVar1[1],piVar1[2],piVar1[3]);
  piVar1 = (int *)FUN_00471540(param_1 + 0x22,local_10);
  FUN_00476010(&DAT_005a9e10,*piVar1,piVar1[1],piVar1[2],piVar1[3]);
  return;
#undef local_10
}
