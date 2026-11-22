
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall
FUN_0042f630(void *this,int *param_1,int param_2,int param_3,undefined4 *param_4,int *param_5,
            int param_6)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *this_00;
  void *this_01;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uint local_20;
  void *local_1c;
  int *local_18;
  uint local_14;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar2 = param_5;
  iVar5 = param_2;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054968b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar3 = FUN_0042f3c0(this,param_2,param_3,&local_14);
  if (iVar3 < 1) {
    ExceptionList = local_c;
    return (int *)0x0;
  }
  if (param_2 == 0) {
    local_18 = (int *)&DAT_005adc48;
    piVar6 = (int *)((int)this + 3000);
    local_1c = this;
    switch(param_3) {
    case 1:
      param_2 = 2;
      local_20 = 0x100;
      break;
    case 2:
      param_2 = 4;
      local_20 = 0x400;
      break;
    case 3:
      param_2 = 6;
      local_20 = 0x800;
      break;
    case 4:
      param_2 = 0;
      goto LAB_0042f747;
    default:
      goto switchD_0042f69e_default;
    }
  }
  else {
    if (param_2 != 1) {
      ExceptionList = local_c;
      return (int *)0x0;
    }
    local_1c = (void *)((int)this + 0x5dc);
    local_18 = (int *)&DAT_005adc4c;
    piVar6 = (int *)((int)this + 0xbf4);
    switch(param_3) {
    case 1:
      param_2 = 3;
      local_20 = 0x100;
      break;
    case 2:
      param_2 = 5;
      local_20 = 0x400;
      break;
    case 3:
      param_2 = 7;
      local_20 = 0x800;
      break;
    case 4:
      param_2 = 1;
LAB_0042f747:
      local_20 = 0;
      break;
    default:
      goto switchD_0042f69e_default;
    }
  }
  if (param_3 != 1) {
    pvStack_10 = (void *)Ordinal_401(0x5dc,s_C__lomse_source_storm_h_00555130,0x3ef,0);
    bVar1 = false;
    uStack_4 = 0;
    if (pvStack_10 == (void *)0x0) {
      this_00 = (int *)0x0;
    }
    else {
      this_00 = FUN_004116b0(pvStack_10,*(undefined4 *)((int)local_1c + 0x48));
    }
    uStack_4 = 0xffffffff;
    if (this_00 == (int *)0x0) {
      OutputDebugStringA(s_Insufficient_memory_to_add_army_00555ee4);
    }
    else {
      if (((iVar5 == 1) && (param_3 == 4)) &&
         (this_01 = (void *)FUN_004f6000(&DAT_005ae974,param_6), this_01 != (void *)0x0)) {
        iVar5 = *(int *)((int)this_01 + 4);
        bVar1 = true;
        if (iVar5 == 1) {
          FUN_0050cb40(this_01,(int)this_00);
        }
        else if (iVar5 == 2) {
          *(int **)((int)this_01 + 0x48) = this_00;
          this_00[0xc] = this_00[0xc] | 0x800000;
          this_00[7] = *(int *)((int)this_01 + 0x1c);
          this_00[10] = *(int *)((int)this_01 + 0x28);
        }
        else if (iVar5 == 3) {
          *(int **)((int)this_01 + 0x44) = this_00;
          this_00[0xc] = this_00[0xc] | 0x400000;
          this_00[7] = *(int *)((int)this_01 + 0x1c);
          this_00[10] = *(int *)((int)this_01 + 0x28);
        }
        else {
          bVar1 = false;
        }
      }
      if ((bVar1) || (iVar5 = FUN_004a7d50(&DAT_005ae958,this_00,(int)param_1), iVar5 != -1))
      goto LAB_0042f758;
      OutputDebugStringA(s_AddSprite_failed__army__00555ec8);
    }
switchD_0042f69e_default:
    ExceptionList = local_c;
    return (int *)0x0;
  }
  this_00 = param_5;
LAB_0042f758:
  param_6 = 0;
  if (0 < *(int *)((int)local_1c + 0x4c)) {
    piVar7 = (int *)((int)local_1c + 0xc4);
    param_4 = param_4 + 2;
    param_1 = piVar6;
    do {
      if (*param_1 == param_3) {
        param_4[-2] = *piVar7;
        param_4[-1] = this_00[0x13];
        *param_4 = param_2;
        piVar6 = piVar7;
        piVar8 = this_00 + this_00[0x13] * 0x13 + 0x31;
        for (iVar5 = 0x13; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar8 = *piVar6;
          piVar6 = piVar6 + 1;
          piVar8 = piVar8 + 1;
        }
        if ((param_3 == 1) && (uVar4 = FUN_00525f10((int)piVar7), uVar4 != 0)) {
          if (*(int *)((int)local_1c + 0x48) == DAT_005aa7d4) {
            _DAT_005ae8a4 = 1;
          }
          else if (*(int *)((int)local_1c + 0x48) == DAT_005aadb0) {
            _DAT_005ae8a8 = 1;
          }
          else {
            FUN_005047d0(s_Bystanding_Leader_died_during_co_00555c24);
          }
        }
        piVar7[6] = 0;
        piVar7[7] = 0;
        piVar7[5] = 0;
        this_00[0x13] = this_00[0x13] + 1;
      }
      param_6 = param_6 + 1;
      param_1 = param_1 + 1;
      param_4 = param_4 + 3;
      piVar7 = piVar7 + 0x13;
    } while (param_6 < *(int *)((int)local_1c + 0x4c));
  }
  this_00[0xc] = this_00[0xc] | local_20;
  if (param_3 != 1) {
    (/*IC:0042f869*/**(code **)(*this_00 + 0x2c))(this_00);
  }
  if (param_5 != (int *)0x0) {
    piVar6 = this_00;
    piVar7 = param_5;
    for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar7 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar7 = piVar7 + 1;
    }
    param_5[0xb] = 0;
    param_5[0x11] = this_00[0x11];
    param_5[0x12] = this_00[0x12];
    param_5[0x13] = this_00[0x13];
    param_5[0x14] = this_00[0x14];
    param_5[0x15] = this_00[0x15];
    param_5[0x16] = this_00[0x16];
    param_5[0x17] = this_00[0x17];
    param_5[0x18] = this_00[0x18];
    param_5[0x19] = this_00[0x19];
    piVar6 = this_00 + 0x1a;
    piVar7 = param_5 + 0x1a;
    for (iVar5 = 0x16; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar7 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar7 = piVar7 + 1;
    }
    iVar5 = (int)this_00 - (int)param_5;
    param_5[0x30] = this_00[0x30];
    piVar6 = param_5 + 0x31;
    param_5 = (int *)0xf;
    do {
      piVar7 = (int *)(iVar5 + (int)piVar6);
      piVar8 = piVar6;
      for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar8 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar8 = piVar8 + 1;
      }
      param_5 = (int *)((int)param_5 + -1);
      piVar6 = piVar6 + 0x13;
    } while (param_5 != (int *)0x0);
    piVar2[0x14e] = this_00[0x14e];
    piVar2[0x14f] = this_00[0x14f];
    piVar2[0x150] = this_00[0x150];
    piVar2[0x151] = this_00[0x151];
    piVar2[0x152] = this_00[0x152];
    piVar2[0x153] = this_00[0x153];
    piVar2[0x154] = this_00[0x154];
    piVar2[0x155] = this_00[0x155];
    piVar2[0x156] = this_00[0x156];
    piVar2[0x157] = this_00[0x157];
    piVar2[0x158] = this_00[0x158];
    piVar2[0x159] = this_00[0x159];
    piVar6 = this_00 + 0x15a;
    piVar7 = piVar2 + 0x15a;
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar7 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar7 = piVar7 + 1;
    }
    piVar2[0x163] = this_00[0x163];
    piVar2[0x164] = this_00[0x164];
    piVar2[0x165] = this_00[0x165];
    piVar2[0x166] = this_00[0x166];
    piVar2[0x167] = this_00[0x167];
    piVar2[0x168] = this_00[0x168];
    piVar2[0x169] = this_00[0x169];
    piVar2[0x16a] = this_00[0x16a];
    *(char *)(piVar2 + 0x16b) = (char)this_00[0x16b];
    piVar2[0x16c] = this_00[0x16c];
    piVar2[0x16d] = this_00[0x16d];
    piVar2[0x16e] = this_00[0x16e];
    piVar2[0x16f] = this_00[0x16f];
    piVar2[0x170] = this_00[0x170];
    piVar2[0x171] = this_00[0x171];
    *(char *)(piVar2 + 0x172) = (char)this_00[0x172];
    piVar2[0x173] = this_00[0x173];
    *(char *)(piVar2 + 0x174) = (char)this_00[0x174];
    piVar2[0x175] = this_00[0x175];
    *(char *)(piVar2 + 0x176) = (char)this_00[0x176];
  }
  if (param_3 == 4) {
    *local_18 = this_00[10];
  }
  ExceptionList = local_c;
  return this_00;
}


