/* Rebuilt from lomse.exe op_spellrequest @ 0x004ef540 (104 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

/* register-held (not in _fr, see gen.py regvar_locals): uStack_4 */
#define DAT_00584c1c (*(undefined4 *)0x00584c1c)
#define DAT_005ccff4 (*(undefined *)0x005ccff4)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004ef4f0 ((undefined4 (__fastcall *)(undefined4 *, undefined4, undefined4, undefined4, undefined4))0x004ef4f0)

#define LOM_SELF_004ef540 1
void __cdecl rb_004ef540(void *vm)

{
  int iVar1;
  undefined4 unused_stack_4;
  int unused_reg_1;
  undefined4 uStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    unused_reg_1 = *(int *)((int)vm + 0x50);
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    unused_stack_4 = *(undefined4 *)(unused_reg_1 + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(unused_reg_1 + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    unused_stack_4 = 0;
    unused_reg_1 = 0;
  }
  if ((char)unused_stack_4 != '\0') {
    FUN_004ef4f0((undefined4 *)&DAT_005ccff4,unused_reg_1,&DAT_00584c1c,unused_stack_4,uStack_4);
  }
  return;
}
