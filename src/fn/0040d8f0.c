/* Rebuilt from lomse.exe FUN_0040d8f0 @ 0x0040d8f0 (248 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0040d2e0 ((undefined4 (__fastcall *)(int))0x0040d2e0)
#define FUN_0040d300 ((undefined4 (__stdcall *)(void))0x0040d300)
#define FUN_0040d4a0 ((undefined4 (__thiscall *)(void *, int *))0x0040d4a0)
#define FUN_0040d5f0 ((undefined4 (__thiscall *)(void *, undefined4 *, int))0x0040d5f0)
#define FUN_0040e220 ((undefined4 (__fastcall *)(int *))0x0040e220)
#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)

#define LOM_SELF_0040d8f0 1
undefined4 __thiscall rb_0040d8f0(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  uchar _fr[0x60] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_58;
  typedef undefined4 _t_local_54[17];
  typedef int _t_local_10;
#define local_58 (*(_t_local_58 *)(_fr + 0x0))
#define local_54 (*(_t_local_54 *)(_fr + 0x4))
#define local_10 (*(_t_local_10 *)(_fr + 0x48))

  FUN_0040e220(this);
  FUN_0040d2e0((int)local_54);
  uVar1 = FUN_005397f0((char *)&local_58,4,1,param_1);
  if (uVar1 != 1) {
    FUN_0040d300();
    return 0;
  }
  while( true ) {
    if (local_58 == 0) {
      FUN_0040d300();
      return 1;
    }
    iVar2 = FUN_0040d4a0(local_54,param_1);
    if ((iVar2 == 0) || (iVar2 = FUN_0040d5f0(this,local_54,local_10), iVar2 < 0)) break;
    local_58 = local_58 + -1;
  }
  FUN_0040d300();
  return 0;
#undef local_58
#undef local_54
#undef local_10
}
