/* Rebuilt from lomse.exe op_playerbarterattack @ 0x00434000 (244 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584cd4 (*(undefined4 *)0x00584cd4)
#define FUN_00431a10 ((undefined4 (__stdcall *)(undefined4 *))0x00431a10)
#define FUN_00432310 ((undefined4 (__thiscall *)(void *, int, int))0x00432310)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_command_failed_00555ff0 (*(char (*)[])0x00555ff0)

#define LOM_SELF_00434000 1
void __cdecl rb_00434000(void *vm)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  uchar _fr[0x88] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_80;
  typedef undefined4 _t_auStack_7c[31];
#define fStack_80 (*(_t_fStack_80 *)(_fr + 0x0))
#define auStack_7c (*(_t_auStack_7c *)(_fr + 0x4))
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_80 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar2 = 0;
  }
  uVar2 = uVar2 & 0xff;
  if (uVar2 != 1) {
    if (uVar2 == 2) {
      fStack_80 = __BC(float, (__BC(int, fStack_80) >> 8));
    }
    else {
      if (uVar2 != 4) {
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
        return;
      }
      lVar5 = __ftol((float10)fStack_80);
      fStack_80 = __BC(float, lVar5);
    }
  }
  puVar3 = &DAT_00584cd4;
  puVar4 = auStack_7c;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar1 = FUN_00432310(&DAT_00584cd4,__BC(int, fStack_80),0);
  if (iVar1 == 0) {
    FUN_004d41c0(vm,s_command_failed_00555ff0);
  }
  else {
    FUN_00431a10(&DAT_00584cd4);
  }
  puVar3 = auStack_7c;
  puVar4 = &DAT_00584cd4;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return;
#undef fStack_80
#undef auStack_7c
}
