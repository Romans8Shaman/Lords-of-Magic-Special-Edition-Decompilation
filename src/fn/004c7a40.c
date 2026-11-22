/* Rebuilt from lomse.exe op_getregionname @ 0x004c7a40 (205 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aef04 (*(undefined4 *)0x005aef04)
#define FUN_004c5220 ((undefined1 * (__fastcall *)(int))0x004c5220)
#define FUN_004c5ec0 ((int (__thiscall *)(void *, int))0x004c5ec0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_004c7a40 1
void __cdecl rb_004c7a40(void *vm)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_4;
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0x4))
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
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
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        goto LAB_004c7ae3;
      }
      lVar5 = __ftol((float10)fStack_4);
      fStack_4 = __BC(float, lVar5);
    }
  }
  iVar1 = FUN_004c5ec0(&DAT_005aef04,__BC(int, fStack_4));
  puVar2 = FUN_004c5220(iVar1);
  if (*(int *)((int)vm + 0x54) != 0) {
    iVar4 = *(int *)((int)vm + 0x54) + -1;
    *(int *)((int)vm + 0x54) = iVar4;
    iVar1 = *(int *)((int)vm + 0x50);
    *(undefined4 *)(iVar1 + iVar4 * 8) = 8;
    *(undefined1 **)(iVar1 + 4 + iVar4 * 8) = puVar2;
    return;
  }
  *(undefined4 *)((int)vm + 0x90) = 3;
LAB_004c7ae3:
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
#undef fStack_4
}
