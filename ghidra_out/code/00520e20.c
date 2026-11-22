
void __cdecl op_partialcanmerge_q(void *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  longlong lVar6;
  uint local_be0;
  float local_bdc;
  void *local_bd8;
  void *local_bd4;
  uint local_bd0;
  float local_bcc;
  uint local_bc8;
  undefined4 local_bc4 [375];
  undefined4 local_5e8 [375];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054c406;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00411610(local_5e8);
  local_4 = 0;
  FUN_00411610(local_bc4);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar2 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar2;
    uVar3 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar2 * 8);
    local_bdc = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    uVar3 = 0;
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 == 1) {
    fVar5 = local_bdc;
  }
  else if (uVar3 == 2) {
    fVar5 = (float)((int)local_bdc >> 8);
  }
  else {
    if (uVar3 != 4) {
      FUN_00404ab0(param_1,0xe);
      goto LAB_0052101b;
    }
    lVar6 = __ftol((float10)local_bdc);
    fVar5 = (float)lVar6;
  }
  iVar2 = FUN_0041be40(param_1,&local_bd4);
  if (iVar2 != 0) {
    if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
      iVar2 = *(int *)((int)param_1 + 0x54) + 1;
      *(int *)((int)param_1 + 0x54) = iVar2;
      local_be0 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar2 * 8);
      local_bdc = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar2 * 8);
    }
    else {
      *(undefined4 *)((int)param_1 + 0x90) = 6;
      FUN_004d4550(param_1);
      *(undefined4 *)((int)param_1 + 0x90) = 0;
      *(undefined4 *)((int)param_1 + 0xa4) = 0;
      local_be0 = 0;
    }
    iVar2 = FUN_004026a0(&local_be0,&local_bd0,&local_bc8,&local_bcc);
    if (iVar2 == 0) {
      *(undefined4 *)((int)param_1 + 0x90) = 0xe;
      FUN_004d4550(param_1);
      *(undefined4 *)((int)param_1 + 0x90) = 0;
      *(undefined4 *)((int)param_1 + 0xa4) = 0;
    }
    else {
      iVar2 = FUN_0041be40(param_1,&local_bd8);
      if (iVar2 != 0) {
        FUN_00415170(local_bd8,local_5e8,local_bd0);
        FUN_00415170(local_bd4,local_bc4,(uint)fVar5);
        iVar2 = FUN_00415610(local_5e8,(int)local_bc4);
        if (*(int *)((int)param_1 + 0x54) == 0) {
          *(undefined4 *)((int)param_1 + 0x90) = 3;
          FUN_004d4550(param_1);
          *(undefined4 *)((int)param_1 + 0x90) = 0;
          *(undefined4 *)((int)param_1 + 0xa4) = 0;
        }
        else {
          iVar4 = *(int *)((int)param_1 + 0x54) + -1;
          *(int *)((int)param_1 + 0x54) = iVar4;
          iVar1 = *(int *)((int)param_1 + 0x50);
          *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
          *(uint *)(iVar1 + 4 + iVar4 * 8) = -(uint)(iVar2 != 0);
        }
        FUN_004117f0(local_5e8,0);
        FUN_004117f0(local_bc4,0);
      }
    }
  }
LAB_0052101b:
  local_4 = local_4 & 0xffffff00;
  FUN_00411910(local_bc4);
  local_4 = 0xffffffff;
  FUN_00411910(local_5e8);
  ExceptionList = local_c;
  return;
}


