/* Rebuilt from lomse.exe op_enableallspells @ 0x004f0640 (42 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aee6c (*(undefined4 *)0x005aee6c)
#define DAT_005aee70 (*(int *)0x005aee70)
#define FUN_004efe80 ((int (__thiscall *)(void *, int))0x004efe80)

#define LOM_SELF_004f0640 1
void __cdecl rb_004f0640(void)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_005aee70) {
    do {
      puVar1 = (uint *)FUN_004efe80(&DAT_005aee6c,iVar2);
      if (puVar1 != (uint *)0x0) {
        *puVar1 = *puVar1 & 0xfffffffb;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_005aee70);
  }
  return;
}
