/* Rebuilt from lomse.exe op_addplayitem @ 0x00464b40 (346 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005577c8 (*(int *)0x005577c8)
#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_00464b40 1
void __cdecl rb_00464b40(void *vm)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  float fVar5;
  longlong lVar6;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_4;
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0x4))
  
  if ((DAT_005577c8 < 0) || (0xf < DAT_005577c8)) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &DAT_005af194 + DAT_005577c8 * 0x1d84;
  }
  if (((puVar1 != (undefined *)0x0) && (puVar1 + 0x15e0 != (undefined *)0x0)) &&
     (*(int *)(puVar1 + 0x1bc0) < 0x19)) {
    if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
      iVar2 = *(int *)((int)vm + 0x54) + 1;
      *(int *)((int)vm + 0x54) = iVar2;
      uVar3 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
      fVar5 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
    }
    else {
      *(undefined4 *)((int)vm + 0x90) = 6;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      uVar3 = 0;
      fVar5 = fStack_4;
    }
    iVar2 = *(int *)(puVar1 + 0x1bc0);
    *(undefined4 *)(puVar1 + 0x15e0 + (iVar2 + 100) * 0xc) = uVar3;
    *(float *)(puVar1 + (iVar2 + 100) * 0xc + 0x15e4) = fVar5;
    if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
      iVar2 = *(int *)((int)vm + 0x54) + 1;
      *(int *)((int)vm + 0x54) = iVar2;
      uVar4 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
      fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
    }
    else {
      *(undefined4 *)((int)vm + 0x90) = 6;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      uVar4 = 0;
    }
    uVar4 = uVar4 & 0xff;
    if (uVar4 != 1) {
      if (uVar4 == 2) {
        fStack_4 = __BC(float, (__BC(int, fStack_4) >> 8));
      }
      else {
        if (uVar4 != 4) {
          *(undefined4 *)((int)vm + 0x90) = 0xe;
          FUN_004d4550(vm);
          *(undefined4 *)((int)vm + 0x90) = 0;
          *(undefined4 *)((int)vm + 0xa4) = 0;
          return;
        }
        lVar6 = __ftol((float10)fStack_4);
        fStack_4 = __BC(float, lVar6);
      }
    }
    *(int *)(puVar1 + *(int *)(puVar1 + 0x1bc0) * 0xc + 0x1a8c) =
         *(int *)(puVar1 + 0x1a78) + __BC(int, fStack_4);
    *(int *)(puVar1 + 0x1bc0) = *(int *)(puVar1 + 0x1bc0) + 1;
  }
  return;
#undef fStack_4
}
