/* Rebuilt from lomse.exe op_getspritescreenx @ 0x004d9c60 (223 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_no_sprite_00572584 (*(char (*)[])0x00572584)

#define LOM_SELF_004d9c60 1
void __cdecl rb_004d9c60(void *vm)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_4;
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0x4))
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar4 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar4 = 0;
  }
  uVar4 = uVar4 & 0xff;
  if (uVar4 != 1) {
    if (uVar4 == 2) {
      fStack_4 = __BC(float, (__BC(int, fStack_4) >> 8));
    }
    else {
      if (uVar4 != 4) {
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        goto LAB_004d9d15;
      }
      lVar5 = __ftol((float10)fStack_4);
      fStack_4 = __BC(float, lVar5);
    }
  }
  iVar2 = FUN_004f6000(&DAT_005ae974,__BC(int, fStack_4));
  if (iVar2 == 0) {
    FUN_004d41c0(vm,s_no_sprite_00572584);
    return;
  }
  uVar1 = *(undefined4 *)(iVar2 + 0x14);
  if (*(int *)((int)vm + 0x54) != 0) {
    iVar3 = *(int *)((int)vm + 0x54) + -1;
    *(int *)((int)vm + 0x54) = iVar3;
    iVar2 = *(int *)((int)vm + 0x50);
    *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
    *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = uVar1;
    return;
  }
  *(undefined4 *)((int)vm + 0x90) = 3;
LAB_004d9d15:
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
#undef fStack_4
}
