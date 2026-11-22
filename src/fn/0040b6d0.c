/* Rebuilt from lomse.exe FUN_0040b6d0 @ 0x0040b6d0 (248 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0040b0b0 ((undefined4 (__fastcall *)(int))0x0040b0b0)
#define FUN_0040b0d0 ((undefined4 (__stdcall *)(void))0x0040b0d0)
#define FUN_0040b2b0 ((undefined4 (__thiscall *)(void *, int *))0x0040b2b0)
#define FUN_0040b460 ((undefined4 (__thiscall *)(void *, undefined4 *, int))0x0040b460)
#define FUN_0040b5e0 ((undefined4 (__fastcall *)(int *))0x0040b5e0)
#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)

#define LOM_SELF_0040b6d0 1
undefined4 __thiscall rb_0040b6d0(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  uchar _fr[0x68] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_5c;
  typedef undefined4 _t_local_58[18];
  typedef int _t_local_10;
#define local_5c (*(_t_local_5c *)(_fr + 0x4))
#define local_58 (*(_t_local_58 *)(_fr + 0x8))
#define local_10 (*(_t_local_10 *)(_fr + 0x50))

  FUN_0040b5e0(this);
  FUN_0040b0b0((int)local_58);
  uVar1 = FUN_005397f0((char *)&local_5c,4,1,param_1);
  if (uVar1 != 1) {
    FUN_0040b0d0();
    return 0;
  }
  while( true ) {
    if (local_5c == 0) {
      FUN_0040b0d0();
      return 1;
    }
    iVar2 = FUN_0040b2b0(local_58,param_1);
    if ((iVar2 == 0) || (iVar2 = FUN_0040b460(this,local_58,local_10), iVar2 < 0)) break;
    local_5c = local_5c + -1;
  }
  FUN_0040b0d0();
  return 0;
#undef local_5c
#undef local_58
#undef local_10
}
