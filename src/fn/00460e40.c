/* Rebuilt from lomse.exe FUN_00460e40 @ 0x00460e40 (102 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005af150 (*(undefined4 *)0x005af150)
#define FUN_00489b70 ((undefined4 (__thiscall *)(void *, int *))0x00489b70)
#define FUN_0048cc70 ((int (__thiscall *)(void *, undefined1))0x0048cc70)
#define FUN_004b4970 ((undefined4 (__fastcall *)(int))0x004b4970)

#define LOM_SELF_00460e40 1
undefined4 __stdcall rb_00460e40(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uchar _fr[0x110] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_108[5];
  typedef int _t_local_f3;
  typedef undefined4 _t_local_ef;
  typedef undefined4 _t_local_eb;
#define local_108 (*(_t_local_108 *)(_fr + 0x0))
#define local_f3 (*(_t_local_f3 *)(_fr + 0x15))
#define local_ef (*(_t_local_ef *)(_fr + 0x19))
#define local_eb (*(_t_local_eb *)(_fr + 0x1d))
  
  uVar2 = 0;
  iVar1 = FUN_004b4970(0x5cd358);
  if (iVar1 != 0) {
    FUN_0048cc70(local_108,0x41);
    local_ef = param_1;
    local_f3 = 2 - (uint)(param_2 != 0);
    local_eb = DAT_005af150;
    uVar2 = FUN_00489b70(&DAT_00584ae8,local_108);
  }
  return uVar2;
#undef local_108
#undef local_f3
#undef local_ef
#undef local_eb
}
