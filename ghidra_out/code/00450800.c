
char * __cdecl FUN_00450800(int *param_1,int param_2,uint param_3,void *param_4)

{
  int *this;
  void *this_00;
  int iVar1;
  undefined8 uVar2;
  uint *puVar3;
  char *pcVar4;
  char local_8 [4];
  char *local_4;
  
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
    pcVar4 = (char *)FUN_004026a0((uint *)local_8,puVar3,&param_3,(float *)&param_1);
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
    pcVar4 = (char *)FUN_004026a0((uint *)local_8,(uint *)(this + 0x1c),&param_3,(float *)&param_1);
    if (pcVar4 == (char *)0x0) {
      pcVar4 = (char *)FUN_00404ab0(this_00,0xe);
      return pcVar4;
    }
    break;
  case 3:
    FUN_0040adb0(param_4,(undefined4 *)local_8);
    iVar1 = FUN_004026a0((uint *)local_8,(uint *)(this + 0x1d),&param_3,(float *)&param_1);
    if (iVar1 == 0) {
      pcVar4 = (char *)FUN_00404ab0(this_00,0xe);
      return pcVar4;
    }
    pcVar4 = (char *)(/*IC:0045098d*/**(code **)(*this + 0x2c))(this);
    return pcVar4;
  case 4:
    FUN_0040adb0(param_4,(undefined4 *)local_8);
    pcVar4 = (char *)FUN_004026a0((uint *)local_8,(uint *)(this + 0x1e),&param_3,(float *)&param_1);
    if (pcVar4 == (char *)0x0) {
      pcVar4 = (char *)FUN_00404ab0(this_00,0xe);
      return pcVar4;
    }
    break;
  case 5:
    FUN_0040adb0(param_4,(undefined4 *)local_8);
    pcVar4 = (char *)FUN_004026a0((uint *)local_8,(uint *)(this + 0x1f),&param_3,(float *)&param_1);
    if (pcVar4 == (char *)0x0) {
      pcVar4 = (char *)FUN_00404ab0(this_00,0xe);
      return pcVar4;
    }
    break;
  case 6:
    FUN_0040adb0(param_4,(undefined4 *)local_8);
    iVar1 = FUN_004026a0((uint *)local_8,(uint *)(this + 0x20),&param_3,(float *)&param_1);
    if (iVar1 == 0) {
      pcVar4 = (char *)FUN_00404ab0(this_00,0xe);
      return pcVar4;
    }
    pcVar4 = (char *)(/*IC:00450a67*/**(code **)(*this + 0x2c))(this);
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
    iVar1 = FUN_004026a0((uint *)local_8,(uint *)&param_4,&param_3,(float *)&param_1);
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
}


