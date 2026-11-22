/* Rebuilt from lomse.exe op_setuserproc @ 0x004e1da0 (270 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7bc4 (*(undefined *)0x005a7bc4)
#define DAT_005a7bc8 (*(undefined *)0x005a7bc8)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_setuserproc___no_such_procedure_i_005729dc (*(char (*)[])0x005729dc)

#define LOM_SELF_004e1da0 1
void __cdecl rb_004e1da0(void *vm)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_4;
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0x4))
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    uVar4 = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fVar2 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar3 = 0;
    fVar2 = fStack_4;
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 != 1) {
    if (uVar3 == 2) {
      fVar2 = __BC(float, (__BC(int, fVar2) >> 8));
    }
    else {
      if (uVar3 != 4) {
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
        return;
      }
      lVar5 = __ftol((float10)fVar2);
      fVar2 = __BC(float, lVar5);
    }
  }
  if ((__BC(int, fVar2) < 0) || (0x2c < __BC(int, fVar2))) {
    FUN_004d41c0(vm,s_setuserproc___no_such_procedure_i_005729dc);
    return;
  }
  *(undefined4 *)(&DAT_005a7bc4 + __BC(int, fVar2) * 8) = uVar4;
  *(float *)(&DAT_005a7bc8 + __BC(int, fVar2) * 8) = fStack_4;
  return;
#undef fStack_4
}
