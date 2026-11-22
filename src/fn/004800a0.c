/* Rebuilt from lomse.exe FUN_004800a0 @ 0x004800a0 (135 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005d1e84 (*(int *)0x005d1e84)
#define FUN_00489b70 ((undefined4 (__thiscall *)(void *, int *))0x00489b70)
#define FUN_0048cc40 ((int (__fastcall *)(int))0x0048cc40)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)
#define FUN_005047d0 ((undefined4 (__stdcall *)(undefined4))0x005047d0)
#define s_host_requested_game___ignored_re_0055b1c0 (*(char (*)[])0x0055b1c0)

#define LOM_SELF_004800a0 1
undefined4 __stdcall rb_004800a0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  uchar _fr[0x110] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_108;
  typedef undefined1 _t_local_104;
  typedef undefined4 _t_local_f3;
#define local_108 (*(_t_local_108 *)(_fr + 0x0))
#define local_104 (*(_t_local_104 *)(_fr + 0x4))
#define local_f3 (*(_t_local_f3 *)(_fr + 0x15))
  
  FUN_0048cc40((int)&local_108);
  if (DAT_005d1e84 == 0) {
    bVar4 = true;
  }
  else {
    iVar1 = *(int *)(DAT_005d1e84 + 0x390);
    iVar2 = FUN_004b7dd0(DAT_005d1e84);
    bVar4 = iVar1 == iVar2;
  }
  if (bVar4) {
    if (DAT_005d1e84 != 0) {
      FUN_005047d0(s_host_requested_game___ignored_re_0055b1c0);
    }
    return 0;
  }
  local_104 = 0x20;
  if (DAT_005d1e84 == 0) {
    local_f3 = 1;
  }
  else {
    local_f3 = FUN_004b7dd0(DAT_005d1e84);
  }
  uVar3 = FUN_00489b70(&DAT_00584ae8,&local_108);
  return uVar3;
#undef local_108
#undef local_104
#undef local_f3
}
