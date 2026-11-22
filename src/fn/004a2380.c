/* Rebuilt from lomse.exe FUN_004a2380 @ 0x004a2380 (153 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004a2ae0 ((undefined4 (__cdecl *)(int, byte *, int))0x004a2ae0)
#define FUN_004fe720 ((int * (__thiscall *)(void *, LPCSTR, uint, int, int, int))0x004fe720)
#define FUN_004fe9c0 ((undefined4 (__fastcall *)(int *))0x004fe9c0)

#define LOM_SELF_004a2380 1
undefined4 __cdecl rb_004a2380(LPCSTR param_1,int param_2)

{
  undefined4 uVar1;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_20[2];
  typedef byte * _t_local_18;
#define local_20 (*(_t_local_20 *)(_fr + 0x0))
#define local_18 (*(_t_local_18 *)(_fr + 0x8))

  FUN_004fe720(local_20,param_1,0,0,0,1);
  if (local_20[0] == 0) {
    FUN_004fe9c0(local_20);
    return 0;
  }
  uVar1 = FUN_004a2ae0(local_20[0],local_18,param_2);
  FUN_004fe9c0(local_20);
  return uVar1;
#undef local_20
#undef local_18
}
