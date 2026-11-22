/* Rebuilt from lomse.exe FUN_00484030 @ 0x00484030 (32 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd358 (*(undefined *)0x005cd358)
#define FUN_004b7760 ((undefined4 (__thiscall *)(void *, int, undefined1, int))0x004b7760)

#define LOM_SELF_00484030 1
undefined4 __stdcall rb_00484030(int param_1)

{
  FUN_004b7760(&DAT_005cd358,(uint)*(byte *)(param_1 + 2),0,0);
  return 1;
}
