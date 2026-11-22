/* Rebuilt from lomse.exe op_getunitflag @ 0x00467a80 (441 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, float *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_00467a80 1
void __cdecl rb_00467a80(void *vm)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  float fVar5;
  int iVar6;
  longlong lVar7;
  uchar _fr[0xa0] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_94;
  typedef float _t_fStack_90;
  typedef uint _t_uStack_8c;
  typedef uint _t_uStack_88;
  typedef float _t_fStack_84;
  typedef uint _t_auStack_80[32];
#define uStack_94 (*(_t_uStack_94 *)(_fr + 0x4))
#define fStack_90 (*(_t_fStack_90 *)(_fr + 0x8))
#define uStack_8c (*(_t_uStack_8c *)(_fr + 0xc))
#define uStack_88 (*(_t_uStack_88 *)(_fr + 0x10))
#define fStack_84 (*(_t_fStack_84 *)(_fr + 0x14))
#define auStack_80 (*(_t_auStack_80 *)(_fr + 0x18))
  
  iVar6 = 0;
  uStack_8c = 0;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar4 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    fStack_90 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar4 = 0;
  }
  uVar4 = uVar4 & 0xff;
  if (uVar4 == 1) {
    fVar5 = fStack_90;
  }
  else if (uVar4 == 2) {
    fVar5 = __BC(float, (__BC(int, fStack_90) >> 8));
  }
  else {
    if (uVar4 != 4) {
      FUN_00404ab0(vm,0xe);
      return;
    }
    lVar7 = __ftol((float10)fStack_90);
    fVar5 = __BC(float, lVar7);
  }
  uVar4 = 0;
  if (0 < __BC(int, fVar5)) {
    puVar3 = auStack_80;
    do {
      if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
        iVar2 = *(int *)((int)vm + 0x54) + 1;
        *(int *)((int)vm + 0x54) = iVar2;
        uStack_94 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
        fStack_90 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
      }
      else {
        *(undefined4 *)((int)vm + 0x90) = 6;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
        uStack_94 = 0;
      }
      iVar2 = FUN_004026a0(&uStack_94,puVar3,&uStack_88,&fStack_84);
      if (iVar2 == 0) {
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
        return;
      }
      iVar6 = iVar6 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar6 < __BC(int, fVar5));
    uVar4 = uStack_8c;
    if (0 < __BC(int, fVar5)) {
      puVar3 = auStack_80;
      do {
        uVar1 = *puVar3;
        puVar3 = puVar3 + 1;
        uVar4 = uVar4 | uVar1;
        fVar5 = __BC(float, (__BC(int, fVar5) + -1));
      } while (fVar5 != 0.0);
    }
  }
  if (*(int *)((int)vm + 0x54) == 0) {
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    return;
  }
  iVar6 = *(int *)((int)vm + 0x50);
  iVar2 = *(int *)((int)vm + 0x54) + -1;
  *(int *)((int)vm + 0x54) = iVar2;
  *(undefined4 *)(iVar6 + iVar2 * 8) = 1;
  *(uint *)(iVar6 + 4 + iVar2 * 8) = uVar4;
  return;
#undef uStack_94
#undef fStack_90
#undef uStack_8c
#undef uStack_88
#undef fStack_84
#undef auStack_80
}
