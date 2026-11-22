/* Rebuilt from lomse.exe op_addclosestarmyrequest @ 0x00521870 (374 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ccedc (*(undefined *)0x005ccedc)
#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_00437380 ((undefined4 (__thiscall *)(void *, int, undefined4, undefined4, undefined4, undefined4, undefined4))0x00437380)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_00521870 1
void __cdecl rb_00521870(void *vm)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  longlong lVar5;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_uStack_18;
  typedef float _t_fStack_14;
  typedef undefined4 _t_uStack_10;
  typedef float _t_fStack_4;
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x0))
#define fStack_14 (*(_t_fStack_14 *)(_fr + 0x4))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x8))
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0x14))
  
  pvVar1 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_18 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    fStack_14 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    uStack_18 = 0;
    fStack_14 = fStack_4;
  }
  if ((char)uStack_18 != '\0') {
    if (*(int *)((int)pvVar1 + 0x54) < *(int *)((int)pvVar1 + 0x58)) {
      iVar2 = *(int *)((int)pvVar1 + 0x54) + 1;
      *(int *)((int)pvVar1 + 0x54) = iVar2;
      uStack_10 = *(undefined4 *)(*(int *)((int)pvVar1 + 0x50) + -8 + iVar2 * 8);
      fVar4 = *(float *)(*(int *)((int)pvVar1 + 0x50) + -4 + iVar2 * 8);
    }
    else {
      *(undefined4 *)((int)pvVar1 + 0x90) = 6;
      FUN_004d4550(pvVar1);
      *(undefined4 *)((int)pvVar1 + 0x90) = 0;
      *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
      uStack_10 = 0;
      fVar4 = fStack_4;
    }
    if ((char)uStack_10 != '\0') {
      if (*(int *)((int)pvVar1 + 0x54) < *(int *)((int)pvVar1 + 0x58)) {
        iVar2 = *(int *)((int)pvVar1 + 0x54) + 1;
        *(int *)((int)pvVar1 + 0x54) = iVar2;
        uVar3 = *(uint *)(*(int *)((int)pvVar1 + 0x50) + -8 + iVar2 * 8);
        fStack_4 = *(float *)(*(int *)((int)pvVar1 + 0x50) + -4 + iVar2 * 8);
      }
      else {
        *(undefined4 *)((int)pvVar1 + 0x90) = 6;
        FUN_004d4550(pvVar1);
        *(undefined4 *)((int)pvVar1 + 0x90) = 0;
        *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
        uVar3 = 0;
      }
      uVar3 = uVar3 & 0xff;
      if (uVar3 != 1) {
        if (uVar3 == 2) {
          fStack_4 = __BC(float, (__BC(int, fStack_4) >> 8));
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
          fStack_4 = __BC(float, lVar5);
        }
      }
      iVar2 = FUN_0041be40(pvVar1,&vm);
      if (iVar2 != 0) {
        FUN_00437380(&DAT_005ccedc,(int)vm,__BC(undefined4, fStack_4),uStack_10,__BC(undefined4, fVar4),uStack_18,__BC(undefined4, fStack_14));
      }
    }
  }
  return;
#undef uStack_18
#undef fStack_14
#undef uStack_10
#undef fStack_4
}
