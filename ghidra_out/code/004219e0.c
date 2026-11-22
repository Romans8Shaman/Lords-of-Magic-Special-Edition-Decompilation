
void __thiscall
FUN_004219e0(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4,
            int param_5)

{
  undefined4 *this_00;
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  int local_520;
  int local_51c;
  int local_518;
  undefined4 local_504 [3];
  int local_4f8;
  int local_4c4 [4];
  int local_4b4 [3];
  int local_4a8 [3];
  undefined1 local_49c [12];
  char local_490;
  undefined1 local_378 [12];
  char local_36c;
  undefined1 local_254 [12];
  char local_248;
  undefined1 local_130 [12];
  char local_124;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005494b4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00539ff0(local_49c,0x124,4,FUN_0049aba0,thunk_FUN_0049ab20);
  puVar7 = (uint *)0x0;
  local_4 = 0;
  FUN_0049c890(local_504);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0049dd20(local_4a8,(int *)&PTR_DAT_00574008);
  FUN_0049dd20(local_4b4,(int *)&PTR_DAT_0055cd50);
  this_00 = (undefined4 *)*param_1;
  pbVar3 = (byte *)FUN_00523260(this,param_3);
  FUN_0049b450(local_49c,pbVar3,local_4a8);
  if (param_4 != 9) {
    puVar7 = (uint *)FUN_004b0ee0(&DAT_005cd328,*(int *)((int)this + 0x4c));
  }
  if (puVar7 != (uint *)0x0) {
    pbVar3 = (byte *)FUN_004b0b80(*puVar7,(int *)puVar7[1],param_3);
    if (pbVar3 != (byte *)0x0) {
      FUN_0049b450(local_378,pbVar3,local_4b4);
    }
    pbVar3 = (byte *)FUN_004b0b80(puVar7[2],(int *)puVar7[3],param_3);
    if (pbVar3 != (byte *)0x0) {
      FUN_0049b450(local_254,pbVar3,local_4b4);
    }
    pbVar3 = (byte *)FUN_004b0b80(puVar7[4],(int *)puVar7[5],param_3);
    if (pbVar3 != (byte *)0x0) {
      FUN_0049b450(local_130,pbVar3,local_4b4);
    }
  }
  local_520 = 0xf0;
  local_518 = 0xf0;
  iVar6 = 0x140;
  local_51c = 0x140;
  uVar8 = -(uint)(param_4 != 0) & 2;
  if (local_490 != '\0') {
    FUN_0049c9d0(local_504,local_49c);
    FUN_0049da80(local_504,param_4);
    FUN_0049dcc0(local_504,3);
    local_4f8 = param_5 + -1;
    FUN_0049d9a0(local_504);
    piVar4 = (int *)FUN_0049cc10(local_504,local_4c4,0x140,0xf0);
    if (*piVar4 < 0x140) {
      iVar6 = *piVar4;
    }
    if (piVar4[1] < 0xf0) {
      local_520 = piVar4[1];
    }
    if (0x13f < piVar4[2]) {
      local_51c = piVar4[2];
    }
    if (0xef < piVar4[3]) {
      local_518 = piVar4[3];
    }
  }
  if (local_36c != '\0') {
    FUN_0049c9d0(local_504,local_378);
    FUN_0049da80(local_504,uVar8);
    FUN_0049dcc0(local_504,3);
    local_4f8 = param_5 + -1;
    FUN_0049d9a0(local_504);
    piVar4 = (int *)FUN_0049cc10(local_504,local_4c4,0x140,0xf0);
    if (*piVar4 < iVar6) {
      iVar6 = *piVar4;
    }
    if (piVar4[1] < local_520) {
      local_520 = piVar4[1];
    }
    if (local_51c <= piVar4[2]) {
      local_51c = piVar4[2];
    }
    if (local_518 <= piVar4[3]) {
      local_518 = piVar4[3];
    }
  }
  if (local_248 != '\0') {
    FUN_0049c9d0(local_504,local_254);
    FUN_0049da80(local_504,uVar8);
    FUN_0049dcc0(local_504,3);
    local_4f8 = param_5 + -1;
    FUN_0049d9a0(local_504);
    piVar4 = (int *)FUN_0049cc10(local_504,local_4c4,0x140,0xf0);
    if (*piVar4 < iVar6) {
      iVar6 = *piVar4;
    }
    if (piVar4[1] < local_520) {
      local_520 = piVar4[1];
    }
    if (local_51c <= piVar4[2]) {
      local_51c = piVar4[2];
    }
    if (local_518 <= piVar4[3]) {
      local_518 = piVar4[3];
    }
  }
  if (local_124 != '\0') {
    FUN_0049c9d0(local_504,local_130);
    FUN_0049da80(local_504,uVar8);
    FUN_0049dcc0(local_504,3);
    local_4f8 = param_5 + -1;
    FUN_0049d9a0(local_504);
    piVar4 = (int *)FUN_0049cc10(local_504,local_4c4,0x140,0xf0);
    if (*piVar4 < iVar6) {
      iVar6 = *piVar4;
    }
    if (piVar4[1] < local_520) {
      local_520 = piVar4[1];
    }
    if (local_51c <= piVar4[2]) {
      local_51c = piVar4[2];
    }
    if (local_518 <= piVar4[3]) {
      local_518 = piVar4[3];
    }
  }
  FUN_004952c0(this_00,(local_51c - iVar6) + 1,(local_518 - local_520) + 1,1);
  this_00[5] = this_00[5] | 0x10;
  iVar1 = this_00[3];
  iVar2 = this_00[2];
  puVar9 = (undefined4 *)*this_00;
  for (uVar5 = (uint)(iVar1 * iVar2) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  for (uVar5 = iVar1 * iVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar9 = 0;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  param_1[3] = this_00[1];
  param_1[4] = this_00[2];
  if (param_4 == 9) {
    if (local_490 == '\0') goto LAB_00422093;
    FUN_0049c9d0(local_504,local_49c);
    FUN_0049da80(local_504,9);
    FUN_0049dcc0(local_504,3);
    local_4f8 = param_5 + -1;
    FUN_0049d9a0(local_504);
  }
  else {
    if (local_490 != '\0') {
      FUN_0049c9d0(local_504,local_49c);
      FUN_0049da80(local_504,param_4);
      FUN_0049dcc0(local_504,3);
      local_4f8 = param_5 + -1;
      FUN_0049d9a0(local_504);
      piVar4 = (int *)FUN_0049cc10(local_504,local_4c4,0x140,0xf0);
      FUN_0049d510(local_504,this_00,*piVar4 - iVar6,piVar4[1] - local_520,-1,1);
    }
    if (local_36c != '\0') {
      FUN_0049c9d0(local_504,local_378);
      FUN_0049da80(local_504,uVar8);
      FUN_0049dcc0(local_504,3);
      local_4f8 = param_5 + -1;
      FUN_0049d9a0(local_504);
      piVar4 = (int *)FUN_0049cc10(local_504,local_4c4,0x140,0xf0);
      FUN_0049d510(local_504,this_00,*piVar4 - iVar6,piVar4[1] - local_520,-1,1);
    }
    if (local_248 != '\0') {
      FUN_0049c9d0(local_504,local_254);
      FUN_0049da80(local_504,uVar8);
      FUN_0049dcc0(local_504,3);
      local_4f8 = param_5 + -1;
      FUN_0049d9a0(local_504);
      piVar4 = (int *)FUN_0049cc10(local_504,local_4c4,0x140,0xf0);
      FUN_0049d510(local_504,this_00,*piVar4 - iVar6,piVar4[1] - local_520,-1,1);
    }
    if (local_124 == '\0') goto LAB_00422093;
    FUN_0049c9d0(local_504,local_130);
    FUN_0049da80(local_504,uVar8);
    FUN_0049dcc0(local_504,3);
    local_4f8 = param_5 + -1;
    FUN_0049d9a0(local_504);
  }
  piVar4 = (int *)FUN_0049cc10(local_504,local_4c4,0x140,0xf0);
  FUN_0049d510(local_504,this_00,*piVar4 - iVar6,piVar4[1] - local_520,-1,1);
LAB_00422093:
  local_4 = local_4 & 0xffffff00;
  FUN_0049c900(local_504);
  local_4 = 0xffffffff;
  FUN_00539eb0(local_49c,0x124,4,thunk_FUN_0049ab20);
  ExceptionList = local_c;
  return;
}


