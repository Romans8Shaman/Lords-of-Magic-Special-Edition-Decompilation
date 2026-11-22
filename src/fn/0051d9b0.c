/* Rebuilt from lomse.exe op_setregiontoinvade @ 0x0051d9b0 (220 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_0051d570 ((undefined4 (__thiscall *)(void *, undefined4))0x0051d570)
#define FUN_0051d8e0 ((undefined * (__stdcall *)(void))0x0051d8e0)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_no_AI_00573e7c (*(char (*)[])0x00573e7c)

#define LOM_SELF_0051d9b0 1
void __cdecl rb_0051d9b0(void *vm)

{
  undefined *this;
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_4;
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0x4))
  
  this = FUN_0051d8e0();
  if (this == (undefined *)0x0) {
    FUN_004d41c0(vm,s_no_AI_00573e7c);
    return;
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
  if (uVar2 == 1) {
    FUN_0051d570(this,__BC(undefined4, fStack_4));
    return;
  }
  if (uVar2 == 2) {
    FUN_0051d570(this,__BC(int, fStack_4) >> 8);
    return;
  }
  if (uVar2 == 4) {
    lVar3 = __ftol((float10)fStack_4);
    FUN_0051d570(this,(int)lVar3);
    return;
  }
  *(undefined4 *)((int)vm + 0x90) = 0xe;
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
#undef fStack_4
}
