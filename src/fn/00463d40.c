/* Rebuilt from lomse.exe op_distractorder @ 0x00463d40 (450 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00579458 (*(undefined *)0x00579458)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, float *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_00407550 ((undefined4 (__thiscall *)(void *, int, int))0x00407550)
#define FUN_0045a620 ((undefined4 (__thiscall *)(void *, int, int *, int *))0x0045a620)
#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_00463d40 1
void __cdecl rb_00463d40(void *vm)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  longlong lVar5;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_14;
  typedef float _t_fStack_10;
  typedef uint _t_uStack_c;
  typedef uint _t_uStack_8;
  typedef void * _t_pvStack_4;
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x4))
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x8))
#define uStack_c (*(_t_uStack_c *)(_fr + 0xc))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x10))
#define pvStack_4 (*(_t_pvStack_4 *)(_fr + 0x14))
  
  pvVar4 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar1 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    pvStack_4 = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)pvVar4 + 0x90) = 0;
    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
    uVar1 = 0;
  }
  uVar1 = uVar1 & 0xff;
  pvVar3 = pvStack_4;
  if (uVar1 == 1) {
LAB_00463db5:
    vm = pvVar3;
  }
  else {
    if (uVar1 == 2) {
      pvVar3 = (void *)((int)pvStack_4 >> 8);
      goto LAB_00463db5;
    }
    if (uVar1 != 4) goto LAB_00463ef3;
    lVar5 = __ftol((float10)__BC(float, pvStack_4));
    vm = (void *)lVar5;
  }
  if (*(int *)((int)pvVar4 + 0x54) < *(int *)((int)pvVar4 + 0x58)) {
    iVar2 = *(int *)((int)pvVar4 + 0x54) + 1;
    *(int *)((int)pvVar4 + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)pvVar4 + 0x50) + -8 + iVar2 * 8);
    pvStack_4 = *(void **)(*(int *)((int)pvVar4 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)pvVar4 + 0x90) = 6;
    FUN_004d4550(pvVar4);
    *(undefined4 *)((int)pvVar4 + 0x90) = 0;
    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,&uStack_14,&uStack_c,&fStack_10);
  if (iVar2 == 0) {
    *(undefined4 *)((int)pvVar4 + 0x90) = 0xe;
    FUN_004d4550(pvVar4);
    *(undefined4 *)((int)pvVar4 + 0x90) = 0;
    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
    return;
  }
  if (*(int *)((int)pvVar4 + 0x54) < *(int *)((int)pvVar4 + 0x58)) {
    iVar2 = *(int *)((int)pvVar4 + 0x54) + 1;
    *(int *)((int)pvVar4 + 0x54) = iVar2;
    uVar1 = *(uint *)(*(int *)((int)pvVar4 + 0x50) + -8 + iVar2 * 8);
    pvStack_4 = *(void **)(*(int *)((int)pvVar4 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)pvVar4 + 0x90) = 6;
    FUN_004d4550(pvVar4);
    *(undefined4 *)((int)pvVar4 + 0x90) = 0;
    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
    uVar1 = 0;
  }
  uVar1 = uVar1 & 0xff;
  if (uVar1 == 1) {
    pvVar4 = pvStack_4;
  }
  else if (uVar1 == 2) {
    pvVar4 = (void *)((int)pvStack_4 >> 8);
  }
  else {
    if (uVar1 != 4) {
LAB_00463ef3:
      FUN_00404ab0(pvVar4,0xe);
      return;
    }
    lVar5 = __ftol((float10)__BC(float, pvStack_4));
    pvVar4 = (void *)lVar5;
  }
  iVar2 = FUN_0045a620(&DAT_00579458,(int)pvVar4,(int *)&uStack_14,(int *)&vm);
  if (iVar2 != 0) {
    iVar2 = FUN_004a51c0(&DAT_005ae958,uStack_14,(int)vm);
    FUN_00407550(&DAT_005aa12c,(int)pvVar4,iVar2);
  }
  return;
#undef uStack_14
#undef fStack_10
#undef uStack_c
#undef uStack_8
#undef pvStack_4
}
