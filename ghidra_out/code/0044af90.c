
void __thiscall FUN_0044af90(void *this,uint *param_1)

{
  uint uVar1;
  char *pcVar2;
  char acStack_258 [100];
  undefined1 auStack_1f4 [500];
  
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
}


