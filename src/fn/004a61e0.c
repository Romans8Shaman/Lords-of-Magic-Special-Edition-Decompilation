/* Rebuilt from lomse.exe FUN_004a61e0 @ 0x004a61e0 (28 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005876d0 (*(undefined4 *)0x005876d0)
#define FUN_00519da0 ((undefined4 (__thiscall *)(void *, int, int, int *))0x00519da0)

#define LOM_SELF_004a61e0 1
undefined4 __stdcall rb_004a61e0(int volatile param_1, int volatile param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00519da0(&DAT_005876d0,param_1,param_2,&param_1);
  return uVar1;
}
