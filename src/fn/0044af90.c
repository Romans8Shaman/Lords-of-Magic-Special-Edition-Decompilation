/* Rebuilt from lomse.exe FUN_0044af90 @ 0x0044af90 (262 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00557034 (*(undefined *)0x00557034)
#define FUN_005047d0 ((undefined4 (__stdcall *)(undefined4))0x005047d0)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define s_ADDPLAYERTOGROUP_005570c8 (*(char (*)[])0x005570c8)
#define s_CONNECT_0055702c (*(char (*)[])0x0055702c)
#define s_CREATEPLAYERORGROUP_0055709c (*(char (*)[])0x0055709c)
#define s_DELETEGROUP_00557090 (*(char (*)[])0x00557090)
#define s_DELETEPLAYERFROMGROUP_00557078 (*(char (*)[])0x00557078)
#define s_DESTROYPLAYERORGROUP_005570b0 (*(char (*)[])0x005570b0)
#define s_SESSIONLOST_0055706c (*(char (*)[])0x0055706c)
#define s_SETPLAYERORGROUPDATA_0055703c (*(char (*)[])0x0055703c)
#define s_SETPLAYERORGROUPNAME_00557054 (*(char (*)[])0x00557054)
#define s_Type__d_0055700c (*(char (*)[])0x0055700c)
#define s_Unknown_System_Message_00557014 (*(char (*)[])0x00557014)
#define s__d_received_unprocessed_message_f_00556fd0 (*(char (*)[])0x00556fd0)

#define LOM_SELF_0044af90 1
void __thiscall rb_0044af90(void *this,uint *param_1)

{
  uint uVar1;
  char *pcVar2;
  uchar _fr[0x260] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef char _t_acStack_258[100];
  typedef undefined1 _t_auStack_1f4[500];
#define acStack_258 (*(_t_acStack_258 *)(_fr + 0x0))
#define auStack_1f4 (*(_t_auStack_1f4 *)(_fr + 0x64))
  
  if (param_1[0x42] != 0xffff) {
    FUN_0053a090(acStack_258,s_Type__d_0055700c,(uint)(byte)param_1[1]);
    pcVar2 = acStack_258;
    goto LAB_0044b057;
  }
  uVar1 = *param_1;
  if (uVar1 < 0x21) {
    if (uVar1 == 0x20) {
      pcVar2 = s_DELETEGROUP_00557090;
      goto LAB_0044b057;
    }
    if (uVar1 == 3) {
      pcVar2 = s_CREATEPLAYERORGROUP_0055709c;
      goto LAB_0044b057;
    }
    if (uVar1 == 5) {
      pcVar2 = s_DESTROYPLAYERORGROUP_005570b0;
      goto LAB_0044b057;
    }
    if (uVar1 == 7) {
      pcVar2 = s_ADDPLAYERTOGROUP_005570c8;
      goto LAB_0044b057;
    }
  }
  else if (uVar1 < 0x32) {
    if (uVar1 == 0x31) {
      pcVar2 = s_SESSIONLOST_0055706c;
      goto LAB_0044b057;
    }
    if (uVar1 == 0x21) {
      pcVar2 = s_DELETEPLAYERFROMGROUP_00557078;
      goto LAB_0044b057;
    }
  }
  else if (uVar1 < 0x484c) {
    if (uVar1 == 0x484b) {
      pcVar2 = s_CONNECT_0055702c;
      goto LAB_0044b057;
    }
    if (uVar1 == 0x101) {
      pcVar2 = &DAT_00557034;
      goto LAB_0044b057;
    }
    if (uVar1 == 0x102) {
      pcVar2 = s_SETPLAYERORGROUPDATA_0055703c;
      goto LAB_0044b057;
    }
    if (uVar1 == 0x103) {
      pcVar2 = s_SETPLAYERORGROUPNAME_00557054;
      goto LAB_0044b057;
    }
  }
  pcVar2 = s_Unknown_System_Message_00557014;
LAB_0044b057:
  FUN_0053a090(auStack_1f4,s__d_received_unprocessed_message_f_00556fd0,*(uint *)((int)this + 0x120)
               ,param_1[0x42],*(undefined4 *)((int)param_1 + 0x101),pcVar2);
  FUN_005047d0(auStack_1f4);
  return;
#undef acStack_258
#undef auStack_1f4
}
