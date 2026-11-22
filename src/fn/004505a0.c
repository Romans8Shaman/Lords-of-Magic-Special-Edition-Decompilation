/* Rebuilt from lomse.exe FUN_004505a0 @ 0x004505a0 (559 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0041d1d0 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x0041d1d0)
#define FUN_0044e850 ((undefined4 * (__fastcall *)(undefined4 *))0x0044e850)
#define FUN_0044e9d0 ((undefined4 (__fastcall *)(undefined4 *))0x0044e9d0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define s_getcitydata___invalid_data_id_005573d0 (*(char (*)[])0x005573d0)
#define s_getcitydata___invalid_player_ref_005573f0 (*(char (*)[])0x005573f0)
#define s_getcitydata___no_city_00557418 (*(char (*)[])0x00557418)

#define LOM_SELF_004505a0 1
void __cdecl rb_004505a0(int param_1,int param_2,undefined4 param_3,void *param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  uchar _fr[0x360] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_358[211];
#define local_358 (*(_t_local_358 *)(_fr + 0x0))

  FUN_0044e850(local_358);
  if (param_1 == 0) {
    pcVar3 = s_getcitydata___no_city_00557418;
LAB_00450787:
    FUN_004d41c0(param_4,pcVar3);
    iVar4 = 0;
    uVar2 = 1;
    goto LAB_004507a0;
  }
  switch(param_3) {
  case 0:
    if ((param_2 < 0) || (0xf < param_2)) {
      FUN_004d41c0(param_4,s_getcitydata___invalid_player_ref_005573f0);
      if (*(int *)((int)param_4 + 0x54) == 0) {
        FUN_00404ab0(param_4,3);
      }
      else {
        iVar1 = *(int *)((int)param_4 + 0x54) + -1;
        *(int *)((int)param_4 + 0x54) = iVar1;
        iVar4 = *(int *)((int)param_4 + 0x50);
        *(undefined4 *)(iVar4 + iVar1 * 8) = 1;
        *(undefined4 *)(iVar4 + 4 + iVar1 * 8) = 0;
      }
      goto LAB_004507a5;
    }
    iVar4 = *(int *)(param_1 + 0x84 + param_2 * 4);
    uVar2 = 1;
    break;
  case 1:
    iVar4 = *(int *)(param_1 + 0x68);
    uVar2 = 1;
    break;
  case 2:
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    if (*(int *)((int)param_4 + 0x54) != 0) {
      iVar1 = *(int *)((int)param_4 + 0x54) + -1;
      *(int *)((int)param_4 + 0x54) = iVar1;
      iVar4 = *(int *)((int)param_4 + 0x50);
      *(undefined4 *)(iVar4 + iVar1 * 8) = 1;
      *(undefined4 *)(iVar4 + 4 + iVar1 * 8) = uVar2;
      goto LAB_004507a5;
    }
    goto LAB_00450779;
  case 3:
    iVar4 = *(int *)(param_1 + 0x74);
    uVar2 = 1;
    break;
  case 4:
    uVar2 = *(undefined4 *)(param_1 + 0x78);
    if (*(int *)((int)param_4 + 0x54) != 0) {
      iVar1 = *(int *)((int)param_4 + 0x54) + -1;
      *(int *)((int)param_4 + 0x54) = iVar1;
      iVar4 = *(int *)((int)param_4 + 0x50);
      *(undefined4 *)(iVar4 + iVar1 * 8) = 1;
      *(undefined4 *)(iVar4 + 4 + iVar1 * 8) = uVar2;
      goto LAB_004507a5;
    }
    goto LAB_00450779;
  case 5:
    iVar4 = *(int *)(param_1 + 0x7c);
    uVar2 = 1;
    break;
  case 6:
    iVar4 = *(int *)(param_1 + 0x80);
    uVar2 = 1;
    break;
  case 7:
    uVar2 = *(undefined4 *)(param_1 + 0xd4);
    goto LAB_0045075b;
  case 8:
    iVar4 = param_1 + 0x48;
    uVar2 = 8;
    break;
  default:
    pcVar3 = s_getcitydata___invalid_data_id_005573d0;
    goto LAB_00450787;
  case 10:
    iVar4 = *(int *)(param_1 + 0x1c);
    uVar2 = 1;
    break;
  case 0xb:
    uVar2 = *(undefined4 *)(param_1 + 0x340);
LAB_0045075b:
    if (*(int *)((int)param_4 + 0x54) != 0) {
      iVar1 = *(int *)((int)param_4 + 0x54) + -1;
      *(int *)((int)param_4 + 0x54) = iVar1;
      iVar4 = *(int *)((int)param_4 + 0x50);
      *(undefined4 *)(iVar4 + iVar1 * 8) = 1;
      *(undefined4 *)(iVar4 + 4 + iVar1 * 8) = uVar2;
      goto LAB_004507a5;
    }
LAB_00450779:
    FUN_00404ab0(param_4,3);
    goto LAB_004507a5;
  }
LAB_004507a0:
  FUN_0041d1d0(param_4,uVar2,iVar4);
LAB_004507a5:
  FUN_0044e9d0(local_358);
  return;
#undef local_358
}
