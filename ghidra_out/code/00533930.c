
undefined4 __cdecl
FUN_00533930(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,char *param_7,
            int param_8)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  
  if (((param_7 == (char *)0x0) || (*param_7 != *PTR_s_1_0_7_0057448c)) || (param_8 != 0x38)) {
    return 0xfffffffa;
  }
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x20) == 0) {
    *(code **)(param_1 + 0x20) = FUN_00534ab0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    *(undefined1 **)(param_1 + 0x24) = &LAB_00534ad0;
  }
  if (param_2 == -1) {
    param_2 = 6;
  }
  bVar6 = param_4 < 0;
  if (bVar6) {
    param_4 = -param_4;
  }
  if (((((param_5 < 1) || (9 < param_5)) || ((param_3 != 8 || ((param_4 < 8 || (0xf < param_4))))))
      || (param_2 < 0)) || (((9 < param_2 || (param_6 < 0)) || (2 < param_6)))) {
    return 0xfffffffe;
  }
  piVar2 = (int *)(/*IC:00533a19*/**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x16bc);
  if (piVar2 == (int *)0x0) {
    return 0xfffffffc;
  }
  *(int **)(param_1 + 0x1c) = piVar2;
  piVar2[6] = (uint)bVar6;
  iVar5 = 1 << ((byte)param_4 & 0x1f);
  piVar2[10] = param_4;
  *piVar2 = param_1;
  piVar2[0x12] = param_5 + 7;
  piVar2[9] = iVar5;
  piVar2[0xb] = iVar5 + -1;
  iVar3 = 1 << ((byte)(param_5 + 7) & 0x1f);
  piVar2[0x11] = iVar3;
  piVar2[0x13] = iVar3 + -1;
  piVar2[0x14] = (param_5 + 9U) / 3;
  iVar3 = (/*IC:00533a7a*/**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),iVar5,2);
  piVar2[0xc] = iVar3;
  iVar3 = (/*IC:00533a8d*/**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),piVar2[9],2);
  piVar2[0xe] = iVar3;
  iVar3 = (/*IC:00533aa0*/**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),piVar2[0x11],2);
  piVar2[0xf] = iVar3;
  iVar3 = 1 << ((char)param_5 + 6U & 0x1f);
  piVar2[0x5a5] = iVar3;
  iVar3 = (/*IC:00533ac0*/**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),iVar3,4);
  uVar1 = piVar2[0x5a5];
  piVar2[2] = iVar3;
  piVar2[3] = uVar1 * 4;
  if (((piVar2[0xc] == 0) || (piVar2[0xe] == 0)) || ((piVar2[0xf] == 0 || (iVar3 == 0)))) {
    *(undefined **)(param_1 + 0x18) = PTR_s_insufficient_memory_005744a8;
    FUN_00533f50(param_1);
    return 0xfffffffc;
  }
  *(undefined1 *)((int)piVar2 + 0x1d) = 8;
  piVar2[0x5a7] = iVar3 + (uVar1 & 0xfffffffe);
  piVar2[0x5a4] = iVar3 + uVar1 * 3;
  piVar2[0x20] = param_6;
  piVar2[0x1f] = param_2;
  uVar4 = FUN_00533b60(param_1);
  return uVar4;
}


