/* Rebuilt from lomse.exe FUN_00403eb0 @ 0x00403eb0 (149 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00401730 ((undefined4 (__stdcall *)(void *))0x00401730)
#define FUN_0047c6e0 ((undefined4 (__thiscall *)(void *, int *, uint))0x0047c6e0)
#define FUN_0047c9e0 ((uint (__thiscall *)(void *, int))0x0047c9e0)

#define LOM_SELF_00403eb0 1
void __thiscall rb_00403eb0(void *this,void *param_1)

{
  uint uVar1;
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
  
  *(undefined4 *)this = 1;
  *(uint *)((int)param_1 + 0x30) = *(uint *)((int)param_1 + 0x30) | 2;
  if ((*(int *)((int)param_1 + 0x48) == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) ||
     (uVar1 = FUN_0047c9e0(&DAT_005aa12c,*(int *)((int)param_1 + 0x48)), uVar1 != 0)) {
    FUN_00401730(param_1);
    local_d8 = *(undefined4 *)((int)this + 8);
    local_ec[0] = *(int *)((int)param_1 + 0x28);
    local_ec[1] = 0xffffffff;
    local_d0 = 0xffffffff;
    local_ec[2] = 0xffffffff;
    local_dc = *(undefined4 *)((int)param_1 + 0x1c);
    local_d4 = 0;
    local_cc = 0;
    FUN_0047c6e0(&DAT_005aa12c,local_ec,0);
    return;
  }
  return;
#undef local_ec
#undef local_dc
#undef local_d8
#undef local_d4
#undef local_d0
#undef local_cc
}
