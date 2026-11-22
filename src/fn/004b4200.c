/* Rebuilt from lomse.exe FUN_004b4200 @ 0x004b4200 (20 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00585408 (*(undefined4 *)0x00585408)
#define FUN_004b3620 ((bool (__thiscall *)(void *, LPCSTR, int))0x004b3620)

#define LOM_SELF_004b4200 1
void __fastcall rb_004b4200(int param_1)

{
  FUN_004b3620(&DAT_00585408,(LPCSTR)(param_1 + 0xfec),0);
  return;
}
