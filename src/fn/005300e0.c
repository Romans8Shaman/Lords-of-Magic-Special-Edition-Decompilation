/* Rebuilt from lomse.exe op_setcenteronmovement @ 0x005300e0 (190 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a8080 (*(undefined *)0x005a8080)
#define DAT_005aa254 (*(undefined4 *)0x005aa254)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_005300e0 1
void __cdecl rb_005300e0(void *vm)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  longlong lVar4;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_4;
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0x4))
  
  pfVar3 = (float *)(&DAT_005a8080 + DAT_005a7d8c * 0x400);
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar2 = 0;
  }
  uVar2 = uVar2 & 0xff;
  if (uVar2 == 1) {
    *pfVar3 = fStack_4;
  }
  else if (uVar2 == 2) {
    *pfVar3 = __BC(float, (__BC(int, fStack_4) >> 8));
  }
  else if (uVar2 == 4) {
    lVar4 = __ftol((float10)fStack_4);
    *pfVar3 = __BC(float, lVar4);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 0xe;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  DAT_005aa254 = *(undefined4 *)(&DAT_005a8080 + DAT_005a7d8c * 0x400);
  return;
#undef fStack_4
}
