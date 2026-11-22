/* Rebuilt from lomse.exe op_setcurrentcombatattackspell @ 0x00425560 (208 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00529400 ((undefined4 (__thiscall *)(void *, undefined4))0x00529400)
#define FUN_00530200 ((undefined4 (__thiscall *)(void *, undefined4 *, int *))0x00530200)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_00425560 1
void __cdecl rb_00425560(void *vm)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  longlong lVar5;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_aiStack_c[2];
  typedef float _t_fStack_4;
#define aiStack_c (*(_t_aiStack_c *)(_fr + 0x4))
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0xc))
  
  pvVar1 = vm;
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
    fVar4 = fStack_4;
  }
  else if (uVar3 == 2) {
    fVar4 = __BC(float, (__BC(int, fStack_4) >> 8));
  }
  else {
    if (uVar3 != 4) {
      *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
      FUN_004d4550(pvVar1);
      *(undefined4 *)((int)pvVar1 + 0x90) = 0;
      *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
      return;
    }
    lVar5 = __ftol((float10)fStack_4);
    fVar4 = __BC(float, lVar5);
  }
  iVar2 = FUN_00530200(&DAT_00584ae8,aiStack_c,(int *)&vm);
  if (iVar2 != 0) {
    FUN_00529400((void *)(aiStack_c[0] + 0xc4 + (int)vm * 0x4c),__BC(undefined4, fVar4));
  }
  return;
#undef aiStack_c
#undef fStack_4
}
