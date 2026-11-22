/* Rebuilt from lomse.exe FUN_004ecdd0 @ 0x004ecdd0 (30 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004ecdf0 ((int (__stdcall *)(int, int, int, undefined4, int *))0x004ecdf0)

#define LOM_SELF_004ecdd0 1
void __stdcall rb_004ecdd0(int *volatile param_1)

{
  FUN_004ecdf0(*param_1,param_1[1],param_1[2],0xffffffff,(int *)&param_1);
  return;
}
