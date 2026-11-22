/* Rebuilt from lomse.exe FUN_004383f0 @ 0x004383f0 (194 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_005221f0 ((undefined4 (__stdcall *)(undefined4, undefined4))0x005221f0)

#define LOM_SELF_004383f0 1
int __fastcall rb_004383f0(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_8;
  typedef int _t_local_4;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  if ((*param_1 < 1) || (0xe < param_1[0x12])) {
    return 0;
  }
  iVar3 = 99999;
  iVar4 = 0;
  local_4 = 0;
  local_8 = 99999;
  iVar5 = 0;
  if (0 < *param_1) {
    iVar5 = 0;
    do {
      uVar1 = FUN_00482ac0(&DAT_005aa12c,*(int *)(param_1[2] + iVar5),0);
      iVar2 = FUN_005221f0(*(undefined4 *)(uVar1 + 0x28),*(undefined4 *)(param_1[2] + 4 + iVar5));
      if ((iVar2 < iVar3) || ((iVar2 == iVar3 && (*(int *)(param_1[2] + 0xc + iVar5) < local_8)))) {
        local_8 = *(int *)(param_1[2] + 0xc + iVar5);
        iVar3 = iVar2;
        local_4 = iVar4;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar4 < *param_1);
    iVar5 = local_4;
  }
  iVar3 = param_1[2];
  param_1[param_1[0x12] + 3] = iVar5;
  param_1[0x12] = param_1[0x12] + 1;
  return iVar3 + iVar5 * 0x10;
#undef local_8
#undef local_4
}
