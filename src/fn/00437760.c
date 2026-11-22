/* Rebuilt from lomse.exe FUN_00437760 @ 0x00437760 (390 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_00421880 ((int (__thiscall *)(void *, uint))0x00421880)
#define FUN_004373e0 ((uint (__thiscall *)(void *, int *, uint *))0x004373e0)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)
#define FUN_004fbed0 ((undefined4 * (__thiscall *)(void *, int))0x004fbed0)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_00437760 1
undefined4 __fastcall rb_00437760(void *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_8;
  typedef uint _t_local_4;
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  iVar1 = FUN_004f6000(&DAT_005ae974,*(int *)((int)param_1 + 0x48));
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)((int)param_1 + 0x68) = *(undefined4 *)(iVar1 + 0x1c);
  piVar2 = FUN_004fbed0(&DAT_005ae974,0);
  iVar1 = 0;
  for (; piVar2 != (int *)0x0; piVar2 = FUN_004fbed0(&DAT_005ae974,(int)piVar2)) {
    uVar3 = FUN_004373e0(param_1,piVar2,&local_4);
    if (uVar3 != 0) {
      iVar1 = iVar1 + 1;
    }
  }
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)((int)param_1 + 0x110) = 0;
  if (*(int *)((int)param_1 + 0x114) < iVar1) {
    if (*(int *)((int)param_1 + 0x10c) != 0) {
      Ordinal_403(*(int *)((int)param_1 + 0x10c),s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
    iVar4 = Ordinal_401(iVar1 << 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    *(int *)((int)param_1 + 0x10c) = iVar4;
    if (iVar4 == 0) {
      *(undefined4 *)((int)param_1 + 0x114) = 0;
      return 0;
    }
    *(int *)((int)param_1 + 0x114) = iVar1;
  }
  for (piVar2 = FUN_004fbed0(&DAT_005ae974,0); piVar2 != (int *)0x0;
      piVar2 = FUN_004fbed0(&DAT_005ae974,(int)piVar2)) {
    uVar3 = FUN_004373e0(param_1,piVar2,&uStack_8);
    if (uVar3 != 0) {
      *(int *)(*(int *)((int)param_1 + 0x110) * 0x10 + *(int *)((int)param_1 + 0x10c)) = piVar2[10];
      *(int *)(*(int *)((int)param_1 + 0x110) * 0x10 + 4 + *(int *)((int)param_1 + 0x10c)) =
           piVar2[7];
      *(undefined4 *)(*(int *)((int)param_1 + 0x110) * 0x10 + 8 + *(int *)((int)param_1 + 0x10c)) =
           0x7ffffffe;
      iVar1 = FUN_00421880(piVar2,uStack_8);
      *(int *)(*(int *)((int)param_1 + 0x110) * 0x10 + 0xc + *(int *)((int)param_1 + 0x10c)) = iVar1
      ;
      *(int *)((int)param_1 + 0x110) = *(int *)((int)param_1 + 0x110) + 1;
    }
  }
  return 1;
#undef uStack_8
#undef local_4
}
