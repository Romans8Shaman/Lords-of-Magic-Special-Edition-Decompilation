/* Rebuilt from lomse.exe FUN_004a5390 @ 0x004a5390 (111 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)
#define FUN_0053a140 ((int (__cdecl *)(int *, int, DWORD))0x0053a140)

#define LOM_SELF_004a5390 1
undefined4 __stdcall rb_004a5390(int *volatile param_1)

{
  int *piVar1;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_8;
  typedef char _t_local_4[4];
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  piVar1 = param_1;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  FUN_005397f0((char *)&local_8,4,1,param_1);
  FUN_005397f0((char *)&param_1,4,1,piVar1);
  FUN_005397f0(local_4,4,1,piVar1);
  FUN_0053a140(piVar1,(int)param_1 * local_8 * 8,1);
  return 1;
#undef local_8
#undef local_4
}
