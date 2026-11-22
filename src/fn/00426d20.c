/* Rebuilt from lomse.exe FUN_00426d20 @ 0x00426d20 (227 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae970 (*(int *)0x005ae970)
#define DAT_005aeefc (*(undefined *)0x005aeefc)
#define FUN_004176d0 ((undefined4 (__thiscall *)(void *, int))0x004176d0)
#define FUN_00427880 ((undefined4 (__thiscall *)(void *, int *, int))0x00427880)
#define FUN_004279a0 ((undefined4 (__thiscall *)(void *, int))0x004279a0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)

#define LOM_SELF_00426d20 1
undefined4 __fastcall rb_00426d20(void *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef void * _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  if (*(int *)((int)param_1 + 0x538) < 0) {
    return 0;
  }
  local_4 = param_1;
  puVar2 = FUN_00485080(&DAT_005aa12c,*(int *)((int)param_1 + 0x54c),0x2f);
  if ((puVar2 == (undefined4 *)0x0) || (puVar2[0x12] != *(int *)((int)param_1 + 0x48))) {
    FUN_004176d0(param_1,0);
    return 1;
  }
  pvVar5 = *(void **)((int)param_1 + 0x538);
  local_4 = pvVar5;
  iVar3 = FUN_00427880(&DAT_005aeefc,(int *)&local_4,0);
  iVar4 = *(int *)(DAT_005ae970 + (iVar3 + *(int *)((int)param_1 + 0x1c) * 8) * 4);
  if (iVar3 != 8) {
    while (pvVar1 = local_4, -1 < (int)local_4) {
      iVar3 = FUN_00427880(&DAT_005aeefc,(int *)&local_4,0);
      iVar4 = *(int *)(DAT_005ae970 + (iVar3 + iVar4 * 8) * 4);
      pvVar5 = pvVar1;
      if ((iVar4 == puVar2[7]) || (iVar3 == 8)) break;
    }
  }
  if (iVar4 == puVar2[7]) {
    FUN_004279a0(&DAT_005aeefc,(int)pvVar5);
    *(int *)((int)param_1 + 0x548) = iVar4;
    return 1;
  }
  return 0;
#undef local_4
}
