/* Rebuilt from lomse.exe FUN_004c1b40 @ 0x004c1b40 (122 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_00489b70 ((undefined4 (__thiscall *)(void *, int *))0x00489b70)
#define FUN_0048cc40 ((int (__fastcall *)(int))0x0048cc40)

#define LOM_SELF_004c1b40 1
undefined4 __stdcall rb_004c1b40(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uchar _fr[0x110] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_108;
  typedef undefined1 _t_local_104;
  typedef int _t_local_f3;
  typedef int _t_local_ef;
#define local_108 (*(_t_local_108 *)(_fr + 0x0))
#define local_104 (*(_t_local_104 *)(_fr + 0x4))
#define local_f3 (*(_t_local_f3 *)(_fr + 0x15))
#define local_ef (*(_t_local_ef *)(_fr + 0x19))
  
  uVar1 = FUN_00482ac0(&DAT_005aa12c,param_1,0);
  puVar2 = FUN_00485080(&DAT_005aa12c,param_2,0x2f);
  if ((uVar1 == 0) || (puVar2 == (undefined4 *)0x0)) {
    return 0;
  }
  FUN_0048cc40((int)&local_108);
  local_104 = 0x16;
  local_f3 = param_1;
  local_ef = param_2;
  uVar3 = FUN_00489b70(&DAT_00584ae8,&local_108);
  return uVar3;
#undef local_108
#undef local_104
#undef local_f3
#undef local_ef
}
