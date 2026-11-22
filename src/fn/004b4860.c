/* Rebuilt from lomse.exe op_getnumaiplayers @ 0x004b4860 (113 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa64c (*(undefined *)0x005aa64c)
#define FUN_004b1db0 ((undefined * (__thiscall *)(void *, undefined1))0x004b1db0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004b4860 1
void __cdecl rb_004b4860(void *vm)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined *puVar5;
  int iVar6;
  
  pcVar4 = FUN_004b1db0(&DAT_005aa64c,1);
  cVar1 = *pcVar4;
  puVar5 = FUN_004b1db0(&DAT_005aa64c,1);
  cVar2 = puVar5[4];
  if (*(int *)((int)vm + 0x54) == 0) {
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    return;
  }
  iVar6 = *(int *)((int)vm + 0x54) + -1;
  *(int *)((int)vm + 0x54) = iVar6;
  iVar3 = *(int *)((int)vm + 0x50);
  *(undefined4 *)(iVar3 + iVar6 * 8) = 1;
  *(int *)(iVar3 + 4 + iVar6 * 8) = (int)cVar1 * (int)cVar2;
  return;
}
