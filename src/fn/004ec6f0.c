/* Rebuilt from lomse.exe op_setslider @ 0x004ec6f0 (404 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_00492790 ((int (__thiscall *)(void *, int))0x00492790)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004eb860 ((undefined4 (__thiscall *)(void *, int *))0x004eb860)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_setslider__no_slider_with_that_i_00573064 (*(char (*)[])0x00573064)

#define LOM_SELF_004ec6f0 1
void __cdecl rb_004ec6f0(void *vm)

{
  int iVar1;
  uint uVar2;
  int *this;
  float fVar3;
  int iVar4;
  float *pfVar5;
  longlong lVar6;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_1c;
  typedef float _t_afStack_18[6];
#define fStack_1c (*(_t_fStack_1c *)(_fr + 0x4))
#define afStack_18 (*(_t_afStack_18 *)(_fr + 0x8))
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar4 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar4;
    uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar4 * 8);
    fStack_1c = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar4 * 8);
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
    fVar3 = fStack_1c;
  }
  else if (uVar2 == 2) {
    fVar3 = __BC(float, (__BC(int, fStack_1c) >> 8));
  }
  else {
    if (uVar2 != 4) {
      FUN_00404ab0(vm,0xe);
      return;
    }
    lVar6 = __ftol((float10)fStack_1c);
    fVar3 = __BC(float, lVar6);
  }
  iVar4 = *(int *)((int)vm + 0x90);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  if (iVar4 == 0) {
    this = (int *)FUN_00492790(&DAT_005a7b50,__BC(int, fVar3));
    if (this == (int *)0x0) {
      FUN_004d41c0(vm,s_setslider__no_slider_with_that_i_00573064);
      return;
    }
    iVar4 = *this;
    if (-1 < iVar4) {
      pfVar5 = afStack_18 + iVar4;
      do {
        if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
          iVar1 = *(int *)((int)vm + 0x54) + 1;
          *(int *)((int)vm + 0x54) = iVar1;
          uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
          fStack_1c = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
        }
        else {
          *(undefined4 *)((int)vm + 0x90) = 6;
          FUN_004d4550(vm);
          *(undefined4 *)((int)vm + 0x90) = 0;
          *(undefined4 *)((int)vm + 0xa4) = 0;
          uVar2 = 0;
        }
        uVar2 = uVar2 & 0xff;
        fVar3 = fStack_1c;
        if (uVar2 == 1) {
LAB_004ec819:
          *pfVar5 = fVar3;
        }
        else {
          if (uVar2 == 2) {
            fVar3 = __BC(float, (__BC(int, fStack_1c) >> 8));
            goto LAB_004ec819;
          }
          if (uVar2 != 4) {
            *(undefined4 *)((int)vm + 0x90) = 0xe;
            FUN_004d4550(vm);
            *(undefined4 *)((int)vm + 0x90) = 0;
            *(undefined4 *)((int)vm + 0xa4) = 0;
            return;
          }
          lVar6 = __ftol((float10)fStack_1c);
          *pfVar5 = __BC(float, lVar6);
        }
        iVar4 = iVar4 + -1;
        pfVar5 = pfVar5 + -1;
      } while (-1 < iVar4);
    }
    FUN_004eb860(this,(int *)afStack_18);
  }
  return;
#undef fStack_1c
#undef afStack_18
}
