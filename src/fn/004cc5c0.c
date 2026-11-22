/* Rebuilt from lomse.exe op_kill @ 0x004cc5c0 (121 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

/* register-held (not in _fr, see gen.py regvar_locals): piStack_4 */
#define FUN_004d2ac0 ((uint (__thiscall *)(void *, char, int *))0x004d2ac0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004cc5c0 1
void __cdecl rb_004cc5c0(void *vm)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int *piStack_4;

  /* else path leaves piStack_4 uninitialized (vanilla leftover register).
   * clang -O2 can delete the tail / pass garbage into 004d2ac0. */
  piStack_4 = (int *)0;
  cVar3 = '\0';
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    cVar3 = (char)*(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    piStack_4 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    cVar3 = '\0';
  }
  uVar2 = FUN_004d2ac0(vm,cVar3,piStack_4);
  if (uVar2 == 0) {
    *(undefined4 *)((int)vm + 0x90) = 0xe;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  return;
}
