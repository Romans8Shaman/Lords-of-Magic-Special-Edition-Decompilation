/* Rebuilt from lomse.exe FUN_0048c860 @ 0x0048c860 (248 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583574 (*(int *)0x00583574)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005d1e84 (*(int *)0x005d1e84)
#define FUN_00489b70 ((undefined4 (__thiscall *)(void *, int *))0x00489b70)
#define FUN_0048c050 ((undefined4 (__fastcall *)(int))0x0048c050)
#define FUN_0048c2b0 ((int (__fastcall *)(int))0x0048c2b0)
#define FUN_0048c7f0 ((int (__stdcall *)(void))0x0048c7f0)
#define FUN_0048cc70 ((int (__thiscall *)(void *, undefined1))0x0048cc70)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)

#define LOM_SELF_0048c860 1
undefined4 __fastcall rb_0048c860(int *param_1)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uchar _fr[0x110] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_108;
  typedef undefined1 _t_local_101;
  typedef int _t_local_ff;
  typedef int _t_local_fb;
  typedef int _t_local_f7;
#define local_108 (*(_t_local_108 *)(_fr + 0x0))
#define local_101 (*(_t_local_101 *)(_fr + 0x7))
#define local_ff (*(_t_local_ff *)(_fr + 0x9))
#define local_fb (*(_t_local_fb *)(_fr + 0xd))
#define local_f7 (*(_t_local_f7 *)(_fr + 0x11))
  
  piVar3 = (int *)FUN_0048c2b0((int)param_1);
  if ((((piVar3 != (int *)0x0) && (cVar1 = (char)param_1[1], cVar1 != '=')) && (*piVar3 != -2)) &&
     (((DAT_00583574 == 0 || (cVar1 == '>')) || (*(char *)((int)param_1 + 7) != '\x02')))) {
    if ((cVar1 == ':') && (iVar4 = FUN_0048c7f0(), iVar4 != 1)) {
      return 0;
    }
    if (piVar3[1] != 0) {
      if (DAT_005d1e84 == 0) {
        bVar2 = 1;
      }
      else {
        uVar5 = FUN_004b7dd0(DAT_005d1e84);
        bVar2 = (byte)uVar5;
      }
      uVar6 = 1 << (bVar2 & 0x1f);
      if (((piVar3[1] & uVar6) != 0) && (((char)param_1[1] != '>' || (DAT_00583574 != 0)))) {
        piVar3[1] = uVar6 ^ piVar3[1];
        FUN_0048c050((int)param_1);
        FUN_0048cc70(&local_108,0x3d);
        local_fb = piVar3[1];
        local_f7 = piVar3[2];
        local_ff = *piVar3;
        local_101 = *(undefined1 *)((int)param_1 + 7);
        local_108 = *param_1;
        FUN_00489b70(&DAT_00584ae8,&local_108);
        return 1;
      }
    }
  }
  return 0;
#undef local_108
#undef local_101
#undef local_ff
#undef local_fb
#undef local_f7
}
