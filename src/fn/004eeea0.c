/* Rebuilt from lomse.exe op_changecombatmap @ 0x004eeea0 (303 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_004604f0 ((undefined4 (__fastcall *)(int))0x004604f0)
#define FUN_004a4be0 ((int (__thiscall *)(void *, undefined4))0x004a4be0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004eede0 ((undefined4 (__thiscall *)(void *, LPCSTR))0x004eede0)

#define LOM_SELF_004eeea0 1
void __cdecl rb_004eeea0(void *vm)

{
  int iVar1;
  char cVar2;
  LPCSTR in_stack_4;
  LPCSTR pCStack_4;

  /* else path of a VM pop leaves this register-held local uninitialized
   * (vanilla leftover). clang -O2 can substitute a callee return or drop
   * later uses. Zero it so the leftover path is defined. */
  pCStack_4 = (LPCSTR)0;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    cVar2 = (char)*(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    in_stack_4 = *(LPCSTR *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    cVar2 = '\0';
    *(undefined4 *)((int)vm + 0xa4) = 0;
    in_stack_4 = pCStack_4;
  }
  iVar1 = *(int *)((int)vm + 0x90);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  if (iVar1 == 0) {
    if (cVar2 != '\b') {
      *(undefined4 *)((int)vm + 0x90) = 0xe;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      in_stack_4 = (LPCSTR)0x0;
    }
  }
  else {
    in_stack_4 = (LPCSTR)0x0;
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    cVar2 = (char)*(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    pCStack_4 = *(LPCSTR *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    cVar2 = '\0';
  }
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  if (cVar2 != '\b') {
    *(undefined4 *)((int)vm + 0x90) = 0xe;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    pCStack_4 = (LPCSTR)0x0;
  }
  if (in_stack_4 != (LPCSTR)0x0) {
    FUN_004a4be0(&DAT_005ae958,in_stack_4);
  }
  if (pCStack_4 != (LPCSTR)0x0) {
    FUN_004eede0(&DAT_005aa12c,pCStack_4);
    FUN_004604f0(0x5aa12c);
  }
  return;
}
