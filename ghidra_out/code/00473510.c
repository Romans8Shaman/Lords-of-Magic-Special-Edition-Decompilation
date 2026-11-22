
uint * __thiscall
FUN_00473510(void *this,uint *param_1,uint param_2,uint param_3,char *param_4,int param_5)

{
  char *pcVar1;
  void *this_00;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *extraout_EAX;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined1 auStackY_d4 [128];
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined2 uVar12;
  int local_24 [2];
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0054a018;
  local_c = ExceptionList;
  iVar6 = 0;
  DAT_00583650 = DAT_00583650 + 0x10;
  uVar5 = 0;
  pcVar3 = (char *)0x0;
  local_24[0] = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  if (*param_4 != '\0') {
    pcVar7 = param_4;
    ExceptionList = &local_c;
    do {
      if (*pcVar7 == '\n') {
        iVar4 = FUN_0047ef30(*(void **)((int)this + 0x3c),(int)(pcVar3 + (int)param_4),
                             iVar6 - (int)pcVar3);
        if ((int)local_14 < iVar4) {
          local_14 = iVar4;
        }
        local_24[0] = local_24[0] + 1;
        pcVar3 = pcVar7 + (1 - (int)param_4);
        uVar5 = local_14;
      }
      pcVar1 = pcVar7 + 1;
      iVar6 = iVar6 + 1;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar1 != '\0');
  }
  iVar6 = *(int *)(*(int *)((int)this + 0x3c) + 4) * 2 + 1;
  if ((int)uVar5 < iVar6) {
    uVar5 = iVar6;
  }
  local_14 = uVar5 + 1;
  local_10 = *(int *)(*(int *)((int)this + 0x3c) + 8) * local_24[0];
  this_00 = (void *)((int)this + 0x50);
  local_1c = 0;
  local_18 = 0;
  FUN_004952c0(this_00,local_14,local_10,1);
  if (param_5 == 0) {
    iVar6 = *(int *)((int)this + 0xd8);
    iVar4 = *(int *)((int)this + 0xd4);
    iVar9 = *(int *)((int)this + 0xd0);
  }
  else {
    iVar6 = 5;
    iVar4 = 5;
    iVar9 = 5;
  }
  iVar6 = FUN_0047efd0(this_00,iVar9,iVar4,iVar6);
  uVar12 = (undefined2)iVar6;
  if (*(int *)((int)this + 0xcc) == 0) {
    iVar6 = *(int *)((int)this + 0x58);
    uVar5 = *(uint *)((int)this + 0x54);
  }
  else {
    iVar6 = *(int *)((int)this + 0x58);
    uVar5 = *(uint *)((int)this + 0x54);
    uVar12 = 0x32;
  }
  FUN_00497270(this_00,0,0,uVar5,iVar6,uVar12);
  FUN_0047f230(*(void **)((int)this + 0x3c),this_00,param_4,(int *)&local_1c,2,-1,0);
  iVar6 = FUN_0047efd0(this_00,*(int *)((int)this + 0xdc),*(int *)((int)this + 0xe0),
                       *(int *)((int)this + 0xe4));
  uVar12 = (undefined2)iVar6;
  FUN_004946d0(this_00,local_1c,local_18,(local_1c - 1) + local_14,local_18,uVar12);
  uVar5 = (local_1c - 1) + local_14;
  FUN_004946d0(this_00,uVar5,local_18,uVar5,(local_18 - 1) + local_10,uVar12);
  uVar5 = (local_18 - 1) + local_10;
  FUN_004946d0(this_00,(local_1c - 1) + local_14,uVar5,local_1c,uVar5,uVar12);
  uVar5 = (local_18 - 1) + local_10;
  uVar8 = local_1c;
  uVar10 = local_1c;
  uVar11 = local_18;
  FUN_004946d0(this_00,local_1c,uVar5,local_1c,local_18,uVar12);
  FUN_00474e00(auStackY_d4 + 0x8c,&local_1c);
  FUN_00472f90((int)this,local_24,param_2,param_3,uVar8,uVar5,uVar10,uVar11,param_5);
  uVar2 = extraout_EAX[1];
  *(undefined4 *)((int)this + 0xa8) = *extraout_EAX;
  *(undefined4 *)((int)this + 0xac) = uVar2;
  DAT_00583650 = DAT_00583650 + 0x10;
  *param_1 = local_1c;
  param_1[1] = local_18;
  param_1[2] = local_14;
  param_1[3] = local_10;
  DAT_00583650 = DAT_00583650 + -0x10;
  ExceptionList = local_c;
  return param_1;
}


