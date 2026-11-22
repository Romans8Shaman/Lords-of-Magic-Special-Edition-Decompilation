/* Rebuilt from lomse.exe FUN_00484140 @ 0x00484140 (110 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005843e0 (*(uint *)0x005843e0)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005d1e84 (*(int *)0x005d1e84)
#define DAT_005d2ca4 (*(uint *)0x005d2ca4)
#define FUN_00489b70 ((undefined4 (__thiscall *)(void *, int *))0x00489b70)
#define FUN_0048cc70 ((int (__thiscall *)(void *, undefined1))0x0048cc70)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)
#define FUN_0053a110 ((uint (__stdcall *)(void))0x0053a110)

#define LOM_SELF_00484140 1
undefined4 __stdcall rb_00484140(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uchar _fr[0x110] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_108[5];
  typedef uint _t_local_f3;
#define local_108 (*(_t_local_108 *)(_fr + 0x0))
#define local_f3 (*(_t_local_f3 *)(_fr + 0x15))
  
  if (DAT_005d1e84 == 0) {
    bVar3 = true;
  }
  else {
    iVar1 = *(int *)(DAT_005d1e84 + 0x390);
    iVar2 = FUN_004b7dd0(DAT_005d1e84);
    bVar3 = iVar1 == iVar2;
  }
  if (bVar3) {
    FUN_0048cc70(local_108,0x4c);
    local_f3 = DAT_005d2ca4;
    if (DAT_005d2ca4 == 0) {
      local_f3 = FUN_0053a110();
    }
    DAT_005843e0 = local_f3;
    FUN_00489b70(&DAT_00584ae8,local_108);
  }
  return 1;
#undef local_108
#undef local_f3
}
