/* Rebuilt from lomse.exe FUN_00450800 @ 0x00450800 (881 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0041da00 ((undefined4 (__fastcall *)(int))0x0041da00)
#define FUN_0043da90 ((undefined8 (__thiscall *)(void *, int *))0x0043da90)
#define FUN_004a6dd0 ((uint (__thiscall *)(void *, int *, int, int))0x004a6dd0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define _strncpy ((char * (__cdecl *)(char *, char *, size_t))0x0053a220)
#define s_setcitydata___invalid_data_id_00557430 (*(char (*)[])0x00557430)
#define s_setcitydata___invalid_player_ref_00557468 (*(char (*)[])0x00557468)
#define s_setcitydata___no_city_00557490 (*(char (*)[])0x00557490)
#define s_setcitydata___no_string_00557450 (*(char (*)[])0x00557450)

#define LOM_SELF_00450800 1
char * __cdecl rb_00450800(int *volatile param_1, int volatile param_2, uint volatile param_3, void *volatile param_4)

{
  int *this;
  void *this_00;
  int iVar1;
  undefined8 uVar2;
  uint *puVar3;
  char *pcVar4;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef char _t_local_8[4];
  typedef char * _t_local_4;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  this_00 = param_4;
  iVar1 = param_2;
  this = param_1;
  if (param_1 == (int *)0x0) {
    pcVar4 = s_setcitydata___no_city_00557490;
LAB_00450867:
    FUN_004d41c0(param_4,pcVar4);
    if (*(int *)((int)this_00 + 0x54) < *(int *)((int)this_00 + 0x58)) {
      pcVar4 = (char *)(*(int *)((int)this_00 + 0x54) + 1);
      *(char **)((int)this_00 + 0x54) = pcVar4;
      return pcVar4;
    }
    *(undefined4 *)((int)this_00 + 0x90) = 6;
    pcVar4 = (char *)FUN_004d4550(this_00);
    *(undefined4 *)((int)this_00 + 0x90) = 0;
    *(undefined4 *)((int)this_00 + 0xa4) = 0;
    return pcVar4;
  }
  switch(param_3) {
  case 0:
    if ((param_2 < 0) || (0xf < param_2)) {
      pcVar4 = s_setcitydata___invalid_player_ref_00557468;
      goto LAB_00450867;
    }
    FUN_0040adb0(param_4,(undefined4 *)local_8);
    puVar3 = (uint *)(this + iVar1 + 0x21);
    goto LAB_004508d0;
  case 1:
    FUN_0040adb0(param_4,(undefined4 *)local_8);
    puVar3 = (uint *)(this + 0x1a);
LAB_004508d0:
    pcVar4 = (char *)FUN_004026a0((uint *)local_8,puVar3,&param_3,(undefined4 *)&param_1);
    if (pcVar4 == (char *)0x0) {
      *(undefined4 *)((int)this_00 + 0x90) = 0xe;
      pcVar4 = (char *)FUN_004d4550(this_00);
      *(undefined4 *)((int)this_00 + 0x90) = 0;
      *(undefined4 *)((int)this_00 + 0xa4) = 0;
      return pcVar4;
    }
    break;
  case 2:
    FUN_0040adb0(param_4,(undefined4 *)local_8);
    pcVar4 = (char *)FUN_004026a0((uint *)local_8,(uint *)(this + 0x1c),&param_3,(undefined4 *)&param_1);
    if (pcVar4 == (char *)0x0) {
      pcVar4 = (char *)FUN_00404ab0(this_00,0xe);
      return pcVar4;
    }
    break;
  case 3:
    FUN_0040adb0(param_4,(undefined4 *)local_8);
    iVar1 = FUN_004026a0((uint *)local_8,(uint *)(this + 0x1d),&param_3,(undefined4 *)&param_1);
    if (iVar1 == 0) {
      pcVar4 = (char *)FUN_00404ab0(this_00,0xe);
      return pcVar4;
    }
    pcVar4 = (char *)((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*this + 0x2c)))(this);
    return pcVar4;
  case 4:
    FUN_0040adb0(param_4,(undefined4 *)local_8);
    pcVar4 = (char *)FUN_004026a0((uint *)local_8,(uint *)(this + 0x1e),&param_3,(undefined4 *)&param_1);
    if (pcVar4 == (char *)0x0) {
      pcVar4 = (char *)FUN_00404ab0(this_00,0xe);
      return pcVar4;
    }
    break;
  case 5:
    FUN_0040adb0(param_4,(undefined4 *)local_8);
    pcVar4 = (char *)FUN_004026a0((uint *)local_8,(uint *)(this + 0x1f),&param_3,(undefined4 *)&param_1);
    if (pcVar4 == (char *)0x0) {
      pcVar4 = (char *)FUN_00404ab0(this_00,0xe);
      return pcVar4;
    }
    break;
  case 6:
    FUN_0040adb0(param_4,(undefined4 *)local_8);
    iVar1 = FUN_004026a0((uint *)local_8,(uint *)(this + 0x20),&param_3,(undefined4 *)&param_1);
    if (iVar1 == 0) {
      pcVar4 = (char *)FUN_00404ab0(this_00,0xe);
      return pcVar4;
    }
    pcVar4 = (char *)((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*this + 0x2c)))(this);
    return pcVar4;
  default:
    FUN_004d41c0(param_4,s_setcitydata___invalid_data_id_00557430);
    pcVar4 = (char *)FUN_0040adb0(this_00,(undefined4 *)local_8);
    break;
  case 8:
    FUN_0040adb0(param_4,(undefined4 *)local_8);
    iVar1 = FUN_0041da00((int)this_00);
    if (iVar1 == 0) {
      if (local_8[0] != '\b') {
        FUN_00404ab0(this_00,0xe);
        local_4 = (char *)0x0;
      }
    }
    else {
      local_4 = (char *)0x0;
    }
    if (local_4 == (char *)0x0) {
      pcVar4 = (char *)FUN_004d41c0(this_00,s_setcitydata___no_string_00557450);
      return pcVar4;
    }
    pcVar4 = _strncpy((char *)(this + 0x12),local_4,0x1d);
    return pcVar4;
  case 10:
    FUN_0040adb0(param_4,(undefined4 *)local_8);
    iVar1 = FUN_004026a0((uint *)local_8,(uint *)&param_4,&param_3,(undefined4 *)&param_1);
    if (iVar1 == 0) {
      pcVar4 = (char *)FUN_00404ab0(this_00,0xe);
      return pcVar4;
    }
    pcVar4 = (char *)FUN_004a6dd0(&DAT_005ae958,this,this[7],(int)param_4);
    return pcVar4;
  case 0xb:
    uVar2 = FUN_0043da90(param_4,param_1 + 0xd0);
    return (char *)uVar2;
  }
  return pcVar4;
#undef local_8
#undef local_4
}
