/* Rebuilt from lomse.exe FUN_004f1df0 @ 0x004f1df0 (107 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00428bf0 ((int (__thiscall *)(void *, int))0x00428bf0)
#define FUN_004298a0 ((undefined4 (__thiscall *)(void *, int, int *, int *))0x004298a0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)

#define LOM_SELF_004f1df0 1
int __fastcall rb_004f1df0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_8;
  typedef int _t_local_4;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  if (*(int *)(param_1 + 0x38) < 0) {
    return 0;
  }
  puVar1 = FUN_00485080(&DAT_005aa12c,*(int *)(param_1 + 0x24),0x2f);
  if ((((puVar1 == (undefined4 *)0x0) || (iVar2 = *(int *)(param_1 + 0x28), iVar2 < 0)) ||
      ((int)puVar1[0x13] <= iVar2)) ||
     (iVar2 = FUN_00428bf0(puVar1 + iVar2 * 0x13 + 0x31,*(int *)(param_1 + 0x38)), iVar2 == 0)) {
    iVar2 = FUN_004298a0(&DAT_005aa12c,*(int *)(param_1 + 0x38),&local_4,&local_8);
    return iVar2;
  }
  return iVar2;
#undef local_8
#undef local_4
}
