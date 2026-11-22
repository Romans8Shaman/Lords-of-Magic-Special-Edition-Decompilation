/* Rebuilt from lomse.exe FUN_004b9250 @ 0x004b9250 (24 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd358 (*(undefined *)0x005cd358)
#define FUN_004b6be0 ((undefined4 (__thiscall *)(void *, int, int))0x004b6be0)

#define LOM_SELF_004b9250 1
void __stdcall rb_004b9250(int *param_1)

{
  FUN_004b6be0(&DAT_005cd358,*param_1,param_1[1]);
  return;
}
