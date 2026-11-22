/* Rebuilt from lomse.exe op_div @ 0x004caf10 (378 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define _DAT_0054dd18 (*(double *)0x0054dd18)
#define _DAT_0054dd20 (*(float *)0x0054dd20)
#define s_divide_by_zero_0055e1d4 (*(char (*)[])0x0055e1d4)

#define LOM_SELF_004caf10 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rb_004caf10(void *vm)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_c;
  typedef float _t_fStack_4;
#define fStack_c (*(_t_fStack_c *)(_fr + 0x4))
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0xc))
  
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
    uVar5 = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    fStack_c = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar3 = 0;
    fStack_c = fStack_4;
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 == 1) {
    fStack_c = (float)__BC(int, fStack_c);
LAB_004cafd6:
    uVar5 = uVar5 & 0xff;
    if (uVar5 == 1) {
      fVar1 = (float)__BC(int, fStack_4);
    }
    else if (uVar5 == 2) {
      fVar1 = (float)__BC(int, fStack_4) * (float)_DAT_0054dd18;
    }
    else {
      if (uVar5 != 4) goto LAB_004cb07e;
      fVar1 = fStack_4;
    }
    if ((__LOM_ISNAN(fVar1) || __LOM_ISNAN(_DAT_0054dd20)) || fVar1 == _DAT_0054dd20) {
      FUN_004d41c0(vm,s_divide_by_zero_0055e1d4);
    }
    else {
      fStack_4 = fStack_c / fVar1;
    }
    if (*(int *)((int)vm + 0x54) != 0) {
      iVar2 = *(int *)((int)vm + 0x50);
      iVar4 = *(int *)((int)vm + 0x54) + -1;
      *(int *)((int)vm + 0x54) = iVar4;
      *(undefined4 *)(iVar2 + iVar4 * 8) = 4;
      *(float *)(iVar2 + 4 + iVar4 * 8) = fStack_4;
      return;
    }
    *(undefined4 *)((int)vm + 0x90) = 3;
  }
  else {
    if (uVar3 == 2) {
      fStack_c = (float)__BC(int, fStack_c) * (float)_DAT_0054dd18;
      goto LAB_004cafd6;
    }
    if (uVar3 == 4) goto LAB_004cafd6;
LAB_004cb07e:
    *(undefined4 *)((int)vm + 0x90) = 0xe;
  }
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
#undef fStack_c
#undef fStack_4
}
