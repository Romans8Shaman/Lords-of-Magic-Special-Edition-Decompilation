/* Rebuilt from lomse.exe FUN_00404e60 @ 0x00404e60 (116 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_0047c6e0 ((undefined4 (__thiscall *)(void *, int *, uint))0x0047c6e0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)

#define LOM_SELF_00404e60 1
undefined4 __thiscall rb_00404e60(void *this,int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uchar _fr[0xf8] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_ec[4];
  typedef undefined4 _t_local_dc;
  typedef undefined4 _t_local_d8;
  typedef undefined4 _t_local_d4;
  typedef undefined4 _t_local_d0;
  typedef undefined4 _t_local_cc;
#define local_ec (*(_t_local_ec *)(_fr + 0x4))
#define local_dc (*(_t_local_dc *)(_fr + 0x14))
#define local_d8 (*(_t_local_d8 *)(_fr + 0x18))
#define local_d4 (*(_t_local_d4 *)(_fr + 0x1c))
#define local_d0 (*(_t_local_d0 *)(_fr + 0x20))
#define local_cc (*(_t_local_cc *)(_fr + 0x24))
  
  local_d4 = 0;
  uVar1 = FUN_00482ac0(this,param_1,0);
  if (uVar1 == 0) {
    return 0;
  }
  local_ec[0] = param_1;
  local_d8 = param_2;
  local_ec[1] = 0xffffffff;
  local_d0 = 0xffffffff;
  local_dc = *(undefined4 *)(uVar1 + 0x1c);
  local_ec[2] = 0xffffffff;
  local_cc = 0;
  uVar2 = FUN_0047c6e0(&DAT_005aa12c,local_ec,2);
  return uVar2;
#undef local_ec
#undef local_dc
#undef local_d8
#undef local_d4
#undef local_d0
#undef local_cc
}
