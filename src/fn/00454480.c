/* Rebuilt from lomse.exe FUN_00454480 @ 0x00454480 (586 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0058364c (*(int *)0x0058364c)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005876d0 (*(undefined4 *)0x005876d0)
#define DAT_00587718 (*(undefined4 *)0x00587718)
#define DAT_00587720 (*(undefined4 *)0x00587720)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_0040b5e0 ((undefined4 (__fastcall *)(int *))0x0040b5e0)
#define FUN_0040c040 ((undefined4 (__fastcall *)(int *))0x0040c040)
#define FUN_0040cb00 ((undefined4 (__fastcall *)(int *))0x0040cb00)
#define FUN_0040e220 ((undefined4 (__fastcall *)(int *))0x0040e220)
#define FUN_0040f430 ((undefined4 (__fastcall *)(int *))0x0040f430)
#define FUN_00469d80 ((undefined4 (__thiscall *)(void *, float))0x00469d80)
#define FUN_00469e80 ((undefined4 (__thiscall *)(void *, float))0x00469e80)
#define FUN_004755e0 ((undefined * (__fastcall *)(int))0x004755e0)
#define FUN_004756c0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x004756c0)
#define FUN_00480130 ((undefined4 (__thiscall *)(void *, int, void *, int, int, undefined4, int, undefined4, int *, int *, uint, int))0x00480130)
#define FUN_00481610 ((undefined4 (__thiscall *)(void *, int))0x00481610)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_00495370 ((undefined4 (__thiscall *)(void *, byte *))0x00495370)
#define FUN_00495db0 ((undefined4 (__thiscall *)(void *, int *, int, int))0x00495db0)
#define FUN_004a4f20 ((undefined4 (__thiscall *)(void *, int, int, int))0x004a4f20)
#define FUN_004a9ca0 ((undefined4 (__thiscall *)(void *, int))0x004a9ca0)
#define FUN_004c5ef0 ((undefined4 (__thiscall *)(void *, int, int))0x004c5ef0)
#define FUN_005000f0 ((undefined4 (__thiscall *)(void *, int))0x005000f0)
#define FUN_00504ce0 ((undefined4 (__thiscall *)(void *, int, int))0x00504ce0)
#define FUN_00505970 ((undefined4 (__thiscall *)(void *, int, int))0x00505970)
#define FUN_005059a0 ((undefined4 (__thiscall *)(void *, int, undefined4))0x005059a0)
#define FUN_0051ab30 ((undefined4 (__thiscall *)(void *, int, int, int, int))0x0051ab30)
#define _DAT_00587880 (*(undefined4 *)0x00587880)
#define _DAT_00587884 (*(undefined4 *)0x00587884)
#define s_lbm_strt3_bk_lbm_00557594 (*(char (*)[])0x00557594)
#define s_lbm_strt3_fr_lbm_00557580 (*(char (*)[])0x00557580)

#define LOM_SELF_00454480 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall rb_00454480(void *param_1)

{
  int iVar1;
  undefined4 *this;
  uint uVar2;
  int iVar3;
  int iVar4;
  uchar _fr[0x30] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_28;
  typedef int _t_local_24;
  typedef void * _t_local_20;
  typedef undefined4 _t_local_1c;
  typedef undefined4 _t_local_18;
  typedef undefined4 _t_local_14;
  typedef undefined4 _t_local_10;
#define local_28 (*(_t_local_28 *)(_fr + 0x0))
#define local_24 (*(_t_local_24 *)(_fr + 0x4))
#define local_20 (*(_t_local_20 *)(_fr + 0x8))
#define local_1c (*(_t_local_1c *)(_fr + 0xc))
#define local_18 (*(_t_local_18 *)(_fr + 0x10))
#define local_14 (*(_t_local_14 *)(_fr + 0x14))
#define local_10 (*(_t_local_10 *)(_fr + 0x18))

  *(undefined4 *)((int)param_1 + 0xbc) = DAT_00587718;
  *(undefined4 *)((int)param_1 + 0xc0) = DAT_00587720;
  FUN_0040b5e0((int *)((int)param_1 + 0x4d4c));
  FUN_0040c040((int *)((int)param_1 + 0x4d60));
  FUN_0040cb00((int *)((int)param_1 + 0x4d74));
  FUN_0040e220((int *)((int)param_1 + 0x4d84));
  FUN_0040e220((int *)((int)param_1 + 0x4d94));
  FUN_0040f430((int *)((int)param_1 + 0x4da4));
  FUN_004a4f20((void *)((int)param_1 + 0x482c),0x18,0x18,1);
  FUN_0051ab30(&DAT_005876d0,0xc,0xc,0x15c,0xe4);
  FUN_00469d80(&DAT_005876d0,223.5);
  FUN_00469e80(&DAT_005876d0,22.5);
  FUN_004a9ca0(&DAT_005ae958,1);
  FUN_004c5ef0((void *)((int)param_1 + 0x4dd8),*(int *)((int)param_1 + 0x4898),
               *(int *)((int)param_1 + 0x489c));
  FUN_00495370((void *)((int)param_1 + 0x608),(byte *)s_lbm_strt3_bk_lbm_00557594);
  FUN_00495370((void *)((int)param_1 + 0x5e8),(byte *)s_lbm_strt3_fr_lbm_00557580);
  local_10 = *(undefined4 *)((int)param_1 + 0x610);
  local_14 = *(undefined4 *)((int)param_1 + 0x60c);
  DAT_0058364c = DAT_0058364c + 0x14;
  local_1c = 0;
  local_18 = 0;
  local_20 = (void *)((int)param_1 + 0x608);
  this = (undefined4 *)FUN_004755e0(0x584ae8);
  _DAT_00587880 = 0;
  _DAT_00587884 = 0;
  *(undefined4 *)((int)param_1 + 0x628) = 0;
  *(undefined4 *)((int)param_1 + 0x62c) = 0;
  FUN_00495db0(this,(int *)&local_20,0,0);
  FUN_004756c0(&DAT_00584ae8,this);
  FUN_00505970(&DAT_00584ae8,8,0x42);
  FUN_005059a0(&DAT_00584ae8,8,0x3e051eb8);
  FUN_00481610(param_1,8);
  FUN_005000f0(&DAT_00584ae8,8);
  FUN_00504ce0(&DAT_00584ae8,1,0);
  iVar3 = 0;
  if (0 < *(int *)((int)param_1 + 0xb4)) {
    iVar4 = 0;
    do {
      iVar1 = iVar4 + *(int *)((int)param_1 + 0xb8);
      FUN_00480130(param_1,*(int *)(iVar1 + 8),*(void **)(iVar1 + 0xc),DAT_005a7d8c,
                   *(int *)(iVar1 + 4),100,*(int *)(iVar1 + 0x30),1000,&local_28,&local_24,0,-1);
      uVar2 = FUN_00482ac0(param_1,local_28,0);
      iVar3 = iVar3 + 1;
      *(uint *)(iVar4 + *(int *)((int)param_1 + 0xb8)) = uVar2;
      iVar4 = iVar4 + 0x38;
    } while (iVar3 < *(int *)((int)param_1 + 0xb4));
  }
  DAT_0058364c = DAT_0058364c + -0x14;
  return 1;
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_10
}
