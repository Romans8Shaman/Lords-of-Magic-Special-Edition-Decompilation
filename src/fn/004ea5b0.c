/* Rebuilt from lomse.exe op_selectionbox @ 0x004ea5b0 (118 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_00492320 ((int (__fastcall *)(int *, undefined4, undefined4))0x00492320)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
unsigned lom_inreg_004ea5b0[2] __asm__("lom_inreg_004ea5b0");
void __cdecl lom_body_004ea5b0(void *vm) __asm__("lom_body_004ea5b0");

#define LOM_SELF_004ea5b0 1
__attribute__((naked)) void __cdecl rb_004ea5b0(void *vm)
{
  __asm__("movl %eax, lom_inreg_004ea5b0\n\tmovl %edx, lom_inreg_004ea5b0+4\n\tjmp lom_body_004ea5b0");
}

void __cdecl lom_body_004ea5b0(void *vm)
{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_EDX = (undefined4)*(unsigned *)((char *)lom_inreg_004ea5b0 + 4);
  undefined4 *puVar4;
  uchar _fr[0x220] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_auStack_218[134];
#define auStack_218 (*(_t_auStack_218 *)(_fr + 0x0))
  
  puVar4 = auStack_218;
  for (iVar2 = 0x86; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  iVar2 = FUN_00492320(&DAT_005a7b50,in_EDX,auStack_218);
  if (*(int *)((int)vm + 0x54) == 0) {
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    return;
  }
  iVar3 = *(int *)((int)vm + 0x54) + -1;
  *(int *)((int)vm + 0x54) = iVar3;
  iVar1 = *(int *)((int)vm + 0x50);
  *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
  *(int *)(iVar1 + 4 + iVar3 * 8) = iVar2;
  return;
#undef auStack_218
}
