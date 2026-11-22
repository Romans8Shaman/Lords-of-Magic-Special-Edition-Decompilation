/* Rebuilt from lomse.exe FUN_0053c8f0 @ 0x0053c8f0 (102 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053c960 ((char * (__cdecl *)(char *, uint, int *, char))0x0053c960)
#define FUN_00544120 ((undefined4 (__cdecl *)(char *, int, int))0x00544120)
#define FUN_005441c0 ((int * (__cdecl *)(uint, undefined4, int *, char *))0x005441c0)

#define LOM_SELF_0053c8f0 1
char * __cdecl rb_0053c8f0(uint *param_1,char *param_2,uint param_3)

{
  uchar _fr[0x30] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_28;
  typedef int _t_local_24;
  typedef char _t_local_18[24];
#define local_28 (*(_t_local_28 *)(_fr + 0x0))
#define local_24 (*(_t_local_24 *)(_fr + 0x4))
#define local_18 (*(_t_local_18 *)(_fr + 0x10))
  
  FUN_005441c0(*param_1,param_1[1],&local_28,local_18);
  FUN_00544120(param_2 + (local_28 == 0x2d),local_24 + param_3,(int)&local_28);
  FUN_0053c960(param_2,param_3,&local_28,'\0');
  return param_2;
#undef local_28
#undef local_24
#undef local_18
}
