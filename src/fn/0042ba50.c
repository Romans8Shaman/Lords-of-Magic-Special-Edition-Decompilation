/* Rebuilt from lomse.exe op_enumwieldedartifacts @ 0x0042ba50 (349 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_0041da00 ((undefined4 (__fastcall *)(int))0x0041da00)
#define FUN_00428ad0 ((undefined4 (__thiscall *)(void *, void *, uint, int *))0x00428ad0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_no_such_unit_00555df8 (*(char (*)[])0x00555df8)

#define LOM_SELF_0042ba50 1
void __cdecl rb_0042ba50(void *vm)

{
  void *this;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  longlong lVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int * _t_piStack_4;
#define piStack_4 (*(_t_piStack_4 *)(_fr + 0x4))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    piVar4 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uVar3 = 0;
    piVar4 = piStack_4;
  }
  iVar1 = FUN_0041da00((int)this);
  if (iVar1 == 0) {
    if (((char)uVar3 == '\x06') && ((uVar3 & 0x100) == 0)) goto LAB_0042babd;
    *(undefined4 *)((int)this + 0x90) = 0x12;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  uVar3 = 0;
LAB_0042babd:
  if (((char)uVar3 == '\x06') && ((uVar3 & 0x100) == 0)) {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      uVar2 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      piStack_4 = *(int **)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      *(undefined4 *)((int)this + 0x90) = 6;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      uVar2 = 0;
    }
    uVar2 = uVar2 & 0xff;
    if (uVar2 != 1) {
      if (uVar2 == 2) {
        piStack_4 = (int *)((int)piStack_4 >> 8);
      }
      else {
        if (uVar2 != 4) {
          *(undefined4 *)((int)this + 0x90) = 0xe;
          FUN_004d4550(this);
          *(undefined4 *)((int)this + 0x90) = 0;
          *(undefined4 *)((int)this + 0xa4) = 0;
          return;
        }
        lVar5 = __ftol((float10)__BC(float, piStack_4));
        piStack_4 = (int *)lVar5;
      }
    }
    iVar1 = FUN_0041be40(this,&vm);
    if (iVar1 != 0) {
      if ((-1 < (int)piStack_4) && ((int)piStack_4 < *(int *)((int)vm + 0x4c))) {
        FUN_00428ad0((void *)((int)vm + (int)piStack_4 * 0x4c + 0xc4),this,uVar3,piVar4);
        return;
      }
      FUN_004d41c0(this,s_no_such_unit_00555df8);
    }
  }
  return;
#undef piStack_4
}
