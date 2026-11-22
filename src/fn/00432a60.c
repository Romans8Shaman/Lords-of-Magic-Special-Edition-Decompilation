/* Rebuilt from lomse.exe FUN_00432a60 @ 0x00432a60 (33 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define FUN_00432a90 ((int (__thiscall *)(void *, int, int, int))0x00432a90)

#define LOM_SELF_00432a60 1
int __thiscall rb_00432a60(void *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00432a90(this,*(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400),param_1,param_2);
  return iVar1;
}
