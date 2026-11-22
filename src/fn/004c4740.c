/* Rebuilt from lomse.exe op_enumquests @ 0x004c4740 (104 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aeedc (*(undefined4 *)0x005aeedc)
#define FUN_004c4060 ((undefined4 (__thiscall *)(void *, uint, int *, void *))0x004c4060)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004c4740 1
void __cdecl rb_004c4740(void *vm)

{
  int iVar1;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int * _t_piStack_4;
#define piStack_4 (*(_t_piStack_4 *)(_fr + 0x4))
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    FUN_004c4060(&DAT_005aeedc,*(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8),
                 *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8),vm);
    return;
  }
  *(undefined4 *)((int)vm + 0x90) = 6;
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  FUN_004c4060(&DAT_005aeedc,0,piStack_4,vm);
  return;
#undef piStack_4
}
