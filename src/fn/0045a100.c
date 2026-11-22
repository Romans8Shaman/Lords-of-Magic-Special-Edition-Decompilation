/* Rebuilt from lomse.exe FUN_0045a100 @ 0x0045a100 (92 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae9c4 (*(int *)0x005ae9c4)
#define FUN_0045a360 ((undefined4 (__cdecl *)(int *, int *, char))0x0045a360)
#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)

#define LOM_SELF_0045a100 1
int __cdecl rb_0045a100(int param_1, int volatile param_2, int volatile param_3, undefined4 volatile param_4)

{
  int iVar1;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  local_4 = param_2;
  param_2 = param_3;
  FUN_0045a360(&local_4,&param_2,(char)param_4);
  iVar1 = FUN_004a51c0(&DAT_005ae958,local_4 + param_1 % DAT_005ae9c4,
                       param_2 + param_1 / DAT_005ae9c4);
  return iVar1;
#undef local_4
}
