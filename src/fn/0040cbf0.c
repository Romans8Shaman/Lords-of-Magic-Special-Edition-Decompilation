/* Rebuilt from lomse.exe FUN_0040cbf0 @ 0x0040cbf0 (253 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0040c580 ((undefined4 (__fastcall *)(int))0x0040c580)
#define FUN_0040c5a0 ((undefined4 (__stdcall *)(void))0x0040c5a0)
#define FUN_0040c700 ((undefined4 (__thiscall *)(void *, int *))0x0040c700)
#define FUN_0040c820 ((uint (__thiscall *)(void *, undefined4 *, uint, uint, int, int))0x0040c820)
#define FUN_0040cb00 ((undefined4 (__fastcall *)(int *))0x0040cb00)
#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)

#define LOM_SELF_0040cbf0 1
undefined4 __thiscall rb_0040cbf0(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  uchar _fr[0x58] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_4c;
  typedef undefined4 _t_local_48[13];
  typedef uint _t_local_14;
#define local_4c (*(_t_local_4c *)(_fr + 0x4))
#define local_48 (*(_t_local_48 *)(_fr + 0x8))
#define local_14 (*(_t_local_14 *)(_fr + 0x3c))

  FUN_0040cb00(this);
  FUN_0040c580((int)local_48);
  uVar1 = FUN_005397f0((char *)&local_4c,4,1,param_1);
  if (uVar1 != 1) {
    FUN_0040c5a0();
    return 0;
  }
  while( true ) {
    if (local_4c == 0) {
      FUN_0040c5a0();
      return 1;
    }
    iVar2 = FUN_0040c700(local_48,param_1);
    if ((iVar2 == 0) || (uVar1 = FUN_0040c820(this,local_48,local_14,local_14,0,0), (int)uVar1 < 0))
    break;
    local_4c = local_4c + -1;
  }
  FUN_0040c5a0();
  return 0;
#undef local_4c
#undef local_48
#undef local_14
}
