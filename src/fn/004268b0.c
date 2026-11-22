/* Rebuilt from lomse.exe op_needhealing_q @ 0x004268b0 (344 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0041bf10 ((undefined4 (__cdecl *)(void *, int *, int *))0x0041bf10)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00522000 ((undefined4 (__thiscall *)(void *, int *, int *))0x00522000)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_004268b0 1
void __cdecl rb_004268b0(void *vm)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  longlong lVar6;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_14;
  typedef int _t_iStack_10;
  typedef int _t_aiStack_c[2];
  typedef float _t_fStack_4;
#define iStack_14 (*(_t_iStack_14 *)(_fr + 0x4))
#define iStack_10 (*(_t_iStack_10 *)(_fr + 0x8))
#define aiStack_c (*(_t_aiStack_c *)(_fr + 0xc))
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0x14))
  
  pvVar1 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar4 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    uVar4 = 0;
  }
  uVar4 = uVar4 & 0xff;
  if (uVar4 == 1) {
    fVar5 = fStack_4;
  }
  else if (uVar4 == 2) {
    fVar5 = __BC(float, (__BC(int, fStack_4) >> 8));
  }
  else {
    if (uVar4 != 4) {
      FUN_00404ab0(pvVar1,0xe);
      return;
    }
    lVar6 = __ftol((float10)fStack_4);
    fVar5 = __BC(float, lVar6);
  }
  iVar2 = FUN_0041bf10(pvVar1,&iStack_14,(int *)&vm);
  if (iVar2 != 0) {
    FUN_00522000((void *)(iStack_14 + 0xc4 + (int)vm * 0x4c),&iStack_10,aiStack_c);
    pvVar1 = DAT_005a7b78;
    if ((iStack_10 * 100) / aiStack_c[0] < __BC(int, fVar5)) {
      if (*(int *)((int)DAT_005a7b78 + 0x54) != 0) {
        iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
        iVar2 = *(int *)((int)pvVar1 + 0x50);
        *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
        *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0xffffffff;
        return;
      }
    }
    else if (*(int *)((int)DAT_005a7b78 + 0x54) != 0) {
      iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
      iVar2 = *(int *)((int)pvVar1 + 0x50);
      *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
      *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0;
      return;
    }
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  return;
#undef iStack_14
#undef iStack_10
#undef aiStack_c
#undef fStack_4
}
