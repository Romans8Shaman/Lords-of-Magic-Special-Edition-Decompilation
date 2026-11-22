/* Rebuilt from lomse.exe FUN_00437380 @ 0x00437380 (95 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004c5020 ((undefined4 (__thiscall *)(void *, undefined4 *, uint))0x004c5020)

#define LOM_SELF_00437380 1
void __thiscall
rb_00437380(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  uchar _fr[0x30] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_24;
  typedef undefined4 _t_local_20;
  typedef undefined4 _t_local_1c;
  typedef undefined4 _t_local_18;
  typedef undefined4 _t_local_14;
  typedef undefined4 _t_local_10;
  typedef undefined4 _t_local_c;
  typedef undefined4 _t_local_8;
  typedef undefined4 _t_local_4;
#define local_24 (*(_t_local_24 *)(_fr + 0x4))
#define local_20 (*(_t_local_20 *)(_fr + 0x8))
#define local_1c (*(_t_local_1c *)(_fr + 0xc))
#define local_18 (*(_t_local_18 *)(_fr + 0x10))
#define local_14 (*(_t_local_14 *)(_fr + 0x14))
#define local_10 (*(_t_local_10 *)(_fr + 0x18))
#define local_c (*(_t_local_c *)(_fr + 0x1c))
#define local_8 (*(_t_local_8 *)(_fr + 0x20))
#define local_4 (*(_t_local_4 *)(_fr + 0x24))
  
  local_1c = 0;
  local_18 = 1;
  local_24 = *(undefined4 *)(param_1 + 0x48);
  local_20 = *(undefined4 *)(param_1 + 0x28);
  local_10 = param_4;
  local_14 = param_3;
  local_8 = param_6;
  local_c = param_5;
  local_4 = param_2;
  FUN_004c5020(this,&local_24,0x24);
  return;
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
