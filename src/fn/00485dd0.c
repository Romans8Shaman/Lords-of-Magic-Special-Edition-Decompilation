/* Rebuilt from lomse.exe op_setdifficultylevel @ 0x00485dd0 (181 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005af0f4 (*(void * *)0x005af0f4)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_invalid_difficulty_level_0055b46c (*(char (*)[])0x0055b46c)

#define LOM_SELF_00485dd0 1
void __cdecl rb_00485dd0(void *vm)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef void * _t_pvStack_4;
#define pvStack_4 (*(_t_pvStack_4 *)(_fr + 0x4))
  
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
  if (uVar2 != 1) {
    if (uVar2 == 2) {
      pvStack_4 = (void *)((int)pvStack_4 >> 8);
    }
    else if (uVar2 == 4) {
      lVar3 = __ftol((float10)__BC(float, pvStack_4));
      pvStack_4 = (void *)lVar3;
    }
    else {
      *(undefined4 *)((int)vm + 0x90) = 0xe;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      pvStack_4 = vm;
    }
  }
  if (((int)pvStack_4 < 0) || (2 < (int)pvStack_4)) {
    FUN_004d41c0(vm,s_invalid_difficulty_level_0055b46c);
    return;
  }
  DAT_005af0f4 = pvStack_4;
  return;
#undef pvStack_4
}
