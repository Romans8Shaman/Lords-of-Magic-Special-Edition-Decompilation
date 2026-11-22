/* Rebuilt from lomse.exe op_settimeraccuracy @ 0x004b3fe0 (194 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005863c8 (*(undefined4 *)0x005863c8)
#define DAT_005864f4 (*(undefined *)0x005864f4)
#define FUN_004b32c0 ((undefined4 (__fastcall *)(int *))0x004b32c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define _DAT_00586790 (*(undefined4 *)0x00586790)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_004b3fe0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rb_004b3fe0(void *vm)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_4;
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0x4))
  
  FUN_004b32c0(&DAT_005863c8);
  FUN_004b32c0((int *)&DAT_005864f4);
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
  if (uVar2 == 1) {
    _DAT_00586790 = __BC(undefined4, fStack_4);
    return;
  }
  if (uVar2 == 2) {
    _DAT_00586790 = __BC(undefined4, __BC(float, (__BC(int, fStack_4) >> 8)));
    return;
  }
  if (uVar2 == 4) {
    lVar3 = __ftol((float10)fStack_4);
    _DAT_00586790 = __BC(undefined4, (float)(int)lVar3);
    return;
  }
  *(undefined4 *)((int)vm + 0x90) = 0xe;
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
#undef fStack_4
}
