/* Rebuilt from lomse.exe op_coarsescrollpixels @ 0x0051ae10 (348 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005878ac (*(int *)0x005878ac)
#define DAT_005878b0 (*(int *)0x005878b0)
#define DAT_005878bc (*(float *)0x005878bc)
#define DAT_005878c0 (*(float *)0x005878c0)
#define FUN_004750b0 ((undefined4 (__thiscall *)(void *, int, undefined4, undefined4, int))0x004750b0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_ERROR_not_a_multiple_of_finestep_00573ba0 (*(char (*)[])0x00573ba0)

#define LOM_SELF_0051ae10 1
void __cdecl rb_0051ae10(void *vm)

{
  int iVar1;
  uint uVar2;
  float fVar3;
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
  fVar3 = fStack_4;
  if (uVar2 != 1) {
    if (uVar2 == 2) {
      fVar3 = __BC(float, (__BC(int, fStack_4) >> 8));
    }
    else {
      if (uVar2 != 4) goto LAB_0051af48;
      lVar4 = __ftol((float10)fStack_4);
      fVar3 = __BC(float, lVar4);
    }
  }
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
LAB_0051af48:
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
        return;
      }
      lVar4 = __ftol((float10)fStack_4);
      fStack_4 = __BC(float, lVar4);
    }
  }
  if ((__BC(int, fStack_4) % DAT_005878ac == 0) && (__BC(int, fVar3) % DAT_005878b0 == 0)) {
    DAT_005878bc = fStack_4;
    DAT_005878c0 = fVar3;
    FUN_004750b0(&DAT_00584ae8,2,__BC(int, fStack_4) * 2 + 0x280,__BC(int, fVar3) * 2 + 0x180,0x10);
    return;
  }
  FUN_004d41c0(vm,s_ERROR_not_a_multiple_of_finestep_00573ba0);
  return;
#undef fStack_4
}
