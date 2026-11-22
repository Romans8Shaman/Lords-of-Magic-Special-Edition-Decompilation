/* Rebuilt from lomse.exe op_setcomputername @ 0x004b89e0 (183 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

/* register-held (not in _fr, see gen.py regvar_locals): pcStack_4 */
#define DAT_005d1e84 (*(void * *)0x005d1e84)
#define FUN_004b80a0 ((undefined4 (__thiscall *)(void *, char *, int))0x004b80a0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_SetComputerName_failed_0055d4a0 (*(char (*)[])0x0055d4a0)

#define LOM_SELF_004b89e0 1
void __cdecl rb_004b89e0(void *vm)

{
  int iVar1;
  char cVar2;
  char *pcStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    cVar2 = (char)*(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    pcStack_4 = *(char **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
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
    if (cVar2 == '\b') goto LAB_004b8a65;
    *(undefined4 *)((int)vm + 0x90) = 0xe;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  pcStack_4 = (char *)0x0;
LAB_004b8a65:
  if (pcStack_4 != (char *)0x0) {
    if (DAT_005d1e84 == (void *)0x0) {
      iVar1 = 1;
    }
    else {
      iVar1 = FUN_004b80a0(DAT_005d1e84,pcStack_4,0);
    }
    if (iVar1 == 0) {
      FUN_004d41c0(vm,s_SetComputerName_failed_0055d4a0);
    }
  }
  return;
}
