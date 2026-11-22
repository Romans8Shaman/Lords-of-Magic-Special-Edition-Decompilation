/* Rebuilt from lomse.exe FUN_0047c570 @ 0x0047c570 (155 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_00489b70 ((undefined4 (__thiscall *)(void *, int *))0x00489b70)
#define FUN_0048cc40 ((int (__fastcall *)(int))0x0048cc40)

#define LOM_SELF_0047c570 1
void __stdcall rb_0047c570(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uchar _fr[0x110] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_108;
  typedef undefined1 _t_local_104;
  typedef int _t_local_f3;
  typedef int _t_local_ef;
  typedef int _t_local_eb;
  typedef int _t_local_e7;
  typedef int _t_local_e3;
  typedef int _t_local_df;
  typedef int _t_local_db;
  typedef int _t_local_d7;
  typedef int _t_local_d3;
  typedef undefined4 _t_local_cf;
#define local_108 (*(_t_local_108 *)(_fr + 0x0))
#define local_104 (*(_t_local_104 *)(_fr + 0x4))
#define local_f3 (*(_t_local_f3 *)(_fr + 0x15))
#define local_ef (*(_t_local_ef *)(_fr + 0x19))
#define local_eb (*(_t_local_eb *)(_fr + 0x1d))
#define local_e7 (*(_t_local_e7 *)(_fr + 0x21))
#define local_e3 (*(_t_local_e3 *)(_fr + 0x25))
#define local_df (*(_t_local_df *)(_fr + 0x29))
#define local_db (*(_t_local_db *)(_fr + 0x2d))
#define local_d7 (*(_t_local_d7 *)(_fr + 0x31))
#define local_d3 (*(_t_local_d3 *)(_fr + 0x35))
#define local_cf (*(_t_local_cf *)(_fr + 0x39))
  
  puVar1 = FUN_00485080(&DAT_005aa12c,*param_1,0x2f);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  FUN_0048cc40((int)&local_108);
  local_f3 = *param_1;
  local_ef = param_1[1];
  local_eb = param_1[2];
  local_e7 = param_1[3];
  local_e3 = param_1[4];
  local_db = param_1[6];
  local_d7 = param_1[7];
  local_df = param_1[5];
  local_d3 = param_1[8];
  local_cf = param_2;
  local_104 = 0xe;
  FUN_00489b70(&DAT_00584ae8,&local_108);
  return;
#undef local_108
#undef local_104
#undef local_f3
#undef local_ef
#undef local_eb
#undef local_e7
#undef local_e3
#undef local_df
#undef local_db
#undef local_d7
#undef local_d3
#undef local_cf
}
