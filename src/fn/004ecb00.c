/* Rebuilt from lomse.exe op_getslider @ 0x004ecb00 (298 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_00492790 ((int (__thiscall *)(void *, int))0x00492790)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_getslider__no_slider_with_that_i_005730b0 (*(char (*)[])0x005730b0)

#define LOM_SELF_004ecb00 1
void __cdecl rb_004ecb00(void *vm)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  longlong lVar8;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_4;
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0x4))
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uVar6 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar6 = 0;
  }
  iVar3 = 0;
  uVar6 = uVar6 & 0xff;
  if (uVar6 != 1) {
    if (uVar6 == 2) {
      fStack_4 = __BC(float, (__BC(int, fStack_4) >> 8));
    }
    else {
      if (uVar6 != 4) {
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
        return;
      }
      lVar8 = __ftol((float10)fStack_4);
      fStack_4 = __BC(float, lVar8);
    }
  }
  piVar4 = (int *)FUN_00492790(&DAT_005a7b50,__BC(int, fStack_4));
  if (piVar4 == (int *)0x0) {
    FUN_004d41c0(vm,s_getslider__no_slider_with_that_i_005730b0);
    return;
  }
  if (-1 < *piVar4) {
    piVar7 = piVar4 + 5;
    do {
      iVar1 = *piVar7;
      if (*(int *)((int)vm + 0x54) == 0) {
        *(undefined4 *)((int)vm + 0x90) = 3;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
      }
      else {
        iVar2 = *(int *)((int)vm + 0x50);
        iVar5 = *(int *)((int)vm + 0x54) + -1;
        *(int *)((int)vm + 0x54) = iVar5;
        *(undefined4 *)(iVar2 + iVar5 * 8) = 1;
        *(int *)(iVar2 + 4 + iVar5 * 8) = iVar1;
      }
      iVar3 = iVar3 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar3 <= *piVar4);
  }
  return;
#undef fStack_4
}
