/* Rebuilt from lomse.exe FUN_00452e20 @ 0x00452e20 (269 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005792fc (*(int *)0x005792fc)
#define FUN_00452ce0 ((undefined4 (__thiscall *)(void *, int *))0x00452ce0)
#define FUN_00452fc0 ((undefined4 (__thiscall *)(void *, int))0x00452fc0)
#define FUN_004530e0 ((undefined4 (__cdecl *)(int))0x004530e0)
#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)

#define LOM_SELF_00452e20 1
undefined4 __cdecl rb_00452e20(int volatile param_1, int *volatile param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uchar _fr[0x40] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined1 _t_local_34[36];
  typedef undefined4 _t_local_10;
#define local_34 (*(_t_local_34 *)(_fr + 0x4))
#define local_10 (*(_t_local_10 *)(_fr + 0x28))

  piVar2 = param_2;
  iVar1 = param_1;
  iVar5 = 0;
  if (param_1 == 0) {
    return 0;
  }
  DAT_005792fc = DAT_005792fc + 0x28;
  local_10 = 0;
  uVar3 = FUN_005397f0((char *)&param_1,4,1,param_2);
  if (uVar3 != 1) {
    DAT_005792fc = DAT_005792fc + -0x28;
    return 0;
  }
  FUN_004530e0(iVar1);
  if (0 < param_1) {
    do {
      iVar4 = FUN_00452ce0(local_34,piVar2);
      if (iVar4 == 0) {
LAB_00452f0c:
        DAT_005792fc = DAT_005792fc + -0x28;
        return 0;
      }
      iVar4 = FUN_00452fc0(local_34,iVar1);
      if (iVar4 == 0) goto LAB_00452f0c;
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1);
  }
  DAT_005792fc = DAT_005792fc + -0x28;
  return 1;
#undef local_34
#undef local_10
}
