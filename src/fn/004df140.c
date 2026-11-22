/* Rebuilt from lomse.exe op_isvalidterraintype_q @ 0x004df140 (281 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aea30 (*(undefined4 *)0x005aea30)
#define DAT_005aea44 (*(int *)0x005aea44)
#define DAT_005aea50 (*(int *)0x005aea50)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_005091c0 ((undefined4 (__fastcall *)(undefined4 *))0x005091c0)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_004df140 1
void __cdecl rb_004df140(void *vm)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_4;
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0x4))
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar3 = 0;
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 != 1) {
    if (uVar3 == 2) {
      fStack_4 = __BC(float, (__BC(int, fStack_4) >> 8));
    }
    else {
      if (uVar3 != 4) {
        FUN_00404ab0(vm,0xe);
        return;
      }
      lVar5 = __ftol((float10)fStack_4);
      fStack_4 = __BC(float, lVar5);
    }
  }
  if (((__BC(int, fStack_4) < 0) || (DAT_005aea44 <= __BC(int, fStack_4))) || (DAT_005aea50 == 0)) {
    bVar1 = false;
  }
  else {
    if (DAT_005aea30 == 0) {
      FUN_005091c0(&DAT_005aea30);
    }
    bVar1 = 0 < *(int *)(DAT_005aea50 + __BC(int, fStack_4) * 4);
  }
  if (*(int *)((int)vm + 0x54) == 0) {
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    return;
  }
  iVar4 = *(int *)((int)vm + 0x54) + -1;
  *(int *)((int)vm + 0x54) = iVar4;
  iVar2 = *(int *)((int)vm + 0x50);
  *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
  *(uint *)(iVar2 + 4 + iVar4 * 8) = -(uint)bVar1;
  return;
#undef fStack_4
}
