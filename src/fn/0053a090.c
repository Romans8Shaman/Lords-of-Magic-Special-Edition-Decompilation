/* Rebuilt from lomse.exe FUN_0053a090 @ 0x0053a090 (104 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053cff0 ((int (__cdecl *)(int *, char *, uint *))0x0053cff0)
#define FUN_0053dd60 ((uint (__cdecl *)(uint, int *))0x0053dd60)

#define LOM_SELF_0053a090 1
int __cdecl rb_0053a090(undefined1 *param_1,char *param_2,uint param_3)

{
  int iVar1;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined1 * _t_local_20;
  typedef int _t_local_1c;
  typedef undefined1 * _t_local_18;
  typedef undefined4 _t_local_14;
#define local_20 (*(_t_local_20 *)(_fr + 0x0))
#define local_1c (*(_t_local_1c *)(_fr + 0x4))
#define local_18 (*(_t_local_18 *)(_fr + 0x8))
#define local_14 (*(_t_local_14 *)(_fr + 0xc))
  
  local_18 = param_1;
  local_20 = param_1;
  local_14 = 0x42;
  local_1c = 0x7fffffff;
  iVar1 = FUN_0053cff0((int *)&local_20,param_2,&param_3);
  local_1c = local_1c + -1;
  if (local_1c < 0) {
    FUN_0053dd60(0,(int *)&local_20);
    return iVar1;
  }
  *local_20 = 0;
  return iVar1;
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
}
