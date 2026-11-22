/* Rebuilt from lomse.exe FUN_0053c770 @ 0x0053c770 (115 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053c7f0 ((undefined1 * (__cdecl *)(undefined1 *, int, int, int *, char))0x0053c7f0)
#define FUN_00544120 ((undefined4 (__cdecl *)(char *, int, int))0x00544120)
#define FUN_005441c0 ((int * (__cdecl *)(uint, undefined4, int *, char *))0x005441c0)

#define LOM_SELF_0053c770 1
undefined1 * __cdecl rb_0053c770(uint *param_1,undefined1 *param_2,int param_3,int param_4)

{
  uchar _fr[0x30] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_28[4];
  typedef char _t_local_18[24];
#define local_28 (*(_t_local_28 *)(_fr + 0x0))
#define local_18 (*(_t_local_18 *)(_fr + 0x10))
  
  FUN_005441c0(*param_1,param_1[1],local_28,local_18);
  FUN_00544120(param_2 + (uint)(local_28[0] == 0x2d) + (uint)(0 < param_3),param_3 + 1,(int)local_28
              );
  FUN_0053c7f0(param_2,param_3,param_4,local_28,'\0');
  return param_2;
#undef local_28
#undef local_18
}
