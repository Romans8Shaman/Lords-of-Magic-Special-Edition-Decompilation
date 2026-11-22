
undefined4 __thiscall FUN_00408a60(void *this,void *param_1,int param_2)

{
  undefined *this_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int local_ec [4];
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  
  fVar4 = *(float *)((int)param_1 + 0x5a8);
  fVar6 = 0.5;
  fVar5 = *(float *)(param_2 + 0x5a8);
  iVar1 = *(int *)(param_2 + 0x1c);
  iVar3 = *(int *)((int)param_1 + 0x1c);
  this_00 = FUN_004c6fc0();
  iVar1 = FUN_00532820(this_00,iVar3,fVar4,iVar1,fVar5,fVar6);
  if (iVar1 != 0) {
    return 1;
  }
  *(uint *)((int)param_1 + 0x30) = *(uint *)((int)param_1 + 0x30) & 0xfffffffb | 2;
  *(undefined4 *)((int)param_1 + 0x554) = DAT_00555150;
  if (*(int *)((int)param_1 + 0x48) != *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) {
    uVar2 = FUN_0047c9e0(&DAT_005aa12c,*(int *)((int)param_1 + 0x48));
    if (uVar2 == 0) goto LAB_00408b32;
  }
  local_d8 = *(undefined4 *)(param_2 + 0x1c);
  local_ec[0] = *(int *)((int)param_1 + 0x28);
  local_ec[1] = 0xffffffff;
  local_d0 = 0xffffffff;
  local_ec[2] = 0xffffffff;
  local_dc = *(undefined4 *)((int)param_1 + 0x1c);
  local_d4 = 0;
  local_cc = 0;
  FUN_0047c6e0(&DAT_005aa12c,local_ec,0x14);
LAB_00408b32:
  FUN_00401730(param_1);
  return 0;
}


