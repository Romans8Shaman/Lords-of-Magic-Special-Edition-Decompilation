/* Rebuilt from lomse.exe op_setdiplomaticbrain @ 0x004bf9b0 (172 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

/* register-held (not in _fr, see gen.py regvar_locals): uStack_4 */
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define _DAT_00584488 (*(undefined4 *)0x00584488)
#define _DAT_0058448c (*(undefined4 *)0x0058448c)
#define s_invalid_operand_type_00555764 (*(char (*)[])0x00555764)

#define LOM_SELF_004bf9b0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rb_004bf9b0(void *vm)

{
  int iVar1;
  uint uVar2;
  undefined4 uStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar2 = 0;
  }
  iVar1 = *(int *)((int)vm + 0x90);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  if (iVar1 == 0) {
    if (((char)uVar2 == '\x06') && ((uVar2 & 0x100) == 0)) goto LAB_004bfa3a;
    *(undefined4 *)((int)vm + 0x90) = 0x12;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  uVar2 = 0;
LAB_004bfa3a:
  _DAT_00584488 = uVar2;
  _DAT_0058448c = uStack_4;
  if ((char)uVar2 == '\0') {
    FUN_004d41c0(vm,s_invalid_operand_type_00555764);
  }
  return;
}
