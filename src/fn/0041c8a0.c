/* Rebuilt from lomse.exe op_setunitdata @ 0x0041c8a0 (415 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa78c (*(undefined4 *)0x005aa78c)
#define DAT_005aad68 (*(undefined4 *)0x005aad68)
#define DAT_005ab344 (*(undefined4 *)0x005ab344)
#define DAT_005ab920 (*(undefined4 *)0x005ab920)
#define FUN_0041bf10 ((undefined4 (__cdecl *)(void *, int *, int *))0x0041bf10)
#define FUN_0041de50 ((undefined4 (__cdecl *)(int *, int, int, void *))0x0041de50)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_cannot_modify_this_army___005559c8 (*(char (*)[])0x005559c8)

#define LOM_SELF_0041c8a0 1
void __cdecl rb_0041c8a0(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  float fVar5;
  longlong lVar6;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_aiStack_14[2];
  typedef float _t_fStack_c;
  typedef float _t_fStack_4;
#define aiStack_14 (*(_t_aiStack_14 *)(_fr + 0x4))
#define fStack_c (*(_t_fStack_c *)(_fr + 0xc))
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0x14))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    uVar4 = 0;
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  if ((char)uVar4 != '\0') {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      uVar3 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      fStack_c = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      *(undefined4 *)((int)this + 0x90) = 6;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      uVar3 = 0;
      fStack_c = fStack_4;
    }
    uVar3 = uVar3 & 0xff;
    if (uVar3 == 1) {
      fVar5 = fStack_c;
    }
    else if (uVar3 == 2) {
      fVar5 = __BC(float, (__BC(int, fStack_c) >> 8));
    }
    else {
      if (uVar3 != 4) {
        *(undefined4 *)((int)this + 0x90) = 0xe;
        FUN_004d4550(this);
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
        return;
      }
      lVar6 = __ftol((float10)fStack_c);
      fVar5 = __BC(float, lVar6);
    }
    iVar1 = FUN_0041bf10(this,(int *)&vm,aiStack_14);
    if (iVar1 != 0) {
      if ((((vm != &DAT_005aa78c) && (vm != &DAT_005aad68)) && (vm != &DAT_005ab344)) &&
         (vm != &DAT_005ab920)) {
        if (*(int *)((int)this + 0x54) == 0) {
          *(undefined4 *)((int)this + 0x90) = 3;
          FUN_004d4550(this);
          *(undefined4 *)((int)this + 0x90) = 0;
          *(undefined4 *)((int)this + 0xa4) = 0;
        }
        else {
          iVar1 = *(int *)((int)this + 0x50);
          iVar2 = *(int *)((int)this + 0x54) + -1;
          *(int *)((int)this + 0x54) = iVar2;
          *(undefined4 *)(iVar1 + iVar2 * 8) = uVar4;
          *(float *)(iVar1 + 4 + iVar2 * 8) = fStack_4;
        }
        FUN_0041de50(vm,aiStack_14[0],__BC(int, fVar5),this);
        return;
      }
      FUN_004d41c0(this,s_cannot_modify_this_army___005559c8);
    }
  }
  return;
#undef aiStack_14
#undef fStack_c
#undef fStack_4
}
