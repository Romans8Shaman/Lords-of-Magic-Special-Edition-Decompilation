/* Rebuilt from lomse.exe FUN_004c3280 @ 0x004c3280 (171 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_0047c570 ((undefined4 (__stdcall *)(int *, undefined4))0x0047c570)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)

#define LOM_SELF_004c3280 1
undefined4
__stdcall rb_004c3280(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  uchar _fr[0xf8] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_ec;
  typedef int _t_local_e8;
  typedef undefined4 _t_local_e4;
  typedef undefined4 _t_local_dc;
  typedef undefined4 _t_local_d8;
  typedef undefined4 _t_local_d4;
  typedef undefined4 _t_local_d0;
  typedef undefined4 _t_local_cc;
#define local_ec (*(_t_local_ec *)(_fr + 0x4))
#define local_e8 (*(_t_local_e8 *)(_fr + 0x8))
#define local_e4 (*(_t_local_e4 *)(_fr + 0xc))
#define local_dc (*(_t_local_dc *)(_fr + 0x14))
#define local_d8 (*(_t_local_d8 *)(_fr + 0x18))
#define local_d4 (*(_t_local_d4 *)(_fr + 0x1c))
#define local_d0 (*(_t_local_d0 *)(_fr + 0x20))
#define local_cc (*(_t_local_cc *)(_fr + 0x24))
  
  uVar1 = FUN_00482ac0(&DAT_005aa12c,param_1,0);
  uVar2 = FUN_00482ac0(&DAT_005aa12c,param_3,0);
  if ((uVar1 == 0) || (uVar2 == 0)) {
    return 0;
  }
  local_dc = *(undefined4 *)(uVar2 + 0x1c);
  local_d8 = param_5;
  local_cc = param_2;
  local_ec = param_3;
  local_e8 = param_1;
  local_d0 = 0xffffffff;
  local_e4 = param_4;
  local_d4 = 0x40;
  FUN_0047c570(&local_ec,0);
  return 1;
#undef local_ec
#undef local_e8
#undef local_e4
#undef local_dc
#undef local_d8
#undef local_d4
#undef local_d0
#undef local_cc
}
