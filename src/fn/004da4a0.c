/* Rebuilt from lomse.exe op_setelevationbrush @ 0x004da4a0 (194 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d98 (*(undefined *)0x005a7d98)
#define DAT_005a7d9c (*(undefined *)0x005a7d9c)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define _DAT_0054dd38 (*(double *)0x0054dd38)

#define LOM_SELF_004da4a0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rb_004da4a0(void *vm)

{
  int iVar1;
  uint uVar2;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_4;
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0x4))
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar2 = 0;
  }
  uVar2 = uVar2 & 0xff;
  if (uVar2 == 1) {
    fStack_4 = (float)__BC(int, fStack_4);
  }
  else if (uVar2 == 2) {
    fStack_4 = (float)__BC(int, fStack_4) * (float)_DAT_0054dd38;
  }
  else if (uVar2 != 4) {
    *(undefined4 *)((int)vm + 0x90) = 0xe;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    return;
  }
  *(undefined4 *)(&DAT_005a7d98 + DAT_005a7d8c * 0x400) = 1;
  *(float *)(&DAT_005a7d9c + DAT_005a7d8c * 0x400) = fStack_4;
  return;
#undef fStack_4
}
