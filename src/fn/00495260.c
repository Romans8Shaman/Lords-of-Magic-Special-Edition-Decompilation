/* Rebuilt from lomse.exe FUN_00495260 @ 0x00495260 (46 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583648 (*(int *)0x00583648)
#define FUN_00494610 ((undefined4 (__fastcall *)(undefined4 *))0x00494610)
#define FUN_004952c0 ((undefined4 (__thiscall *)(void *, uint, int, int))0x004952c0)

#define LOM_SELF_00495260 1
undefined4 * __thiscall rb_00495260(void *this,uint param_1,int param_2)

{
  DAT_00583648 = DAT_00583648 + 0x20;
  FUN_00494610(this);
  FUN_004952c0(this,param_1,param_2,0);
  return this;
}
