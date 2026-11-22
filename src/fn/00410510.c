/* Rebuilt from lomse.exe op_championbrainresponsecode @ 0x00410510 (245 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aeed0 (*(undefined *)0x005aeed0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040f4e0 ((int (__thiscall *)(void *, int))0x0040f4e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_00410510 1
void __cdecl rb_00410510(void *vm)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_4;
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0x4))
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar5 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar5 = 0;
  }
  uVar5 = uVar5 & 0xff;
  if (uVar5 != 1) {
    if (uVar5 == 2) {
      fStack_4 = __BC(float, (__BC(int, fStack_4) >> 8));
    }
    else {
      if (uVar5 != 4) {
        FUN_00404ab0(vm,0xe);
        return;
      }
      lVar6 = __ftol((float10)fStack_4);
      fStack_4 = __BC(float, lVar6);
    }
  }
  puVar3 = (undefined4 *)FUN_0040f4e0(&DAT_005aeed0,__BC(int, fStack_4));
  if (puVar3 == (undefined4 *)0x0) {
    if (*(int *)((int)vm + 0x54) != 0) {
      iVar4 = *(int *)((int)vm + 0x54) + -1;
      *(int *)((int)vm + 0x54) = iVar4;
      iVar2 = *(int *)((int)vm + 0x50);
      *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = 0xffffffff;
      return;
    }
  }
  else {
    uVar1 = *puVar3;
    if (*(int *)((int)vm + 0x54) != 0) {
      iVar4 = *(int *)((int)vm + 0x54) + -1;
      *(int *)((int)vm + 0x54) = iVar4;
      iVar2 = *(int *)((int)vm + 0x50);
      *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = uVar1;
      return;
    }
  }
  *(undefined4 *)((int)vm + 0x90) = 3;
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
#undef fStack_4
}
