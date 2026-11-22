/* Rebuilt from lomse.exe FUN_0041ea80 @ 0x0041ea80 (43 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_0041efa0 ((undefined4 (__thiscall *)(void *, uint))0x0041efa0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)

#define LOM_SELF_0041ea80 1
undefined4 __stdcall rb_0041ea80(int *param_1)

{
  void *this;
  
  this = (void *)FUN_00482ac0(&DAT_005aa12c,*param_1,0);
  if (this == (void *)0x0) {
    return 0;
  }
  FUN_0041efa0(this,8);
  return 1;
}
