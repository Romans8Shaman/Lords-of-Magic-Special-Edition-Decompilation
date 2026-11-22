
undefined4 __thiscall FUN_0046da60(void *this,uint param_1,uint param_2,void *param_3)

{
  uint uVar1;
  void *this_00;
  int iVar2;
  uint *puVar3;
  undefined8 uVar4;
  uint local_14;
  uint local_10 [2];
  undefined4 local_8 [2];
  
  uVar1 = param_1;
  puVar3 = (uint *)0x0;
  iVar2 = FUN_0046da40(param_1);
  this_00 = param_3;
  if (iVar2 != 0) {
    if (((int)param_2 < 0) || (*(int *)((int)this + 0xc) <= (int)param_2)) {
      FUN_004d41c0(param_3,s_Container__SetData___invalid_spo_0055795c);
      return 0;
    }
    puVar3 = (uint *)(*(int *)((int)this + 4) + param_2 * 0x30);
  }
  switch(uVar1) {
  case 0:
    FUN_0040adb0(param_3,local_10);
    puVar3 = puVar3 + 7;
    goto LAB_0046db64;
  case 1:
    FUN_0040adb0(param_3,local_10);
    puVar3 = puVar3 + 8;
    goto LAB_0046db64;
  case 2:
    FUN_0040adb0(param_3,local_10);
    puVar3 = puVar3 + 9;
    goto LAB_0046db64;
  case 3:
    FUN_0040adb0(param_3,local_10);
    puVar3 = puVar3 + 10;
    goto LAB_0046db64;
  case 4:
    FUN_0040adb0(param_3,local_10);
LAB_0046db64:
    iVar2 = FUN_004026a0(local_10,puVar3,&param_2,(float *)&param_3);
    if (iVar2 == 0) {
      *(undefined4 *)((int)this_00 + 0x90) = 0xe;
      FUN_004d4550(this_00);
      *(undefined4 *)((int)this_00 + 0x90) = 0;
      *(undefined4 *)((int)this_00 + 0xa4) = 0;
      return 0;
    }
    break;
  case 5:
    FUN_0040adb0(param_3,local_10);
    puVar3 = puVar3 + 1;
    goto LAB_0046ddaa;
  case 6:
    FUN_0040adb0(param_3,local_10);
    puVar3 = puVar3 + 2;
    goto LAB_0046dc58;
  case 7:
    FUN_0040adb0(param_3,local_10);
    puVar3 = puVar3 + 3;
    goto LAB_0046dd62;
  case 8:
    FUN_0040adb0(param_3,local_10);
    puVar3 = puVar3 + 4;
    goto LAB_0046ddaa;
  case 9:
    FUN_0040adb0(param_3,local_10);
    puVar3 = puVar3 + 5;
LAB_0046dc58:
    iVar2 = FUN_004026a0(local_10,puVar3,&param_2,(float *)&param_3);
    if (iVar2 == 0) {
      FUN_00404ab0(this_00,0xe);
      return 0;
    }
    break;
  case 10:
    FUN_0040adb0(param_3,local_10);
    iVar2 = FUN_004026a0(local_10,&local_14,&param_2,(float *)&param_3);
    if (iVar2 == 0) {
      FUN_00404ab0(this_00,0xe);
      return 0;
    }
    puVar3[5] = puVar3[5] | local_14;
    return 1;
  case 0xb:
    FUN_0040adb0(param_3,local_10);
    iVar2 = FUN_004026a0(local_10,&local_14,&param_2,(float *)&param_3);
    if (iVar2 == 0) {
      FUN_00404ab0(this_00,0xe);
      return 0;
    }
    puVar3[5] = puVar3[5] & ~local_14;
    return 1;
  case 0xc:
    FUN_0040adb0(param_3,local_10);
    puVar3 = puVar3 + 6;
LAB_0046dd62:
    iVar2 = FUN_004026a0(local_10,puVar3,&param_2,(float *)&param_3);
    if (iVar2 == 0) {
      FUN_00404ab0(this_00,0xe);
      return 0;
    }
    break;
  case 0xd:
    FUN_0040adb0(param_3,local_10);
    iVar2 = FUN_004026a0(local_10,&param_1,&param_2,(float *)&param_3);
    if (iVar2 == 0) {
      FUN_00404ab0(this_00,0xe);
    }
    puVar3[5] = puVar3[5] | 8;
    return 1;
  case 0xe:
    FUN_0043da90(param_3,(int *)&param_1);
    puVar3[5] = puVar3[5] & 0xfffffff7;
    return 1;
  case 0xf:
    FUN_0043da90(param_3,(int *)&param_1);
    uVar1 = puVar3[5];
    if ((uVar1 & 8) == 0) {
      puVar3[5] = uVar1 | 8;
      return 1;
    }
    puVar3[5] = uVar1 & 0xfffffff7;
    return 1;
  case 0x10:
    FUN_0040adb0(param_3,local_10);
    puVar3 = puVar3 + 0xb;
LAB_0046ddaa:
    iVar2 = FUN_004026a0(local_10,puVar3,&param_2,(float *)&param_3);
    if (iVar2 == 0) {
      FUN_00404ab0(this_00,0xe);
      return 0;
    }
    break;
  case 0x11:
    uVar4 = FUN_0043da90(param_3,(int *)&param_1);
    if ((int)uVar4 == 0) {
      return 0;
    }
    FUN_0046dff0(this,param_1);
    break;
  case 0x13:
    FUN_0040adb0(param_3,local_10);
    iVar2 = FUN_004026a0(local_10,(uint *)((int)this + 0x44),&param_2,(float *)&param_3);
    if (iVar2 == 0) {
      FUN_00404ab0(this_00,0xe);
      return 0;
    }
    break;
  case 0x14:
    FUN_0040adb0(param_3,local_10);
    iVar2 = FUN_004026a0(local_10,this,&param_2,(float *)&param_3);
    if (iVar2 == 0) {
      FUN_00404ab0(this_00,0xe);
      return 0;
    }
    break;
  case 0x17:
    FUN_0040adb0(param_3,local_8);
    FUN_004d41c0(this_00,s_Container__SetData___cannot_set_v_00557984);
    return 0;
  }
  return 1;
}


