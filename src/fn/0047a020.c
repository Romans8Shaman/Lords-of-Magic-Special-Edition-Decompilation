/* Rebuilt from lomse.exe op_playsoundfxwait @ 0x0047a020 (239 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00585408 (*(undefined4 *)0x00585408)
#define DAT_00586774 (*(undefined4 *)0x00586774)
#define DAT_005867a4 (*(float *)0x005867a4)
#define FUN_00478c00 ((undefined4 (__thiscall *)(void *, undefined4))0x00478c00)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define _DAT_005867a0 (*(undefined4 *)0x005867a0)
#define _DAT_005867a8 (*(undefined4 *)0x005867a8)
#define _DAT_005867b4 (*(undefined4 *)0x005867b4)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_0047a020 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rb_0047a020(void *vm)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_4;
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0x4))
  
  pvVar1 = vm;
  _DAT_005867a0 = 0xffffffff;
  _DAT_005867b4 = 0;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    uVar3 = 0;
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 == 1) {
    DAT_005867a4 = fStack_4;
  }
  else if (uVar3 == 2) {
    DAT_005867a4 = __BC(float, (__BC(int, fStack_4) >> 8));
  }
  else {
    if (uVar3 != 4) {
      *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
      FUN_004d4550(pvVar1);
      *(undefined4 *)((int)pvVar1 + 0x90) = 0;
      *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
      return;
    }
    lVar4 = __ftol((float10)fStack_4);
    DAT_005867a4 = __BC(float, lVar4);
  }
  _DAT_005867a8 = DAT_00586774;
  iVar2 = FUN_00478c00(&DAT_00585408,__BC(undefined4, DAT_005867a4));
  if (iVar2 != -1) {
    do {
      ((undefined4 (__stdcall *)(__typeof__((int *)(&DAT_00585408)[iVar2]), __typeof__(&vm)))(**(code **)(*(int *)(&DAT_00585408)[iVar2] + 0x24)))((int *)(&DAT_00585408)[iVar2],&vm);
    } while (((uint)vm & 5) != 0);
  }
  return;
#undef fStack_4
}
