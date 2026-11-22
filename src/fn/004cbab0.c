/* Rebuilt from lomse.exe op_eq @ 0x004cbab0 (484 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, float *))0x004026a0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define _DAT_0054dd10 (*(double *)0x0054dd10)
#define _DAT_0054dd18 (*(double *)0x0054dd18)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_004cbab0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rb_004cbab0(void *vm)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  bool bVar8;
  longlong lVar9;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef void * _t_pvStack_1c;
  typedef void * _t_pvStack_18;
  typedef void * _t_pvStack_14;
  typedef float _t_fStack_10;
  typedef void * _t_pvStack_c;
  typedef uint _t_uStack_8;
  typedef void * _t_pvStack_4;
#define pvStack_1c (*(_t_pvStack_1c *)(_fr + 0x4))
#define pvStack_18 (*(_t_pvStack_18 *)(_fr + 0x8))
#define pvStack_14 (*(_t_pvStack_14 *)(_fr + 0xc))
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x10))
#define pvStack_c (*(_t_pvStack_c *)(_fr + 0x14))
#define uStack_8 (*(_t_uStack_8 volatile *)(_fr + 0x18))
#define pvStack_4 (*(_t_pvStack_4 volatile *)(_fr + 0x1c)) /* HAND: volatile - the pop-failure path reads this uninitialised slot (same slot for both operands); clang folds undef compares */
  
  pvVar1 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar5 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    pvVar7 = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar5 = 0;
    pvVar7 = pvStack_4;
  }
  pvStack_c = pvVar7;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    pvStack_4 = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uStack_8 = 0;
  }
  if ((uVar5 == uStack_8) && (pvVar7 == pvStack_4)) {
    bVar8 = true;
    goto LAB_004cbc47;
  }
  uVar6 = uVar5 & 0xff;
  if ((uVar6 == 5) && ((char)uStack_8 == (char)uVar5)) {
    bVar8 = pvVar7 == pvStack_4;
    goto LAB_004cbc47;
  }
  if (uVar6 == 1) {
    pvStack_1c = __BC(void *, (float)(int)pvStack_c);
    vm = (void *)((int)pvVar7 << 8);
    pvVar3 = pvVar7;
LAB_004cbbd4:
    iVar2 = FUN_004026a0(&uStack_8,(uint *)&pvStack_18,(uint *)&pvStack_14,&fStack_10);
    if (iVar2 != 0) {
      if ((uVar6 != 4) && ((uStack_8 & 0xff) != 4)) {
        if ((uVar6 == 2) || ((uStack_8 & 0xff) == 2)) {
          bVar8 = vm == pvStack_14;
        }
        else {
          bVar8 = pvVar3 == pvStack_18;
        }
        goto LAB_004cbc47;
      }
      if ((__LOM_ISNAN(__BC(float, pvStack_1c)) || __LOM_ISNAN(fStack_10)) || __BC(float, pvStack_1c) == fStack_10) {
        bVar8 = true;
        goto LAB_004cbc47;
      }
    }
  }
  else {
    if (uVar6 == 2) {
      pvStack_1c = __BC(void *, (float)((float10)(int)pvStack_c * (float10)_DAT_0054dd18));
      pvVar3 = (void *)((int)pvVar7 >> 8);
      vm = pvVar7;
      goto LAB_004cbbd4;
    }
    if (uVar6 == 4) {
      pvStack_1c = pvStack_c;
      lVar9 = __ftol((float10)__BC(float, pvStack_c) * (float10)_DAT_0054dd10);
      vm = (void *)lVar9;
      lVar9 = __ftol((float10)__BC(float, pvStack_c));
      pvVar3 = (void *)lVar9;
      goto LAB_004cbbd4;
    }
  }
  bVar8 = false;
LAB_004cbc47:
  if (*(int *)((int)pvVar1 + 0x54) == 0) {
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    return;
  }
  iVar4 = *(int *)((int)pvVar1 + 0x54) + -1;
  *(int *)((int)pvVar1 + 0x54) = iVar4;
  iVar2 = *(int *)((int)pvVar1 + 0x50);
  *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
  *(uint *)(iVar2 + 4 + iVar4 * 8) = -(uint)bVar8;
  return;
#undef pvStack_1c
#undef pvStack_18
#undef pvStack_14
#undef fStack_10
#undef pvStack_c
#undef uStack_8
#undef pvStack_4
}
