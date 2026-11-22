/* Rebuilt from lomse.exe FUN_004b8ba0 @ 0x004b8ba0 (631 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584458 (*(undefined *)0x00584458)
#define FUN_00489b50 ((int (__stdcall *)(int))0x00489b50)
#define FUN_004b69a0 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4))0x004b69a0)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)
#define FUN_005047d0 ((undefined4 (__stdcall *)(undefined4))0x005047d0)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define s_Error__expected_message___d_from_0055d4d4 (*(char (*)[])0x0055d4d4)
#define s_Got_info_for_player__d_from_lpnm_0055d520 (*(char (*)[])0x0055d520)
#define s_Host_ignores_COMPUTER_INFO_0055d54c (*(char (*)[])0x0055d54c)
#define s_Invalid_computer_id_0055d508 (*(char (*)[])0x0055d508)
#define s_It_s_me_0055d500 (*(char (*)[])0x0055d500)
#define s__s__receive_error_0055d4c0 (*(char (*)[])0x0055d4c0)
#define s__s__received_message_from__x_0055d574 (*(char (*)[])0x0055d574)
#define s_ignored__d_0055d568 (*(char (*)[])0x0055d568)

#define LOM_SELF_004b8ba0 1
undefined4 __thiscall rb_004b8ba0(void *this,int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uchar _fr[0x110] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined1 _t_auStack_104[260];
#define auStack_104 (*(_t_auStack_104 *)(_fr + 0x4))
  
  *(undefined1 *)(param_1 + 4) = 0;
  iVar2 = ((undefined4 (__thiscall *)(__typeof__(this), __typeof__(param_1)))(**(code **)(*(int *)this + 0x54)))(this,param_1);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x101);
    iVar3 = FUN_00489b50((uint)*(byte *)(param_1 + 4));
    iVar3 = iVar3 - iVar2;
    if (-1 < iVar3 + -1) {
      iVar2 = iVar3 + -1 + param_1;
      do {
        iVar3 = iVar3 + -1;
        *(undefined1 *)(iVar2 + *(int *)(param_1 + 0x101)) = 0;
        iVar2 = iVar2 + -1;
      } while (iVar3 != 0);
    }
    FUN_00489b50((uint)*(byte *)(param_1 + 4));
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 1;
    FUN_004b69a0(s__s__received_message_from__x_0055d574,0,*(undefined4 *)(param_1 + 0x108));
    if (*(int *)(param_1 + 0x108) == *(int *)((int)this + 0x2c4)) {
      FUN_0053a090(auStack_104,s_ignored__d_0055d568,(uint)*(byte *)(param_1 + 4));
      FUN_005047d0(auStack_104);
      *(undefined1 *)(param_1 + 4) = 0;
      return 1;
    }
    if (*(int *)(param_1 + 0x10c) != *(int *)((int)this + 0x2c4)) {
      ((undefined4 (__thiscall *)(__typeof__(this), __typeof__(param_1)))(**(code **)(*(int *)this + 0x38)))(this,param_1);
      *(undefined1 *)(param_1 + 4) = 0;
      return 1;
    }
    if (*(char *)(param_1 + 4) == '\"') {
      iVar2 = *(int *)((int)this + 0x390);
      iVar3 = FUN_004b7dd0((int)this);
      if (iVar2 == iVar3) {
        FUN_005047d0(s_Host_ignores_COMPUTER_INFO_0055d54c);
        *(undefined1 *)(param_1 + 4) = 0;
        return 1;
      }
      FUN_0053a090(auStack_104,s_Got_info_for_player__d_from_lpnm_0055d520,*(uint *)(param_1 + 0x19)
                   ,*(undefined4 *)(param_1 + 0x15));
      FUN_005047d0(auStack_104);
      if ((*(int *)(param_1 + 0x19) < 1) || (4 < *(int *)(param_1 + 0x19))) {
        FUN_005047d0(s_Invalid_computer_id_0055d508);
      }
      puVar4 = (undefined4 *)(param_1 + 0x15);
      puVar5 = (undefined4 *)((int)this + *(int *)(param_1 + 0x19) * 0x25 + -0x19);
      for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      if (*(int *)(param_1 + 0x15) == *(int *)((int)this + 0x2c4)) {
        FUN_005047d0(s_It_s_me_0055d500);
        *(undefined4 *)((int)this + 0x120) = *(undefined4 *)(param_1 + 0x19);
      }
      iVar2 = *(int *)((int)this + 0x100);
      if (*(int *)((int)this + 0x100) < *(int *)(param_1 + 0x19)) {
        iVar2 = *(int *)(param_1 + 0x19);
      }
      *(int *)((int)this + 0x100) = iVar2;
      *(undefined1 *)(param_1 + 4) = 0;
      return 1;
    }
    iVar2 = ((undefined4 (__thiscall *)(__typeof__(this), __typeof__(*(int *)(param_1 + 0x108))))(**(code **)(*(int *)this + 0x5c)))(this,*(int *)(param_1 + 0x108));
    bVar1 = (&DAT_00584458)[iVar2] + 1;
    (&DAT_00584458)[iVar2] = bVar1;
    if (bVar1 != *(byte *)(param_1 + 5)) {
      FUN_0053a090(auStack_104,s_Error__expected_message___d_from_0055d4d4,(uint)bVar1,iVar2,
                   (uint)*(byte *)(param_1 + 5));
      FUN_005047d0(auStack_104);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
      (&DAT_00584458)[iVar2] = *(undefined1 *)(param_1 + 5);
      return 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 4) = 0;
    *(undefined4 *)((int)this + 0xdc) = 0;
    if (iVar2 != 1) {
      FUN_004b69a0(s__s__receive_error_0055d4c0,iVar2,0);
    }
  }
  return 1;
#undef auStack_104
}
