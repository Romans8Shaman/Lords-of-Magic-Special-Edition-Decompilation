/* Rebuilt from lomse.exe op_splitownership @ 0x00424a40 (312 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_00424990 ((undefined4 (__thiscall *)(void *, uint, int))0x00424990)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_failed_to_split_ownership__00555d38 (*(char (*)[])0x00555d38)

#define LOM_SELF_00424a40 1
void __cdecl rb_00424a40(void *vm)

{
  void *this;
  uint uVar1;
  int iVar2;
  float fVar3;
  longlong lVar4;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_4;
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0x4))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar1 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar1 = 0;
  }
  uVar1 = uVar1 & 0xff;
  fVar3 = fStack_4;
  if (uVar1 != 1) {
    if (uVar1 == 2) {
      fVar3 = __BC(float, (__BC(int, fStack_4) >> 8));
    }
    else {
      if (uVar1 != 4) goto LAB_00424b54;
      lVar4 = __ftol((float10)fStack_4);
      fVar3 = __BC(float, lVar4);
    }
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uVar1 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    fStack_4 = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar1 = 0;
  }
  uVar1 = uVar1 & 0xff;
  if (uVar1 != 1) {
    if (uVar1 == 2) {
      fStack_4 = __BC(float, (__BC(int, fStack_4) >> 8));
    }
    else {
      if (uVar1 != 4) {
LAB_00424b54:
        *(undefined4 *)((int)this + 0x90) = 0xe;
        FUN_004d4550(this);
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
        return;
      }
      lVar4 = __ftol((float10)fStack_4);
      fStack_4 = __BC(float, lVar4);
    }
  }
  iVar2 = FUN_0041be40(this,&vm);
  if ((iVar2 != 0) && (iVar2 = FUN_00424990(vm,__BC(uint, fStack_4),__BC(int, fVar3)), iVar2 == 0)) {
    FUN_004d41c0(this,s_failed_to_split_ownership__00555d38);
  }
  return;
#undef fStack_4
}
