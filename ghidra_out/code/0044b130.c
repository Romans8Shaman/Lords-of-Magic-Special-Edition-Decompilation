
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_0044b130(void *this,int *param_1)

{
  int *this_00;
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = 1;
  if (*(int *)((int)this + 0x4a0) != 0) {
    pcVar3 = s_lpDirectPlay3A_>Receive_lpnm_>lp_0055719c;
    *(undefined4 *)((int)param_1 + 0x101) = 0x105;
    _DAT_0057926c = 1;
    this_00 = *(int **)((int)this + 0x4a0);
    iVar1 = (/*IC:0044b17e*/**(code **)(*this_00 + 100))
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
        (/*IC:0044b1ef*/**(code **)(*(int *)this + 0x18))(this);
      }
      else if (*param_1 == 5) {
        iVar1 = (/*IC:0044b1c1*/**(code **)(*(int *)this + 0x5c))(this,param_1[2]);
        OutputDebugStringA(s_CDPlay___A_player_left_the_game_00557144);
        FUN_004b6f50(iVar1);
        uVar2 = (/*IC:0044b1e1*/**(code **)(*(int *)this + 0x54))(this,param_1);
        return uVar2;
      }
      uVar2 = (/*IC:0044b1f7*/**(code **)(*(int *)this + 0x54))(this,param_1);
      return uVar2;
    }
  }
  return uVar2;
}


