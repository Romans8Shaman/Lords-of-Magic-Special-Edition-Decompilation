/* Rebuilt from lomse.exe op_specifycurrentartifact @ 0x0042a280 (279 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00555d6c (*(float *)0x00555d6c)
#define DAT_00555d70 (*(int *)0x00555d70)
#define DAT_00555d74 (*(undefined4 *)0x00555d74)
#define DAT_005788c4 (*(int *)0x005788c4)
#define FUN_0041bf10 ((undefined4 (__cdecl *)(void *, int *, int *))0x0041bf10)
#define FUN_00428840 ((int (__thiscall *)(void *, int))0x00428840)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_artifact_not_found_00555de4 (*(char (*)[])0x00555de4)

#define LOM_SELF_0042a280 1
void __cdecl rb_0042a280(void *vm)

{
  void *this;
  int iVar1;
  uint uVar2;
  float fVar3;
  longlong lVar4;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_aiStack_c[2];
  typedef float _t_fStack_4;
#define aiStack_c (*(_t_aiStack_c *)(_fr + 0x4))
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0xc))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar2 = 0;
  }
  uVar2 = uVar2 & 0xff;
  if (uVar2 == 1) {
    fVar3 = fStack_4;
  }
  else if (uVar2 == 2) {
    fVar3 = __BC(float, (__BC(int, fStack_4) >> 8));
  }
  else {
    if (uVar2 != 4) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      return;
    }
    lVar4 = __ftol((float10)fStack_4);
    fVar3 = __BC(float, lVar4);
  }
  iVar1 = FUN_0041bf10(this,(int *)&vm,aiStack_c);
  if (iVar1 != 0) {
    iVar1 = FUN_00428840((void *)((int)vm + aiStack_c[0] * 0x4c + 0xc4),__BC(int, fVar3));
    if (iVar1 == 0) {
      FUN_004d41c0(this,s_artifact_not_found_00555de4);
      return;
    }
    DAT_00555d74 = *(undefined4 *)((int)vm + 0x28);
    DAT_00555d70 = aiStack_c[0];
    DAT_00555d6c = fVar3;
    DAT_005788c4 = iVar1;
  }
  return;
#undef aiStack_c
#undef fStack_4
}
