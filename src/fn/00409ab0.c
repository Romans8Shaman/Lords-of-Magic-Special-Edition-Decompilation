/* Rebuilt from lomse.exe op_resetcombatflag @ 0x00409ab0 (214 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae98c (*(int *)0x005ae98c)
#define DAT_005ae998 (*(int *)0x005ae998)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004176d0 ((undefined4 (__thiscall *)(void *, int))0x004176d0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_00409ab0 1
void __cdecl rb_00409ab0(void *vm)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  longlong lVar6;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef void * _t_pvStack_4;
#define pvStack_4 (*(_t_pvStack_4 *)(_fr + 0x4))
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uVar5 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    pvStack_4 = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar5 = 0;
  }
  uVar5 = uVar5 & 0xff;
  iVar3 = DAT_005ae98c;
  iVar1 = DAT_005ae998;
  pvVar4 = pvStack_4;
  if (uVar5 != 1) {
    if (uVar5 == 2) {
      pvVar4 = (void *)((int)pvStack_4 >> 8);
    }
    else {
      if (uVar5 != 4) {
        FUN_00404ab0(vm,0xe);
        return;
      }
      lVar6 = __ftol((float10)__BC(float, pvStack_4));
      iVar3 = DAT_005ae98c;
      iVar1 = DAT_005ae998;
      pvVar4 = (void *)lVar6;
    }
  }
  for (; vm = pvVar4, iVar2 = DAT_005ae98c, iVar1 <= DAT_005ae98c; iVar1 = iVar1 + 1) {
    DAT_005ae98c = iVar3;
    pvVar4 = (void *)FUN_004f6000(&DAT_005ae974,iVar1);
    if (((pvVar4 != (void *)0x0) && (*(int *)((int)pvVar4 + 4) == 0)) &&
       (*(void **)((int)pvVar4 + 0x48) == vm)) {
      FUN_004176d0(pvVar4,0);
      *(undefined1 *)((int)pvVar4 + 0x78) = 0;
    }
    iVar3 = DAT_005ae98c;
    pvVar4 = vm;
    DAT_005ae98c = iVar2;
  }
  DAT_005ae98c = iVar3;
  return;
#undef pvStack_4
}
