/* Rebuilt from lomse.exe FUN_00504810 @ 0x00504810 (784 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0058364c (*(int *)0x0058364c)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_00586798 (*(int *)0x00586798)
#define FUN_004753d0 ((undefined4 (__fastcall *)(int))0x004753d0)
#define FUN_004754c0 ((undefined * (__fastcall *)(int))0x004754c0)
#define FUN_004755a0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x004755a0)
#define FUN_00496340 ((undefined4 (__thiscall *)(void *, int *, int, int, byte))0x00496340)
#define FUN_005007e0 ((undefined4 (__thiscall *)(void *, int))0x005007e0)

#define LOM_SELF_00504810 1
void __fastcall rb_00504810(int param_1)

{
  undefined4 *this;
  uchar _fr[0xc8] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_c0[6];
  typedef undefined4 _t_local_a8;
  typedef undefined4 _t_local_a4;
  typedef undefined4 _t_local_a0;
  typedef undefined4 _t_local_9c;
  typedef int _t_local_98[6];
  typedef undefined4 _t_local_80;
  typedef undefined4 _t_local_7c;
  typedef undefined4 _t_local_78;
  typedef undefined4 _t_local_74;
  typedef int _t_local_70[6];
  typedef undefined4 _t_local_58;
  typedef undefined4 _t_local_54;
  typedef undefined4 _t_local_50;
  typedef undefined4 _t_local_4c;
  typedef int _t_local_48[6];
  typedef undefined4 _t_local_30;
  typedef undefined4 _t_local_2c;
  typedef undefined4 _t_local_28;
  typedef undefined4 _t_local_24;
  typedef int _t_local_20[5];
#define local_c0 (*(_t_local_c0 *)(_fr + 0x0))
#define local_a8 (*(_t_local_a8 *)(_fr + 0x18))
#define local_a4 (*(_t_local_a4 *)(_fr + 0x1c))
#define local_a0 (*(_t_local_a0 *)(_fr + 0x20))
#define local_9c (*(_t_local_9c *)(_fr + 0x24))
#define local_98 (*(_t_local_98 *)(_fr + 0x28))
#define local_80 (*(_t_local_80 *)(_fr + 0x40))
#define local_7c (*(_t_local_7c *)(_fr + 0x44))
#define local_78 (*(_t_local_78 *)(_fr + 0x48))
#define local_74 (*(_t_local_74 *)(_fr + 0x4c))
#define local_70 (*(_t_local_70 *)(_fr + 0x50))
#define local_58 (*(_t_local_58 *)(_fr + 0x68))
#define local_54 (*(_t_local_54 *)(_fr + 0x6c))
#define local_50 (*(_t_local_50 *)(_fr + 0x70))
#define local_4c (*(_t_local_4c *)(_fr + 0x74))
#define local_48 (*(_t_local_48 *)(_fr + 0x78))
#define local_30 (*(_t_local_30 *)(_fr + 0x90))
#define local_2c (*(_t_local_2c *)(_fr + 0x94))
#define local_28 (*(_t_local_28 *)(_fr + 0x98))
#define local_24 (*(_t_local_24 *)(_fr + 0x9c))
#define local_20 (*(_t_local_20 *)(_fr + 0xa0))

  if (DAT_00586798 == 0) {
    local_c0[0] = param_1 + 0x5e8;
    local_a8 = 0xa1;
    local_a4 = 0x1c;
    local_a0 = 0x48;
    local_9c = 0x81;
    local_58 = 0x177;
    local_54 = 0x15;
    local_50 = 0x6f;
    local_4c = 0x7a;
    local_80 = 0x210;
    local_7c = 0x4a;
    local_78 = 0x28;
    local_74 = 0x4f;
    local_30 = 0x1e5;
    local_2c = 0x99;
    local_28 = 0x5c;
    local_24 = 0xa8;
    local_c0[1] = 0x153;
    local_c0[2] = 0xdd;
    local_c0[3] = 0x93;
    local_c0[4] = 0x80;
    local_98[1] = 0xa4;
    local_98[2] = 0xd6;
    local_98[3] = 0x87;
    local_98[4] = 0x8f;
    local_70[1] = 0x43;
    local_70[2] = 0xc3;
    local_70[3] = 0x40;
    local_70[4] = 0x6f;
    local_48[1] = 0x34;
    local_48[2] = 0x50;
    local_48[3] = 0x4b;
    local_48[4] = 0x73;
    DAT_0058364c = DAT_0058364c + 0xb4;
    local_20[1] = 0x11b;
    local_20[2] = 0x187;
    local_20[3] = 0x3e;
    local_20[4] = 0x47;
    local_c0[5] = local_c0[0];
    local_98[0] = local_c0[0];
    local_98[5] = local_c0[0];
    local_70[0] = local_c0[0];
    local_70[5] = local_c0[0];
    local_48[0] = local_c0[0];
    local_48[5] = local_c0[0];
    local_20[0] = local_c0[0];
    this = (undefined4 *)FUN_004754c0(0x584ae8);
    FUN_00496340(this,local_c0 + 5,0xa1,0x1c,0);
    FUN_00496340(this,local_70 + 5,0x177,0x15,0);
    FUN_00496340(this,local_98 + 5,0x210,0x4a,0);
    FUN_00496340(this,local_48 + 5,0x1e5,0x99,0);
    FUN_00496340(this,local_c0,0x153,0xdd,0);
    FUN_00496340(this,local_98,0xa4,0xd6,0);
    FUN_00496340(this,local_70,0x43,0xc3,0);
    FUN_00496340(this,local_48,0x34,0x50,0);
    if ((*(int *)(*(int *)(param_1 + 0xb8) + 0x70) != 0) &&
       (*(int *)(*(int *)(param_1 + 0xb8) + 0xa4) != 0)) {
      FUN_00496340(this,local_20,0x204,0x98,0);
    }
    FUN_004755a0(&DAT_00584ae8,this);
    FUN_005007e0(&DAT_00584ae8,1);
    FUN_004753d0(0x584ae8);
    DAT_0058364c = DAT_0058364c + -0xb4;
  }
  return;
#undef local_c0
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98
#undef local_80
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
}
