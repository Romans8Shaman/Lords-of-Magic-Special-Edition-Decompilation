/* Rebuilt from lomse.exe FUN_0040c130 @ 0x0040c130 (248 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0040bb10 ((undefined4 (__fastcall *)(int))0x0040bb10)
#define FUN_0040bb30 ((undefined4 (__stdcall *)(void))0x0040bb30)
#define FUN_0040bd10 ((undefined4 (__thiscall *)(void *, int *))0x0040bd10)
#define FUN_0040bec0 ((undefined4 (__thiscall *)(void *, undefined4 *, int))0x0040bec0)
#define FUN_0040c040 ((undefined4 (__fastcall *)(int *))0x0040c040)
#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)

#define LOM_SELF_0040c130 1
undefined4 __thiscall rb_0040c130(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  uchar _fr[0x68] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_60;
  typedef undefined4 _t_local_5c[19];
  typedef int _t_local_10;
#define local_60 (*(_t_local_60 *)(_fr + 0x0))
#define local_5c (*(_t_local_5c *)(_fr + 0x4))
#define local_10 (*(_t_local_10 *)(_fr + 0x50))

  FUN_0040c040(this);
  FUN_0040bb10((int)local_5c);
  uVar1 = FUN_005397f0((char *)&local_60,4,1,param_1);
  if (uVar1 != 1) {
    FUN_0040bb30();
    return 0;
  }
  while( true ) {
    if (local_60 == 0) {
      FUN_0040bb30();
      return 1;
    }
    iVar2 = FUN_0040bd10(local_5c,param_1);
    if ((iVar2 == 0) || (iVar2 = FUN_0040bec0(this,local_5c,local_10), iVar2 < 0)) break;
    local_60 = local_60 + -1;
  }
  FUN_0040bb30();
  return 0;
#undef local_60
#undef local_5c
#undef local_10
}
