/* Rebuilt from lomse.exe FUN_004ed0d0 @ 0x004ed0d0 (149 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)
#define FUN_00489b70 ((undefined4 (__thiscall *)(void *, int *))0x00489b70)
#define FUN_0048cc40 ((int (__fastcall *)(int))0x0048cc40)

#define LOM_SELF_004ed0d0 1
void __stdcall rb_004ed0d0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uchar _fr[0x110] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_108;
  typedef undefined1 _t_local_104;
  typedef undefined4 _t_local_f3;
  typedef int _t_local_ef;
  typedef undefined4 _t_local_eb;
  typedef undefined4 _t_local_e7;
  typedef undefined4 _t_local_e3;
#define local_108 (*(_t_local_108 *)(_fr + 0x0))
#define local_104 (*(_t_local_104 *)(_fr + 0x4))
#define local_f3 (*(_t_local_f3 *)(_fr + 0x15))
#define local_ef (*(_t_local_ef *)(_fr + 0x19))
#define local_eb (*(_t_local_eb *)(_fr + 0x1d))
#define local_e7 (*(_t_local_e7 *)(_fr + 0x21))
#define local_e3 (*(_t_local_e3 *)(_fr + 0x25))
  
  FUN_0048cc40((int)&local_108);
  if (((param_2 < 0) || (DAT_005cd2f0 <= param_2)) || (DAT_005cd2f4 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_005cd2f4 + param_2 * 1000;
  }
  if (iVar1 == 0) {
    return;
  }
  local_ef = param_2;
  local_f3 = param_1;
  local_eb = param_3;
  local_104 = 0xc;
  local_e7 = param_4;
  local_e3 = *(undefined4 *)(iVar1 + 0xe8);
  FUN_00489b70(&DAT_00584ae8,&local_108);
  return;
#undef local_108
#undef local_104
#undef local_f3
#undef local_ef
#undef local_eb
#undef local_e7
#undef local_e3
}
