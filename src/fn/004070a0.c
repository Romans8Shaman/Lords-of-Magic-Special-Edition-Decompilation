/* Rebuilt from lomse.exe FUN_004070a0 @ 0x004070a0 (188 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_004219a0 ((int (__fastcall *)(int))0x004219a0)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)

#define LOM_SELF_004070a0 1
int __thiscall rb_004070a0(void *this,int param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_8;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
  
  iVar1 = *(int *)((int)this + 0x34);
  iVar6 = *(int *)((int)this + 0x40);
  iVar5 = -1;
  local_8 = -1;
  if ((param_1 < 0) || (0xf < param_1)) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = &DAT_005af194 + param_1 * 0x1d84;
  }
  if (puVar2 == (undefined *)0x0) {
    return -1;
  }
  if (puVar2 == (undefined *)0xffffea20) {
    return -1;
  }
  for (; iVar6 <= iVar1; iVar6 = iVar6 + 1) {
    iVar3 = FUN_004f6000(&DAT_005ae974,iVar6);
    if ((((iVar3 != 0) && (*(int *)(iVar3 + 4) == 0)) && (iVar4 = FUN_00407d50(iVar3), iVar4 == 0))
       && ((*(int *)(iVar3 + 0x48) == param_1 && (iVar3 = FUN_004219a0(iVar3), iVar5 < iVar3)))) {
      iVar5 = iVar3;
      local_8 = iVar6;
    }
  }
  return local_8;
#undef local_8
}
