/* Rebuilt from lomse.exe op_getcitycombatscale @ 0x004e0ef0 (161 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00505a50 ((undefined4 (__thiscall *)(void *, undefined4 *))0x00505a50)
#define s_failed_005729c8 (*(char (*)[])0x005729c8)

#define LOM_SELF_004e0ef0 1
void __cdecl rb_004e0ef0(void *vm)

{
  int iVar1;
  int iVar2;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_auStack_c[2];
  typedef undefined4 _t_uStack_4;
#define auStack_c (*(_t_auStack_c *)(_fr + 0x4))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0xc))
  
  iVar1 = FUN_00505a50(&DAT_00584ae8,auStack_c);
  if (iVar1 == 0) {
    FUN_004d41c0(vm,s_failed_005729c8);
    if (*(int *)((int)vm + 0x54) != 0) {
      iVar2 = *(int *)((int)vm + 0x54) + -1;
      *(int *)((int)vm + 0x54) = iVar2;
      iVar1 = *(int *)((int)vm + 0x50);
      *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0;
      return;
    }
  }
  else {
    uStack_4 = auStack_c[0];
    if (*(int *)((int)vm + 0x54) != 0) {
      iVar1 = *(int *)((int)vm + 0x50);
      iVar2 = *(int *)((int)vm + 0x54) + -1;
      *(int *)((int)vm + 0x54) = iVar2;
      *(undefined4 *)(iVar1 + iVar2 * 8) = 4;
      *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = auStack_c[0];
      return;
    }
  }
  *(undefined4 *)((int)vm + 0x90) = 3;
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
#undef auStack_c
#undef uStack_4
}
