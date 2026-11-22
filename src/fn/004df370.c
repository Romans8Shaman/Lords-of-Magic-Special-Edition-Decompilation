/* Rebuilt from lomse.exe op_combattileset @ 0x004df370 (154 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

/* register-held (not in _fr, see gen.py regvar_locals): iStack_4 */
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_004849a0 ((undefined4 (__thiscall *)(void *, undefined4))0x004849a0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004df370 1
void __cdecl rb_004df370(void *vm)

{
  int iVar1;
  char cVar2;
  int iStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    cVar2 = (char)*(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    iStack_4 = *(int *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
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
    if (cVar2 == '\b') goto LAB_004df3f5;
    *(undefined4 *)((int)vm + 0x90) = 0xe;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  iStack_4 = 0;
LAB_004df3f5:
  if (iStack_4 != 0) {
    FUN_004849a0(&DAT_005aa12c,iStack_4);
  }
  return;
}
