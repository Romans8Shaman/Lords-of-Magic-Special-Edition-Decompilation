/* Rebuilt from lomse.exe FUN_0040f500 @ 0x0040f500 (243 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0040eb30 ((undefined4 (__fastcall *)(undefined4 *))0x0040eb30)
#define FUN_0040eb60 ((undefined4 (__stdcall *)(void))0x0040eb60)
#define FUN_0040ed80 ((undefined4 (__thiscall *)(void *, int *))0x0040ed80)
#define FUN_0040efd0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040efd0)
#define FUN_0040f430 ((undefined4 (__fastcall *)(int *))0x0040f430)
#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)

#define LOM_SELF_0040f500 1
undefined4 __thiscall rb_0040f500(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  uchar _fr[0x68] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_60;
  typedef undefined4 _t_local_5c[20];
#define local_60 (*(_t_local_60 *)(_fr + 0x0))
#define local_5c (*(_t_local_5c *)(_fr + 0x4))

  FUN_0040f430(this);
  FUN_0040eb30(local_5c);
  uVar1 = FUN_005397f0((char *)&local_60,4,1,param_1);
  if (uVar1 != 1) {
    FUN_0040eb60();
    return 0;
  }
  while( true ) {
    if (local_60 == 0) {
      FUN_0040eb60();
      return 1;
    }
    iVar2 = FUN_0040ed80(local_5c,param_1);
    if ((iVar2 == 0) || (iVar2 = FUN_0040efd0(this,local_5c), iVar2 < 0)) break;
    local_60 = local_60 + -1;
  }
  FUN_0040eb60();
  return 0;
#undef local_60
#undef local_5c
}
