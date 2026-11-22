/* Rebuilt from lomse.exe FUN_0044b130 @ 0x0044b130 (218 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004756f0 ((undefined4 (__cdecl *)(int, ...))0x004756f0)
#define FUN_004b6f50 ((undefined4 (__stdcall *)(int))0x004b6f50)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define _DAT_0057926c (*(undefined4 *)0x0057926c)
#define s_CDPlay__ReceiveNetworkMessage_go_00557168 (*(char (*)[])0x00557168)
#define s_CDPlay___A_player_left_the_game_00557144 (*(char (*)[])0x00557144)
#define s_lpDirectPlay3A__gt_Receive_lpnm__gt_lp_0055719c (*(char (*)[])0x0055719c)

#define LOM_SELF_0044b130 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall rb_0044b130(void *this,int *param_1)

{
  int *this_00;
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = 1;
  if (*(int *)((int)this + 0x4a0) != 0) {
    pcVar3 = s_lpDirectPlay3A__gt_Receive_lpnm__gt_lp_0055719c;
    *(undefined4 *)((int)param_1 + 0x101) = 0x105;
    _DAT_0057926c = 1;
    this_00 = *(int **)((int)this + 0x4a0);
    iVar1 = ((undefined4 (__thiscall *)(__typeof__(this_00), __typeof__(this_00), __typeof__(param_1 + 0x42), __typeof__(param_1 + 0x43), __typeof__(1), __typeof__(param_1), __typeof__((undefined4 *)((int)param_1 + 0x101))))(**(code **)(*this_00 + 100)))
                      (this_00,this_00,param_1 + 0x42,param_1 + 0x43,1,param_1,
                       (undefined4 *)((int)param_1 + 0x101));
    iVar1 = FUN_004756f0(iVar1,pcVar3);
    _DAT_0057926c = 0;
    if (iVar1 == 1) {
      OutputDebugStringA(s_CDPlay__ReceiveNetworkMessage_go_00557168);
    }
    uVar2 = (uint)(iVar1 != 1);
    if ((uVar2 == 0) && (param_1[0x42] == 0)) {
      if (*param_1 == 3) {
        ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*(int *)this + 0x18)))(this);
      }
      else if (*param_1 == 5) {
        iVar1 = ((undefined4 (__thiscall *)(__typeof__(this), __typeof__(param_1[2])))(**(code **)(*(int *)this + 0x5c)))(this,param_1[2]);
        OutputDebugStringA(s_CDPlay___A_player_left_the_game_00557144);
        FUN_004b6f50(iVar1);
        uVar2 = ((undefined4 (__thiscall *)(__typeof__(this), __typeof__(param_1)))(**(code **)(*(int *)this + 0x54)))(this,param_1);
        return uVar2;
      }
      uVar2 = ((undefined4 (__thiscall *)(__typeof__(this), __typeof__(param_1)))(**(code **)(*(int *)this + 0x54)))(this,param_1);
      return uVar2;
    }
  }
  return uVar2;
}
