/* Rebuilt from lomse.exe op_begin @ 0x004ca070 (148 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

/* register-held (not in _fr, see gen.py regvar_locals): uStack_4 */
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004ca070 1
void __cdecl rb_004ca070(void *vm)

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
    *(undefined4 *)((int)vm + 0xa4) = 0;
    cVar2 = '\0';
  }
  if (cVar2 == '\a') {
    if (*(int *)((int)vm + 0x60) != 0) {
      iVar1 = *(int *)((int)vm + 0x60) + -1;
      *(int *)((int)vm + 0x60) = iVar1;
      *(undefined4 *)(*(int *)((int)vm + 0x5c) + iVar1 * 4) = uStack_4;
      return;
    }
    *(undefined4 *)((int)vm + 0x90) = 4;
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 0xe;
  }
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
}
