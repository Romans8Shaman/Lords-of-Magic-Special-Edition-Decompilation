/* Rebuilt from lomse.exe op_setcitycombatscale @ 0x004e0e20 (204 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00505a30 ((undefined4 (__thiscall *)(void *, undefined4))0x00505a30)
#define _DAT_0054dd38 (*(double *)0x0054dd38)
#define s_failed_005729c8 (*(char (*)[])0x005729c8)

#define LOM_SELF_004e0e20 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rb_004e0e20(void *vm)

{
  void *this;
  int iVar1;
  uint uVar2;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef void * _t_pvStack_4;
#define pvStack_4 (*(_t_pvStack_4 *)(_fr + 0x4))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    pvStack_4 = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
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
    vm = __BC(void *, (float)(int)pvStack_4);
  }
  else if (uVar2 == 2) {
    vm = __BC(void *, ((float)(int)pvStack_4 * (float)_DAT_0054dd38));
  }
  else {
    if (uVar2 != 4) {
      *(undefined4 *)((int)vm + 0x90) = 0xe;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      return;
    }
    vm = pvStack_4;
  }
  iVar1 = FUN_00505a30(&DAT_00584ae8,vm);
  if (iVar1 == 0) {
    FUN_004d41c0(this,s_failed_005729c8);
  }
  return;
#undef pvStack_4
}
