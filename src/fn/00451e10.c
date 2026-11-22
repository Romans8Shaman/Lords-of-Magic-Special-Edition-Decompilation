/* Rebuilt from lomse.exe FUN_00451e10 @ 0x00451e10 (55 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00451d30 ((undefined4 (__thiscall *)(void *, int, int))0x00451d30)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)

#define LOM_SELF_00451e10 1
undefined4 __stdcall rb_00451e10(int *param_1)

{
  int iVar1;
  int iVar2;
  void *this;
  
  iVar1 = param_1[1];
  iVar2 = param_1[2];
  this = (void *)FUN_00482ac0(&DAT_005aa12c,*param_1,3);
  if (this == (void *)0x0) {
    return 0;
  }
  FUN_00451d30(this,iVar1,iVar2);
  return 1;
}
