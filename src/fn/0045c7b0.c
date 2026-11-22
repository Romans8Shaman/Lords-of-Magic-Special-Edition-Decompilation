/* Rebuilt from lomse.exe FUN_0045c7b0 @ 0x0045c7b0 (115 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583574 (*(int *)0x00583574)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_00489b70 ((undefined4 (__thiscall *)(void *, int *))0x00489b70)
#define FUN_0048cc40 ((int (__fastcall *)(int))0x0048cc40)

#define LOM_SELF_0045c7b0 1
undefined4 __fastcall rb_0045c7b0(int param_1)

{
  undefined4 uVar1;
  uchar _fr[0x110] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_108;
  typedef undefined1 _t_local_104;
  typedef undefined1 _t_local_f3;
  typedef undefined1 _t_local_f2;
#define local_108 (*(_t_local_108 *)(_fr + 0x0))
#define local_104 (*(_t_local_104 *)(_fr + 0x4))
#define local_f3 (*(_t_local_f3 *)(_fr + 0x15))
#define local_f2 (*(_t_local_f2 *)(_fr + 0x16))
  
  if (((DAT_00583574 == 0) && (*(int *)(param_1 + 0x4fec) == 0)) &&
     (*(int *)(param_1 + 0x4ff0) == 0)) {
    FUN_0048cc40((int)&local_108);
    local_f2 = *(undefined1 *)(param_1 + 0xc84);
    local_f3 = *(undefined1 *)(param_1 + 0x6a8);
    local_104 = 0x3a;
    uVar1 = FUN_00489b70(&DAT_00584ae8,&local_108);
    *(undefined4 *)(param_1 + 0x4fec) = 1;
    return uVar1;
  }
  return 0;
#undef local_108
#undef local_104
#undef local_f3
#undef local_f2
}
