/* Rebuilt from lomse.exe op_setcombatmusicpath @ 0x004b42f0 (144 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

/* register-held (not in _fr, see gen.py regvar_locals): uStack_4 */
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define _DAT_0058679c (*(undefined4 *)0x0058679c)

#define LOM_SELF_004b42f0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rb_004b42f0(void *vm)

{
  int iVar1;
  char cVar2;
  undefined4 uStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    cVar2 = (char)*(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    cVar2 = '\0';
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  iVar1 = *(int *)((int)vm + 0x90);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  if (iVar1 == 0) {
    if (cVar2 == '\b') {
      _DAT_0058679c = uStack_4;
      return;
    }
    *(undefined4 *)((int)vm + 0x90) = 0xe;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  _DAT_0058679c = 0;
  return;
}
