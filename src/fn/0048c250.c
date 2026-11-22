/* Rebuilt from lomse.exe FUN_0048c250 @ 0x0048c250 (82 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583580 (*(int *)0x00583580)
#define DAT_00583584 (*(int *)0x00583584)
#define DAT_005aa64c (*(undefined *)0x005aa64c)
#define FUN_004b1db0 ((undefined * (__thiscall *)(void *, undefined1))0x004b1db0)

#define LOM_SELF_0048c250 1
uint __cdecl rb_0048c250(int param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  undefined *puVar4;
  
  if ((param_1 == DAT_00583580) || (param_1 == DAT_00583584)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  if (uVar2 == 0) {
    pcVar3 = FUN_004b1db0(&DAT_005aa64c,8);
    cVar1 = *pcVar3;
    puVar4 = FUN_004b1db0(&DAT_005aa64c,8);
    uVar2 = (uint)((int)cVar1 * (int)(char)puVar4[4] != 0);
  }
  return uVar2;
}
