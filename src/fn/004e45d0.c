/* Rebuilt from lomse.exe op_locktest @ 0x004e45d0 (438 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00585170 (*(int * *)0x00585170)
#define DAT_00585238 (*(undefined *)0x00585238)
#define DAT_0058525c (*(undefined4 *)0x0058525c)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, float *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define GetTickCount (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d0e8) /* KERNEL32.DLL!GetTickCount via IAT */
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_004e45d0 1
void __cdecl rb_004e45d0(void *vm)

{
  void *pvVar1;
  int iVar2;
  DWORD DVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
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
  
  pvVar1 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar4 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    pvStack_4 = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
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
    vm = pvStack_4;
  }
  else if (uVar4 == 2) {
    vm = (void *)((int)pvStack_4 >> 8);
  }
  else {
    if (uVar4 != 4) {
      FUN_00404ab0(vm,0xe);
      return;
    }
    lVar6 = __ftol((float10)__BC(float, pvStack_4));
    vm = (void *)lVar6;
  }
  if (*(int *)((int)pvVar1 + 0x54) < *(int *)((int)pvVar1 + 0x58)) {
    iVar2 = *(int *)((int)pvVar1 + 0x54) + 1;
    *(int *)((int)pvVar1 + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)pvVar1 + 0x50) + -8 + iVar2 * 8);
    pvStack_4 = *(void **)(*(int *)((int)pvVar1 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)pvVar1 + 0x90) = 6;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,&uStack_14,&uStack_c,&fStack_10);
  if (iVar2 == 0) {
    *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
  }
  else {
    fStack_10 = __BC(float, GetTickCount());
    iVar2 = 0;
    if (0 < (int)uStack_14) {
      do {
        if (vm != (void *)0x0) {
          ((undefined4 (__stdcall *)(__typeof__(DAT_00585170), __typeof__(0), __typeof__(&DAT_00585238), __typeof__(1), __typeof__(0)))(**(code **)(*DAT_00585170 + 100)))(DAT_00585170,0,&DAT_00585238,1,0);
          ((undefined4 (__thiscall *)(__typeof__(DAT_00585170), __typeof__(DAT_00585170), __typeof__(DAT_0058525c)))(**(code **)(*DAT_00585170 + 0x80)))(DAT_00585170,DAT_00585170,DAT_0058525c);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)uStack_14);
    }
    DVar3 = GetTickCount();
    if (*(int *)((int)pvVar1 + 0x54) != 0) {
      iVar5 = *(int *)((int)pvVar1 + 0x54) + -1;
      *(int *)((int)pvVar1 + 0x54) = iVar5;
      iVar2 = *(int *)((int)pvVar1 + 0x50);
      *(undefined4 *)(iVar2 + iVar5 * 8) = 1;
      *(DWORD *)(iVar2 + 4 + iVar5 * 8) = DVar3 - __BC(int, fStack_10);
      return;
    }
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
  }
  FUN_004d4550(pvVar1);
  *(undefined4 *)((int)pvVar1 + 0x90) = 0;
  *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  return;
#undef uStack_14
#undef fStack_10
#undef uStack_c
#undef uStack_8
#undef pvStack_4
}
