/* Rebuilt from lomse.exe FUN_0051c170 @ 0x0051c170 (111 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cc9d4 (*(int *)0x005cc9d4)
#define FUN_004102e0 ((int (__thiscall *)(void *, int *))0x004102e0)
#define FUN_00419460 ((uint (__fastcall *)(int))0x00419460)

#define LOM_SELF_0051c170 1
undefined4 __fastcall rb_0051c170(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int * _t_piStack_4;
#define piStack_4 (*(_t_piStack_4 *)(_fr + 0x4))
  
  iVar3 = DAT_005cc9d4;
  piStack_4 = param_1;
  iVar1 = ((undefined4 (__thiscall *)(__typeof__(param_1)))(**(code **)(*param_1 + 0x3c)))(param_1);
  if (iVar1 != iVar3) {
    return 0;
  }
  uVar2 = FUN_00419460((int)param_1);
  if (uVar2 != 0) {
    return 0;
  }
  if (-1 < param_1[0x14e]) {
    return 0;
  }
  if ((param_1[0xc] & 0x241082U) != 0) {
    return 0;
  }
  iVar3 = FUN_004102e0(param_1,(int *)&piStack_4);
  if ((iVar3 == 0) || ((*(byte *)(iVar3 + 0x10) & 1) != 0)) {
    return 1;
  }
  return 0;
#undef piStack_4
}
