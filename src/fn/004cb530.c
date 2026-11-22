/* Rebuilt from lomse.exe op_lt @ 0x004cb530 (341 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define _DAT_0054dd18 (*(double *)0x0054dd18)

#define LOM_SELF_004cb530 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rb_004cb530(void *vm)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_c;
  typedef float _t_fStack_4;
#define fStack_c (*(_t_fStack_c *)(_fr + 0x4))
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0xc))
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar5 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    uVar5 = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_c = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar2 = 0;
    fStack_c = fStack_4;
  }
  uVar2 = uVar2 & 0xff;
  if (uVar2 == 1) {
    fStack_c = (float)__BC(int, fStack_c);
LAB_004cb5f6:
    uVar5 = uVar5 & 0xff;
    if (uVar5 == 1) {
      fStack_4 = (float)__BC(int, fStack_4);
    }
    else if (uVar5 == 2) {
      fStack_4 = (float)__BC(int, fStack_4) * (float)_DAT_0054dd18;
    }
    else if (uVar5 != 4) goto LAB_004cb679;
    if ((!__LOM_ISNAN(fStack_c) && !__LOM_ISNAN(fStack_4)) && fStack_4 <= fStack_c) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0xffffffff;
    }
    if (*(int *)((int)vm + 0x54) != 0) {
      iVar3 = *(int *)((int)vm + 0x54) + -1;
      *(int *)((int)vm + 0x54) = iVar3;
      iVar1 = *(int *)((int)vm + 0x50);
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = uVar4;
      return;
    }
    *(undefined4 *)((int)vm + 0x90) = 3;
  }
  else {
    if (uVar2 == 2) {
      fStack_c = (float)__BC(int, fStack_c) * (float)_DAT_0054dd18;
      goto LAB_004cb5f6;
    }
    if (uVar2 == 4) goto LAB_004cb5f6;
LAB_004cb679:
    *(undefined4 *)((int)vm + 0x90) = 0xe;
  }
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
#undef fStack_c
#undef fStack_4
}
