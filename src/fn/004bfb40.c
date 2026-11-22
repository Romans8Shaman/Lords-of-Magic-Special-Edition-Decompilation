/* Rebuilt from lomse.exe op_predictresources @ 0x004bfb40 (209 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004bde30 ((undefined4 (__fastcall *)(int))0x004bde30)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_no_such_player_0055b488 (*(char (*)[])0x0055b488)

#define LOM_SELF_004bfb40 1
void __cdecl rb_004bfb40(void *vm)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  longlong lVar4;
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
  if (uVar2 != 1) {
    if (uVar2 == 2) {
      fStack_4 = __BC(float, (__BC(int, fStack_4) >> 8));
    }
    else {
      if (uVar2 != 4) {
        FUN_00404ab0(vm,0xe);
        return;
      }
      lVar4 = __ftol((float10)fStack_4);
      fStack_4 = __BC(float, lVar4);
    }
  }
  if ((__BC(int, fStack_4) < 0) || (0xf < __BC(int, fStack_4))) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = &DAT_005af194 + __BC(int, fStack_4) * 0x1d84;
  }
  if (puVar3 == (undefined *)0x0) {
    FUN_004d41c0(vm,s_no_such_player_0055b488);
    return;
  }
  *(uint *)(puVar3 + 0x15d8) = *(uint *)(puVar3 + 0x15d8) | 0x40;
  FUN_004bde30((int)puVar3);
  return;
#undef fStack_4
}
