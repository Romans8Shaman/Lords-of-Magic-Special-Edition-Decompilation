
void __thiscall FUN_004aeff0(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 unused_reg_1;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = FUN_00521e00((int *)((int)this + *(int *)((int)this + 0x50) * 0x4c + 0xc4));
  if (iVar1 == 0) {
    OutputDebugStringA(s_Can_t_fire_missile___no_imp_0055cc80);
    return;
  }
  local_50 = *(undefined4 *)((int)this + 0x28);
  local_48 = *(undefined4 *)((int)this + 0xe4);
  local_44 = *(undefined4 *)(param_1 + 0x28);
  local_4c = 0;
  local_40 = 0;
  local_3c = *(int *)(iVar1 + 0x50);
  local_38 = *(undefined4 *)(iVar1 + 0x54);
  local_34 = DAT_0055cc24;
  local_5c = *(undefined4 *)((int)this + 0x1c);
  local_30 = (*(int *)((int)this + 0x68) != 0x12) - 1 & 2;
  local_58 = 0;
  local_54 = 0xffffffff;
  local_18 = 0;
  local_14 = 0xffffffff;
  iVar1 = FUN_004af4a0(&DAT_005cd2f8,local_3c);
  if (iVar1 == 0) {
    local_10 = 0xffffffff;
  }
  else {
    local_10 = *(undefined4 *)(iVar1 + 0x18);
  }
  local_28 = 0xffffffff;
  local_2c = 0;
  local_24 = 4;
  local_20 = 1;
  local_1c = 0xffffffff;
  piVar2 = FUN_004ad860(0x5aa12c,unused_reg_1,&local_5c);
  FUN_004aec10(piVar2);
  FUN_004a9a60(&DAT_005ae958,&local_60,*(int *)((int)this + 0x1c));
  if ((local_60 & 0x200000) != 0) {
    piVar2[0x1c] = piVar2[0x1c] | 0x100000;
  }
  return;
}


