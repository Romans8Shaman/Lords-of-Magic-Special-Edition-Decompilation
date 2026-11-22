/* Rebuilt from lomse.exe FUN_004b2310 @ 0x004b2310 (117 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005d1e84 (*(int *)0x005d1e84)
#define FUN_00489b70 ((undefined4 (__thiscall *)(void *, int *))0x00489b70)
#define FUN_0048cc40 ((int (__fastcall *)(int))0x0048cc40)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)

#define LOM_SELF_004b2310 1
undefined4 __fastcall rb_004b2310(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  uchar _fr[0x110] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_108;
  typedef undefined1 _t_local_104;
  typedef undefined4 _t_local_f3[60];
#define local_108 (*(_t_local_108 *)(_fr + 0x0))
#define local_104 (*(_t_local_104 *)(_fr + 0x4))
#define local_f3 (*(_t_local_f3 *)(_fr + 0x15))
  
  if (DAT_005d1e84 == 0) {
    bVar6 = true;
  }
  else {
    iVar3 = *(int *)(DAT_005d1e84 + 0x390);
    iVar1 = FUN_004b7dd0(DAT_005d1e84);
    bVar6 = iVar3 == iVar1;
  }
  if (bVar6) {
    FUN_0048cc40((int)&local_108);
    local_104 = 0x59;
    puVar4 = (undefined4 *)(param_1 + 0x520);
    puVar5 = local_f3;
    for (iVar3 = 0x29; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar2 = FUN_00489b70(&DAT_00584ae8,&local_108);
    return uVar2;
  }
  return 0;
#undef local_108
#undef local_104
#undef local_f3
}
