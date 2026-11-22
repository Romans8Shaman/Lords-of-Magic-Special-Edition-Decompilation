/* Rebuilt from lomse.exe FUN_004c5e90 @ 0x004c5e90 (35 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)
#define FUN_004c5e60 ((uint (__thiscall *)(void *, int))0x004c5e60)

#define LOM_SELF_004c5e90 1
void __thiscall rb_004c5e90(void *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_004a51c0(&DAT_005ae958,param_1,param_2);
  FUN_004c5e60(this,iVar1);
  return;
}
