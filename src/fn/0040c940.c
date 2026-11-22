/* Rebuilt from lomse.exe FUN_0040c940 @ 0x0040c940 (125 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aeea0 (*(undefined *)0x005aeea0)
#define FUN_0040c580 ((undefined4 (__fastcall *)(int))0x0040c580)
#define FUN_0040c5a0 ((undefined4 (__stdcall *)(void))0x0040c5a0)
#define FUN_0040c820 ((uint (__thiscall *)(void *, undefined4 *, uint, uint, int, int))0x0040c820)

#define LOM_SELF_0040c940 1
undefined4 __stdcall rb_0040c940(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uchar _fr[0x50] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_48[13];
  typedef uint _t_local_14;
#define local_48 (*(_t_local_48 *)(_fr + 0x0))
#define local_14 (*(_t_local_14 *)(_fr + 0x34))

  FUN_0040c580((int)local_48);
  puVar2 = local_48;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_0040c820(&DAT_005aeea0,local_48,local_14,1,0,0);
  FUN_0040c5a0();
  return 1;
#undef local_48
#undef local_14
}
