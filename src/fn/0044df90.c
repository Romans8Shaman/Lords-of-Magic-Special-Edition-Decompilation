/* Rebuilt from lomse.exe op_virtualunitselectspeak @ 0x0044df90 (269 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00585408 (*(undefined4 *)0x00585408)
#define DAT_00586778 (*(undefined4 *)0x00586778)
#define DAT_005867a4 (*(int *)0x005867a4)
#define DAT_005869f4 (*(int *)0x005869f4)
#define FUN_0041ecf0 ((undefined4 (__thiscall *)(void *, int))0x0041ecf0)
#define FUN_00478920 ((undefined4 (__fastcall *)(int *))0x00478920)
#define FUN_00478c00 ((undefined4 (__thiscall *)(void *, undefined4))0x00478c00)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00521e00 ((int (__fastcall *)(int *))0x00521e00)
#define _DAT_005867a0 (*(undefined4 *)0x005867a0)
#define _DAT_005867a8 (*(undefined4 *)0x005867a8)
#define _DAT_005867b0 (*(undefined4 *)0x005867b0)
#define _DAT_005867b4 (*(undefined4 *)0x005867b4)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_0044df90 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rb_0044df90(void *vm)

{
  int iVar1;
  void *this;
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
  this = (void *)FUN_00521e00((int *)(DAT_005869f4 + 0xc4 + __BC(int, fStack_4) * 0x4c));
  _DAT_005867a0 = 0xfffffc18;
  FUN_00478920(&DAT_00585408);
  if (this != (void *)0x0) {
    iVar1 = FUN_0041ecf0(this,0x17);
    if (-1 < iVar1) {
      _DAT_005867a8 = DAT_00586778;
      _DAT_005867b0 = 0;
      _DAT_005867a0 = 0xfffffc18;
      _DAT_005867b4 = 0;
      DAT_005867a4 = iVar1;
      FUN_00478c00(&DAT_00585408,iVar1);
    }
  }
  return;
#undef fStack_4
}
