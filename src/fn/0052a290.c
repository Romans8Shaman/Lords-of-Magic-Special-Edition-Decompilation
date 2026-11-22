/* Rebuilt from lomse.exe op_changeunitmovementpoints @ 0x0052a290 (241 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0041bf10 ((undefined4 (__cdecl *)(void *, int *, int *))0x0041bf10)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_0052a290 1
void __cdecl rb_0052a290(void *vm)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  longlong lVar6;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_aiStack_c[2];
  typedef void * _t_pvStack_4;
#define aiStack_c (*(_t_aiStack_c *)(_fr + 0x4))
#define pvStack_4 (*(_t_pvStack_4 *)(_fr + 0xc))
  
  pvVar2 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uVar5 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    pvStack_4 = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    uVar5 = 0;
  }
  uVar5 = uVar5 & 0xff;
  if (uVar5 == 1) {
    pvVar4 = pvStack_4;
  }
  else if (uVar5 == 2) {
    pvVar4 = (void *)((int)pvStack_4 >> 8);
  }
  else if (uVar5 == 4) {
    lVar6 = __ftol((float10)__BC(float, pvStack_4));
    pvVar4 = (void *)lVar6;
  }
  else {
    *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    pvVar4 = vm;
  }
  iVar3 = FUN_0041bf10(pvVar2,aiStack_c,(int *)&vm);
  if (iVar3 != 0) {
    *(int *)(aiStack_c[0] + 0xd0 + (int)vm * 0x4c) =
         *(int *)(aiStack_c[0] + 0xd0 + (int)vm * 0x4c) + (int)pvVar4;
    piVar1 = (int *)(aiStack_c[0] + 0xd0 + (int)vm * 0x4c);
    if (*piVar1 < 0) {
      *piVar1 = 0;
    }
  }
  return;
#undef aiStack_c
#undef pvStack_4
}
