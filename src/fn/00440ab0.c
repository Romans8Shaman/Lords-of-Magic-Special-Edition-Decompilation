/* Rebuilt from lomse.exe op_setbuildingdata @ 0x00440ab0 (328 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0043db60 ((undefined4 (__thiscall *)(void *, void *, int))0x0043db60)
#define FUN_004409e0 ((undefined4 (__cdecl *)(void *, undefined4 *))0x004409e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_00440ab0 1
void __cdecl rb_00440ab0(void *vm)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *pvVar6;
  longlong lVar7;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef void * _t_apvStack_c[2];
  typedef void * _t_pvStack_4;
#define apvStack_c (*(_t_apvStack_c *)(_fr + 0x4))
#define pvStack_4 (*(_t_pvStack_4 *)(_fr + 0xc))
  
  pvVar1 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar5 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    pvVar6 = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar5 = 0;
    pvVar6 = pvStack_4;
  }
  if ((char)uVar5 != '\0') {
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
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
        return;
      }
      lVar7 = __ftol((float10)__BC(float, pvStack_4));
      vm = (void *)lVar7;
    }
    iVar2 = FUN_004409e0(pvVar1,apvStack_c);
    if (iVar2 != 0) {
      if (*(int *)((int)pvVar1 + 0x54) == 0) {
        *(undefined4 *)((int)pvVar1 + 0x90) = 3;
        FUN_004d4550(pvVar1);
        *(undefined4 *)((int)pvVar1 + 0x90) = 0;
        *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
      }
      else {
        iVar2 = *(int *)((int)pvVar1 + 0x50);
        iVar3 = *(int *)((int)pvVar1 + 0x54) + -1;
        *(int *)((int)pvVar1 + 0x54) = iVar3;
        *(undefined4 *)(iVar2 + iVar3 * 8) = uVar5;
        *(void **)(iVar2 + 4 + iVar3 * 8) = pvVar6;
      }
      FUN_0043db60(apvStack_c[0],pvVar1,(int)vm);
    }
  }
  return;
#undef apvStack_c
#undef pvStack_4
}
