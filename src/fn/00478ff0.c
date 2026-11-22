/* Rebuilt from lomse.exe FUN_00478ff0 @ 0x00478ff0 (91 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00478f60 ((undefined4 (__stdcall *)(int *))0x00478f60)
#define FUN_00479050 ((undefined4 (__stdcall *)(undefined4, int *))0x00479050)

#define LOM_SELF_00478ff0 1
void __fastcall rb_00478ff0(uint param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  iVar2 = 5;
  puVar4 = (undefined4 *)(param_1 + 0x6f8);
  piVar3 = (int *)(param_1 + 0xdc);
  local_4 = param_1;
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      ((undefined4 (__stdcall *)(__typeof__(piVar1), __typeof__(&local_4)))(**(code **)(*piVar1 + 0x24)))(piVar1,&local_4);
      if ((local_4 & 5) == 0) {
        FUN_00478f60((int *)*piVar3);
        FUN_00479050(puVar4 + -1,piVar3);
        *puVar4 = 0xffffffff;
      }
    }
    piVar3 = piVar3 + 1;
    puVar4 = puVar4 + 7;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
#undef local_4
}
