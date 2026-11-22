/* Rebuilt from lomse.exe FUN_0047c610 @ 0x0047c610 (203 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_004176d0 ((undefined4 (__thiscall *)(void *, int))0x004176d0)
#define FUN_0047c6e0 ((undefined4 (__thiscall *)(void *, int *, uint))0x0047c6e0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004bb5a0 ((undefined4 (__fastcall *)(int))0x004bb5a0)

#define LOM_SELF_0047c610 1
undefined4 __thiscall rb_0047c610(void *this,int *param_1)

{
  undefined4 *this_00;
  int iVar1;
  undefined *puVar2;
  uchar _fr[0xf8] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_ec;
  typedef int _t_local_e8;
  typedef int _t_local_e4;
  typedef int _t_local_e0;
  typedef undefined4 _t_local_dc;
  typedef int _t_local_d8;
  typedef int _t_local_d4;
  typedef int _t_local_d0;
  typedef int _t_local_cc;
#define local_ec (*(_t_local_ec *)(_fr + 0x4))
#define local_e8 (*(_t_local_e8 *)(_fr + 0x8))
#define local_e4 (*(_t_local_e4 *)(_fr + 0xc))
#define local_e0 (*(_t_local_e0 *)(_fr + 0x10))
#define local_dc (*(_t_local_dc *)(_fr + 0x14))
#define local_d8 (*(_t_local_d8 *)(_fr + 0x18))
#define local_d4 (*(_t_local_d4 *)(_fr + 0x1c))
#define local_d0 (*(_t_local_d0 *)(_fr + 0x20))
#define local_cc (*(_t_local_cc *)(_fr + 0x24))
  
  this_00 = FUN_00485080(this,*param_1,0x2f);
  if (this_00 == (undefined4 *)0x0) {
    return 0;
  }
  FUN_004176d0(this_00,0);
  iVar1 = this_00[0x12];
  if ((iVar1 < 0) || (0xf < iVar1)) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = &DAT_005af194 + iVar1 * 0x1d84;
  }
  if (puVar2 != (undefined *)0x0) {
    iVar1 = FUN_004bb5a0((int)puVar2);
    if (iVar1 != 0) {
      local_ec = *param_1;
      local_e8 = param_1[1];
      local_e4 = param_1[2];
      local_e0 = param_1[3];
      local_d8 = param_1[5];
      local_dc = this_00[7];
      local_d4 = param_1[6];
      local_d0 = param_1[7];
      local_cc = param_1[8];
      FUN_0047c6e0(this,&local_ec,param_1[9]);
    }
  }
  return 1;
#undef local_ec
#undef local_e8
#undef local_e4
#undef local_e0
#undef local_dc
#undef local_d8
#undef local_d4
#undef local_d0
#undef local_cc
}
