/* Rebuilt from lomse.exe FUN_0052e580 @ 0x0052e580 (131 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_005228b0 ((int (__thiscall *)(void *, undefined4, undefined4))0x005228b0)
#define FUN_00525fc0 ((undefined4 (__fastcall *)(int *))0x00525fc0)

#define LOM_SELF_0052e580 1
undefined4 __fastcall rb_0052e580(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_8;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
  
  iVar4 = 0;
  local_8 = 0xffffffff;
  iVar5 = 0;
  piVar3 = param_1 + 6;
  do {
    uVar1 = FUN_00482ac0(&DAT_005aa12c,*piVar3,0);
    if ((uVar1 != 0) && (*(int *)(uVar1 + 0x48) == *param_1)) {
      iVar2 = FUN_00525fc0((int *)(uVar1 + 0xc4));
      if (iVar2 == 2) {
        iVar2 = FUN_005228b0((void *)(uVar1 + 0xc4 + iVar5),*(undefined4 *)(uVar1 + 0x28),0);
        if (iVar4 < iVar2) {
          local_8 = *(undefined4 *)(uVar1 + 0x28);
          iVar4 = iVar2;
        }
      }
    }
    iVar5 = iVar5 + 0x4c;
    piVar3 = piVar3 + 3;
  } while (iVar5 < 0x8e8);
  return local_8;
#undef local_8
}
