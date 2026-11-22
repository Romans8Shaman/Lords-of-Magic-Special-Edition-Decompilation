/* Rebuilt from lomse.exe op_updatespellsusedincombat @ 0x004a1c70 (118 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa7d4 (*(int *)0x005aa7d4)
#define DAT_005aadb0 (*(int *)0x005aadb0)
#define DAT_005b076c (*(undefined4 *)0x005b076c)
#define FUN_004a1a30 ((undefined4 (__fastcall *)(int))0x004a1a30)

#define LOM_SELF_004a1c70 1
void __cdecl rb_004a1c70(void *vm)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = false;
  bVar2 = false;
  if (((*(byte *)(&DAT_005b076c + DAT_005aa7d4 * 0x761) & 1) != 0) && (DAT_005aa7d4 != 0xf)) {
    bVar1 = true;
  }
  if (((*(byte *)(&DAT_005b076c + DAT_005aadb0 * 0x761) & 1) != 0) && (DAT_005aadb0 != 0xf)) {
    bVar2 = true;
  }
  if ((bVar1) && (bVar2)) {
    FUN_004a1a30(0x5aa12c);
  }
  return;
}
