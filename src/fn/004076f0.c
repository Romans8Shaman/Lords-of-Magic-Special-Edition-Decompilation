/* Rebuilt from lomse.exe FUN_004076f0 @ 0x004076f0 (180 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00413530 ((undefined4 (__thiscall *)(void *, int))0x00413530)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_00489b70 ((undefined4 (__thiscall *)(void *, int *))0x00489b70)
#define FUN_0048cc70 ((int (__thiscall *)(void *, undefined1))0x0048cc70)

#define LOM_SELF_004076f0 1
undefined4 __stdcall rb_004076f0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  void *this;
  undefined4 uVar2;
  uchar _fr[0x110] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_108[5];
  typedef int _t_local_f3;
  typedef undefined4 _t_local_ef;
  typedef int _t_local_eb;
  typedef int _t_local_e7;
  typedef undefined1 _t_local_e3;
#define local_108 (*(_t_local_108 *)(_fr + 0x0))
#define local_f3 (*(_t_local_f3 *)(_fr + 0x15))
#define local_ef (*(_t_local_ef *)(_fr + 0x19))
#define local_eb (*(_t_local_eb *)(_fr + 0x1d))
#define local_e7 (*(_t_local_e7 *)(_fr + 0x21))
#define local_e3 (*(_t_local_e3 *)(_fr + 0x25))
  
  uVar1 = FUN_00482ac0(&DAT_005aa12c,param_1,0);
  if (uVar1 == 0) {
    return 0;
  }
  this = (void *)FUN_00482ac0(&DAT_005aa12c,param_2,0);
  if (this == (void *)0x0) {
    return 0;
  }
  local_e7 = FUN_00413530(this,param_3);
  if (local_e7 == -1) {
    return 0;
  }
  FUN_0048cc70(local_108,0x44);
  local_f3 = param_1;
  local_eb = param_2;
  local_ef = 0x10;
  local_e3 = 0;
  uVar2 = FUN_00489b70(&DAT_00584ae8,local_108);
  return uVar2;
#undef local_108
#undef local_f3
#undef local_ef
#undef local_eb
#undef local_e7
#undef local_e3
}
