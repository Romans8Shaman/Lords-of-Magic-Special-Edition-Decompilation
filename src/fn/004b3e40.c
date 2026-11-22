/* Rebuilt from lomse.exe op_playmusicnorepeat @ 0x004b3e40 (187 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005863c8 (*(undefined4 *)0x005863c8)
#define DAT_005863e4 (*(undefined4 *)0x005863e4)
#define DAT_005867bc (*(int *)0x005867bc)
#define FUN_004b32c0 ((undefined4 (__fastcall *)(int *))0x004b32c0)
#define FUN_004b3580 ((undefined4 (__thiscall *)(void *, LPCSTR, int))0x004b3580)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004b3e40 1
void __cdecl rb_004b3e40(void *vm)

{
  int iVar1;
  char cVar2;
  LPCSTR pCStack_4;
  
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
    cVar2 = '\0';
    *(undefined4 *)((int)vm + 0xa4) = 0;
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
      pCStack_4 = (LPCSTR)0x0;
    }
  }
  else {
    pCStack_4 = (LPCSTR)0x0;
  }
  if (DAT_005867bc != 0) {
    FUN_004b32c0(&DAT_005863c8);
    DAT_005863e4 = 2;
    FUN_004b3580(&DAT_005863c8,pCStack_4,0);
  }
  return;
}
