
undefined4 __cdecl FUN_004f3e30(int param_1,ushort *param_2,int *param_3,undefined *param_4,...)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  uint unaff_EBX;
  undefined4 *puVar9;
  byte *unaff_retaddr;
  uint in_stack_00000014;
  undefined4 local_6c [4];
  char *pcStack_5c;
  int iStack_c;
  uint auStack_8 [2];
  
  pcVar4 = DAT_00584ac8;
  uVar5 = 0;
  uVar1 = *param_2;
  if ((uVar1 & 4) == 0) {
    uVar6 = **(byte **)(param_1 + 8) & 0x33;
    if (param_4 == (undefined *)0x0) {
      param_4 = *(undefined **)(*(byte **)(param_1 + 8) + 0xc);
    }
    switch(uVar6) {
    case 1:
      pcVar4 = *(char **)(param_2 + 6);
      uVar1 = param_2[2];
      uVar2 = param_2[1];
      puVar9 = local_6c;
      for (iVar7 = 0x1b; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      local_6c[0] = 0x6c;
      (/*IC:004f3f6e*/**(code **)(*param_3 + 100))(param_3,0,local_6c,1,0);
      if (iStack_c == 0) {
        uVar5 = FUN_004f41e0(pcVar4,pcStack_5c,(uint)uVar2,(uint)uVar1,unaff_EBX);
      }
      else {
        uVar5 = FUN_004f4240(pcVar4,(int)pcStack_5c,(uint)uVar2,(uint)uVar1,unaff_EBX);
      }
      (/*IC:004f3fac*/**(code **)(*param_3 + 0x80))(param_3,0);
      return uVar5;
    case 2:
      uVar5 = *(undefined4 *)(param_2 + 6);
      uVar1 = param_2[2];
      uVar2 = param_2[1];
      puVar9 = local_6c;
      for (iVar7 = 0x1b; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      local_6c[0] = 0x6c;
      (/*IC:004f3ff4*/**(code **)(*param_3 + 100))(param_3,0,local_6c,1,0);
      auStack_8[0] = uVar1 * unaff_EBX;
      FUN_004f3d20((int)pcStack_5c,auStack_8,uVar5,auStack_8[0],(uint)uVar2,unaff_EBX);
      (/*IC:004f4023*/**(code **)(*param_3 + 0x80))(param_3,0);
      return 1;
    default:
      uVar5 = 1;
      break;
    case 0x10:
    case 0x20:
    case 0x30:
      DAT_00584aa8 = s_c__NEWERSTORM_H_storm_h_00573258 + (uVar6 >> 4) * 0xc + 0xc;
      uVar1 = param_2[2];
      uVar2 = param_2[1];
      if (param_4 == (undefined *)0x0) {
        param_4 = &DAT_00573298;
      }
      puVar9 = local_6c;
      for (iVar7 = 0x1b; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      local_6c[0] = 0x6c;
      (/*IC:004f3eee*/**(code **)(*param_3 + 100))(param_3,0,local_6c,1,0);
      if (iStack_c == 0) {
        uVar5 = FUN_004f42b0(unaff_retaddr,pcStack_5c,(uint)uVar2,(uint)uVar1,unaff_EBX,(int)param_4
                            );
      }
      else {
        uVar5 = FUN_004f43a0(unaff_retaddr,(int)pcStack_5c,(uint)uVar2,(uint)uVar1,unaff_EBX,
                             (int)param_4);
      }
      (/*IC:004f3f27*/**(code **)(*param_3 + 0x80))(param_3,0);
      return uVar5;
    case 0x11:
    case 0x21:
    case 0x31:
      DAT_00584aa8 = s_c__NEWERSTORM_H_storm_h_00573258 + (uVar6 >> 4) * 0xc + 0xc;
      uVar2 = param_2[2];
      uVar3 = param_2[1];
      pcVar8 = DAT_00584aa8;
      if (DAT_00584aa8 == (char *)0x0) {
        pcVar8 = (char *)&DAT_00573288;
      }
      FUN_004f4160(*(char **)(param_2 + 6),DAT_00584ac8,
                   (int)((ulonglong)
                         ((uint)uVar2 * (uint)uVar3 + -1 + (int)(8 / (longlong)*(int *)(pcVar8 + 8))
                         ) / (8 / (longlong)*(int *)(pcVar8 + 8) & 0xffffffffU)));
      uVar5 = FUN_004f4490((int)pcVar4,param_3,(uint)uVar3,(uint)uVar2,param_4,
                           uVar1 & 1 ^ in_stack_00000014);
      return uVar5;
    case 0x12:
    case 0x22:
    case 0x32:
      DAT_00584aa8 = s_c__NEWERSTORM_H_storm_h_00573258 + (uVar6 >> 4) * 0xc + 0xc;
      return 0;
    }
  }
  return uVar5;
}


