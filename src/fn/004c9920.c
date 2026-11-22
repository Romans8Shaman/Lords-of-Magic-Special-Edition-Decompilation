/* Rebuilt from lomse.exe FUN_004c9920 @ 0x004c9920 (15 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_00505110 ((char * (__thiscall *)(void *, int, uint))0x00505110)

#define LOM_SELF_004c9920 1
char * __stdcall rb_004c9920(void)

{
  char *pcVar1;
  
  pcVar1 = FUN_00505110(&DAT_00584ae8,1,0xffffffff);
  return pcVar1;
}
