
/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_0041d5f0(int *param_1,uint param_2,void *param_3)

{
  int *this;
  void *this_00;
  int iVar1;
  char local_8 [4];
  uint local_4;
  
  this_00 = param_3;
  this = param_1;
  if (param_1 == (int *)0x0) {
    FUN_004d41c0(param_3,s_setarmydata___no_army_00555b40);
    if (*(int *)((int)this_00 + 0x54) < *(int *)((int)this_00 + 0x58)) {
      *(int *)((int)this_00 + 0x54) = *(int *)((int)this_00 + 0x54) + 1;
      return;
    }
    *(undefined4 *)((int)this_00 + 0x90) = 6;
  }
  else {
    switch(param_2) {
    case 0:
      FUN_0040adb0(param_3,(undefined4 *)local_8);
      iVar1 = FUN_004026a0((uint *)local_8,(uint *)&param_3,&param_2,(float *)&param_1);
      if (iVar1 != 0) {
        if (((int)param_3 < 1) || (0xf < (int)param_3)) {
          FUN_004d41c0(this_00,s_setarmydata___invalid_value_for_n_00555b14);
          return;
        }
        this[0x13] = (int)param_3;
        return;
      }
      break;
    case 1:
      FUN_0040adb0(param_3,(undefined4 *)local_8);
      iVar1 = FUN_004026a0((uint *)local_8,(uint *)&param_3,&param_2,(float *)&param_1);
      if (iVar1 != 0) {
        if (((int)param_3 < 0) || (DAT_005ae9c0 <= (int)param_3)) {
          FUN_004d41c0(this_00,s_setarmydata___invalid_value_for_l_00555ae8);
          return;
        }
        FUN_004a6dd0(&DAT_005ae958,this,this[7],(int)param_3);
        (/*IC:0041d712*/**(code **)(*this + 0x1c))(this);
        return;
      }
      break;
    case 2:
      FUN_0040adb0(param_3,(undefined4 *)local_8);
      iVar1 = FUN_004026a0((uint *)local_8,(uint *)&param_3,&param_2,(float *)&param_1);
      if (iVar1 != 0) {
        if ((((int)param_3 < 0) || (0xf < (int)param_3)) && (param_3 != (void *)0xffffffff)) {
          FUN_004d41c0(this_00,s_setarmydata___invalid_value_for_o_00555ac0);
          return;
        }
        FUN_0041d2f0(&DAT_005aa12c,(int)this,(int)param_3);
        return;
      }
      break;
    default:
      FUN_004d41c0(param_3,s_setarmydata___invalid_data_id_00555a1c);
      FUN_0040adb0(this_00,(undefined4 *)local_8);
      return;
    case 7:
      FUN_0040adb0(param_3,(undefined4 *)local_8);
      iVar1 = FUN_004026a0((uint *)local_8,(uint *)&param_3,&param_2,(float *)&param_1);
      if (iVar1 != 0) {
        if (((int)param_3 < 1) || (0xf < (int)param_3)) {
          FUN_004d41c0(this_00,s_setarmydata___invalid_value_for_d_00555a94);
          return;
        }
        this[0x14] = (int)param_3;
        return;
      }
      break;
    case 8:
      FUN_0040adb0(param_3,(undefined4 *)local_8);
      iVar1 = FUN_004026a0((uint *)local_8,(uint *)&param_3,&param_2,(float *)&param_1);
      if (iVar1 != 0) {
        FUN_004d41c0(this_00,s_setarmydata___cannot_set_army_mp_00555a68);
        return;
      }
      break;
    case 9:
      FUN_0040adb0(param_3,(undefined4 *)local_8);
      iVar1 = FUN_0041da00((int)this_00);
      if (iVar1 == 0) {
        if (local_8[0] != '\b') {
          FUN_00404ab0(this_00,0xe);
          local_4 = 0;
        }
      }
      else {
        local_4 = 0;
      }
      if (local_4 == 0) {
        return;
      }
      FUN_0041da40(this,local_4);
      return;
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
      FUN_0040adb0(param_3,(undefined4 *)local_8);
      iVar1 = FUN_004026a0((uint *)local_8,(uint *)&param_3,&param_2,(float *)&param_1);
      if (iVar1 == 0) {
        FUN_00404ab0(this_00,0xe);
        return;
      }
      FUN_004d41c0(this_00,s_cannot_set_this_value_with_this_o_00555a3c);
      return;
    case 0xe:
      FUN_0040adb0(param_3,(undefined4 *)local_8);
      iVar1 = FUN_004026a0((uint *)local_8,(uint *)&param_3,&param_2,(float *)&param_1);
      if (iVar1 == 0) {
        FUN_00404ab0(this_00,0xe);
        return;
      }
      this[0xc] = (int)param_3;
      return;
    case 0xf:
      FUN_0040adb0(param_3,(undefined4 *)local_8);
      iVar1 = FUN_004026a0((uint *)local_8,(uint *)&param_3,&param_2,(float *)&param_1);
      if (iVar1 == 0) {
        FUN_00404ab0(this_00,0xe);
        return;
      }
      FUN_0041d220(this,(uint)param_3 & 7);
      return;
    }
    *(undefined4 *)((int)this_00 + 0x90) = 0xe;
  }
  FUN_004d4550(this_00);
  *(undefined4 *)((int)this_00 + 0x90) = 0;
  *(undefined4 *)((int)this_00 + 0xa4) = 0;
  return;
}


