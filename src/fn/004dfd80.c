/* Rebuilt from lomse.exe op_setelevation @ 0x004dfd80 (424 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, float *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004a59d0 ((undefined4 (__thiscall *)(void *, int, int, float))0x004a59d0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define _DAT_0054dd38 (*(double *)0x0054dd38)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_004dfd80 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rb_004dfd80(void *vm)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_18;
  typedef float _t_fStack_14;
  typedef uint _t_uStack_10;
  typedef void * _t_pvStack_c;
  typedef uint _t_uStack_8;
  typedef void * _t_pvStack_4;
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x0))
#define fStack_14 (*(_t_fStack_14 *)(_fr + 0x4))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x8))
#define pvStack_c (*(_t_pvStack_c *)(_fr + 0xc))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x10))
#define pvStack_4 (*(_t_pvStack_4 *)(_fr + 0x14))
  
  pvVar3 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar1 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    pvStack_c = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar1 = 0;
    pvStack_c = pvStack_4;
  }
  uVar1 = uVar1 & 0xff;
  if (uVar1 == 1) {
    vm = __BC(void *, (float)(int)pvStack_c);
  }
  else if (uVar1 == 2) {
    vm = __BC(void *, ((float)(int)pvStack_c * (float)_DAT_0054dd38));
  }
  else {
    if (uVar1 != 4) goto LAB_004dff19;
    vm = pvStack_c;
  }
  if (*(int *)((int)pvVar3 + 0x54) < *(int *)((int)pvVar3 + 0x58)) {
    iVar2 = *(int *)((int)pvVar3 + 0x54) + 1;
    *(int *)((int)pvVar3 + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)pvVar3 + 0x50) + -8 + iVar2 * 8);
    pvStack_4 = *(void **)(*(int *)((int)pvVar3 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)pvVar3 + 0x90) = 6;
    FUN_004d4550(pvVar3);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,&uStack_18,&uStack_10,&fStack_14);
  if (iVar2 == 0) {
    *(undefined4 *)((int)pvVar3 + 0x90) = 0xe;
    FUN_004d4550(pvVar3);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    return;
  }
  if (*(int *)((int)pvVar3 + 0x54) < *(int *)((int)pvVar3 + 0x58)) {
    iVar2 = *(int *)((int)pvVar3 + 0x54) + 1;
    *(int *)((int)pvVar3 + 0x54) = iVar2;
    uVar1 = *(uint *)(*(int *)((int)pvVar3 + 0x50) + -8 + iVar2 * 8);
    pvStack_4 = *(void **)(*(int *)((int)pvVar3 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)pvVar3 + 0x90) = 6;
    FUN_004d4550(pvVar3);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    uVar1 = 0;
  }
  uVar1 = uVar1 & 0xff;
  if (uVar1 == 1) {
    pvVar3 = pvStack_4;
  }
  else if (uVar1 == 2) {
    pvVar3 = (void *)((int)pvStack_4 >> 8);
  }
  else {
    if (uVar1 != 4) {
LAB_004dff19:
      FUN_00404ab0(pvVar3,0xe);
      return;
    }
    lVar4 = __ftol((float10)__BC(float, pvStack_4));
    pvVar3 = (void *)lVar4;
  }
  FUN_004a59d0(&DAT_005ae958,(int)pvVar3,uStack_18,__BC(float, vm));
  return;
#undef uStack_18
#undef fStack_14
#undef uStack_10
#undef pvStack_c
#undef uStack_8
#undef pvStack_4
}
