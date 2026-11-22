/* Rebuilt from lomse.exe FUN_00407550 @ 0x00407550 (199 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00407480 ((undefined4 (__thiscall *)(void *, undefined4 *, uint))0x00407480)
#define FUN_00413530 ((undefined4 (__thiscall *)(void *, int))0x00413530)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_00489b70 ((undefined4 (__thiscall *)(void *, int *))0x00489b70)
#define FUN_0048cc70 ((int (__thiscall *)(void *, undefined1))0x0048cc70)

#define LOM_SELF_00407550 1
undefined4 __thiscall rb_00407550(void *this,int param_1,int param_2)

{
  void *this_00;
  undefined4 uVar1;
  uchar _fr[0x160] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_158;
  typedef int _t_local_154;
  typedef int _t_local_108[5];
  typedef int _t_local_f3;
  typedef undefined4 _t_local_ef;
  typedef int _t_local_e7;
  typedef undefined1 _t_local_e3;
  typedef undefined1 _t_local_e2[226];
#define local_158 (*(_t_local_158 *)(_fr + 0x0))
#define local_154 (*(_t_local_154 *)(_fr + 0x4))
#define local_108 (*(_t_local_108 *)(_fr + 0x50))
#define local_f3 (*(_t_local_f3 *)(_fr + 0x65))
#define local_ef (*(_t_local_ef *)(_fr + 0x69))
#define local_e7 (*(_t_local_e7 *)(_fr + 0x71))
#define local_e3 (*(_t_local_e3 *)(_fr + 0x75))
#define local_e2 (*(_t_local_e2 *)(_fr + 0x76))
  
  this_00 = (void *)FUN_00482ac0(&DAT_005aa12c,param_1,0);
  if (this_00 == (void *)0x0) {
    return 0;
  }
  local_e7 = FUN_00413530(this_00,param_2);
  if (local_e7 == -1) {
    return 0;
  }
  FUN_0048cc70(local_108,0x44);
  local_f3 = param_1;
  local_158 = *(int *)((int)this_00 + 0x1c) % *(int *)((int)this + 0x4898);
  local_154 = *(int *)((int)this_00 + 0x1c) / *(int *)((int)this + 0x4898);
  FUN_00407480(local_e2,&local_158,1);
  local_ef = 0xf;
  local_e3 = 0;
  uVar1 = FUN_00489b70(&DAT_00584ae8,local_108);
  return uVar1;
#undef local_158
#undef local_154
#undef local_108
#undef local_f3
#undef local_ef
#undef local_e7
#undef local_e3
#undef local_e2
}
