/* Rebuilt from lomse.exe op_sendgameovercallbackmessage @ 0x004113f0 (300 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004111d0 ((undefined4 (__stdcall *)(undefined4 *, undefined4))0x004111d0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_invalid_arg_00555738 (*(char (*)[])0x00555738)
#define s_too_many_args_00555744 (*(char (*)[])0x00555744)

#define LOM_SELF_004113f0 1
void __cdecl rb_004113f0(void *vm)

{
  float *pfVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  longlong lVar7;
  uchar _fr[0x40] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_38;
  typedef uint _t_uStack_34;
  typedef float _t_fStack_30;
  typedef int _t_iStack_2c;
  typedef float _t_afStack_28[10];
#define fStack_38 (*(_t_fStack_38 *)(_fr + 0x0))
#define uStack_34 (*(_t_uStack_34 *)(_fr + 0x4))
#define fStack_30 (*(_t_fStack_30 *)(_fr + 0x8))
#define iStack_2c (*(_t_iStack_2c *)(_fr + 0xc))
#define afStack_28 (*(_t_afStack_28 *)(_fr + 0x10))
  
  puVar5 = &uStack_34;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  iStack_2c = 0;
  do {
    if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
      iVar3 = *(int *)((int)vm + 0x54) + 1;
      *(int *)((int)vm + 0x54) = iVar3;
      uVar6 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
      fStack_38 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
    }
    else {
      *(undefined4 *)((int)vm + 0x90) = 6;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      uVar6 = 0;
    }
    uVar4 = uVar6 & 0xff;
    if (uVar4 == 0) {
      return;
    }
    if ((uVar4 != 5) || ((uVar6 & 0x100) != 0)) {
      if (9 < iStack_2c) {
        FUN_004d41c0(vm,s_too_many_args_00555744);
        return;
      }
      pfVar1 = afStack_28 + iStack_2c;
      if (uVar4 == 1) {
        *pfVar1 = fStack_38;
      }
      else if (uVar4 == 2) {
        *pfVar1 = __BC(float, (__BC(int, fStack_38) >> 8));
      }
      else {
        if (uVar4 != 4) {
          FUN_004d41c0(vm,s_invalid_arg_00555738);
          return;
        }
        lVar7 = __ftol((float10)fStack_38);
        *pfVar1 = __BC(float, lVar7);
      }
      iStack_2c = iStack_2c + 1;
    }
    if ((uVar4 == 5) && ((uVar6 & 0x100) == 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
  } while (!bVar2);
  uStack_34 = uVar6;
  fStack_30 = fStack_38;
  FUN_004111d0(&uStack_34,1);
  return;
#undef fStack_38
#undef uStack_34
#undef fStack_30
#undef iStack_2c
#undef afStack_28
}
