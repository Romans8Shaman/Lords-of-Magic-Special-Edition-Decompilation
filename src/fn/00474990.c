/* Rebuilt from lomse.exe op_scrollmap @ 0x00474990 (198 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005876d0 (*(undefined4 *)0x005876d0)
#define DAT_005876d4 (*(undefined4 *)0x005876d4)
#define DAT_005878e4 (*(int *)0x005878e4)
#define DAT_005a79e4 (*(char *)0x005a79e4)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00500da0 ((undefined4 (__thiscall *)(void *, undefined4))0x00500da0)
#define FUN_005195c0 ((undefined4 (__thiscall *)(void *, undefined1))0x005195c0)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_00474990 1
void __cdecl rb_00474990(void *vm)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
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
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
        return;
      }
      lVar3 = __ftol((float10)fStack_4);
      fStack_4 = __BC(float, lVar3);
    }
  }
  if (DAT_005878e4 == 0) {
    FUN_00500da0(&DAT_00584ae8,__BC(undefined4, fStack_4));
    if (-1 < DAT_005a79e4) {
      FUN_005195c0(&DAT_005876d0,DAT_005a79e4);
    }
    DAT_005876d4 = 0xffffffff;
  }
  return;
#undef fStack_4
}
