/* Rebuilt from lomse.exe FUN_00437310 @ 0x00437310 (106 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_004c5020 ((undefined4 (__thiscall *)(void *, undefined4 *, uint))0x004c5020)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)

#define LOM_SELF_00437310 1
undefined4 __thiscall
rb_00437310(void *this,undefined4 param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uchar _fr[0x30] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_24;
  typedef int _t_local_20;
  typedef undefined4 _t_local_1c;
  typedef uint _t_local_18;
  typedef undefined4 _t_local_14;
  typedef undefined4 _t_local_c;
  typedef undefined4 _t_local_4;
#define local_24 (*(_t_local_24 *)(_fr + 0x4))
#define local_20 (*(_t_local_20 *)(_fr + 0x8))
#define local_1c (*(_t_local_1c *)(_fr + 0xc))
#define local_18 (*(_t_local_18 *)(_fr + 0x10))
#define local_14 (*(_t_local_14 *)(_fr + 0x14))
#define local_c (*(_t_local_c *)(_fr + 0x1c))
#define local_4 (*(_t_local_4 *)(_fr + 0x24))
  
  iVar1 = FUN_004f6000(&DAT_005ae974,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  local_24 = param_1;
  local_14 = 0;
  local_c = 0;
  local_18 = param_4 & 0xffffff00;
  local_20 = param_2;
  local_1c = param_3;
  local_4 = 0xffffffff;
  uVar2 = FUN_004c5020(this,&local_24,0x24);
  return uVar2;
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_c
#undef local_4
}
