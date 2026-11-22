/* Rebuilt from lomse.exe FUN_004784f0 @ 0x004784f0 (116 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004784f0 1
int __fastcall rb_004784f0(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int * _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  bVar2 = false;
  iVar4 = 0;
  piVar5 = param_1;
  local_4 = param_1;
  while( true ) {
    piVar1 = (int *)*piVar5;
    if (piVar1 == (int *)0x0) goto LAB_0047854a;
    ((undefined4 (__stdcall *)(__typeof__(piVar1), __typeof__(&local_4)))(**(code **)(*piVar1 + 0x24)))(piVar1,&local_4);
    if (((uint)local_4 & 1) == 0) break;
    iVar4 = iVar4 + 1;
    piVar5 = piVar5 + 1;
    if (4 < iVar4) goto LAB_0047854f;
  }
  ((undefined4 (__stdcall *)(__typeof__((int *)param_1[iVar4])))(**(code **)(*(int *)param_1[iVar4] + 8)))((int *)param_1[iVar4]);
  param_1[iVar4] = 0;
  piVar5 = param_1 + iVar4 * 7 + 0x3c;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = -1;
    piVar5 = piVar5 + 1;
  }
LAB_0047854a:
  bVar2 = true;
LAB_0047854f:
  if (bVar2) {
    return iVar4;
  }
  return -1;
#undef local_4
}
