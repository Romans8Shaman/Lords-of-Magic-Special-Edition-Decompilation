/* Rebuilt from lomse.exe op_setfoodbartervalueproc @ 0x00434ae0 (100 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00578a68 (*(undefined4 *)0x00578a68)
#define DAT_00578a6c (*(undefined4 *)0x00578a6c)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_00434ae0 1
void __cdecl rb_00434ae0(void *vm)

{
  int iVar1;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_uStack_4;
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x4))
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    DAT_00578a68 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    DAT_00578a6c = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
    return;
  }
  *(undefined4 *)((int)vm + 0x90) = 6;
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  DAT_00578a68 = 0;
  DAT_00578a6c = uStack_4;
  return;
#undef uStack_4
}
