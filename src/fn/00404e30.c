/* Rebuilt from lomse.exe FUN_00404e30 @ 0x00404e30 (40 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_00404e60 ((undefined4 (__thiscall *)(void *, int, undefined4))0x00404e60)
#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)

#define LOM_SELF_00404e30 1
void __thiscall rb_00404e30(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_004a51c0(&DAT_005ae958,param_2,param_3);
  FUN_00404e60(this,param_1,iVar1);
  return;
}
