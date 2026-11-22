/* Rebuilt from lomse.exe op_barteraccept @ 0x004324f0 (106 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584cd4 (*(undefined4 *)0x00584cd4)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define FUN_00431a10 ((undefined4 (__stdcall *)(undefined4 *))0x00431a10)
#define FUN_00432200 ((undefined4 (__thiscall *)(void *, int))0x00432200)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define s_command_failed_00555ff0 (*(char (*)[])0x00555ff0)

#define LOM_SELF_004324f0 1
void __cdecl rb_004324f0(void *vm)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uchar _fr[0x88] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_auStack_7c[31];
#define auStack_7c (*(_t_auStack_7c *)(_fr + 0x4))
  
  iVar1 = *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400);
  puVar3 = &DAT_00584cd4;
  puVar4 = auStack_7c;
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar1 = FUN_00432200(&DAT_00584cd4,iVar1);
  if (iVar1 == 0) {
    FUN_004d41c0(vm,s_command_failed_00555ff0);
  }
  else {
    FUN_00431a10(&DAT_00584cd4);
  }
  puVar3 = auStack_7c;
  puVar4 = &DAT_00584cd4;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return;
#undef auStack_7c
}
