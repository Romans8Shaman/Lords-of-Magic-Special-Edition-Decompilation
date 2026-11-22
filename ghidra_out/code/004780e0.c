
undefined4 * __fastcall FUN_004780e0(undefined4 *param_1)

{
  MMRESULT MVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054a104;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00539ff0(param_1 + 0x1e3,0xd0,10,&LAB_0047a730,&LAB_0047a770);
  local_4 = 0;
  FUN_00477f20(param_1 + 0x3ed);
  local_4._0_1_ = 1;
  FUN_00539ff0(param_1 + 0x3f0,300,2,&LAB_004b3290,op_sunlight);
  local_4 = CONCAT31(local_4._1_3_,2);
  DAT_005832ec = DAT_005832ec + 0x13b8;
  param_1[0x4ed] = 0;
  puVar3 = param_1 + 0x3c;
  local_14 = 5;
  puVar4 = param_1;
  do {
    *puVar4 = 0;
    puVar5 = puVar3;
    for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 7;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  puVar4 = param_1 + 0x5f;
  puVar3 = param_1 + 5;
  local_14 = 0x32;
  do {
    *puVar3 = 0;
    puVar5 = puVar4;
    for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 7;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  puVar3 = param_1 + 0x1bd;
  puVar4 = param_1 + 0x37;
  local_14 = 5;
  do {
    *puVar4 = 0;
    puVar5 = puVar3;
    for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 7;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  param_1[0x3ec] = 0;
  puVar3 = param_1 + 0x4e6;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xffffffff;
    puVar3 = puVar3 + 1;
  }
  param_1[0x488] = 0;
  param_1[0x4e1] = 200;
  param_1[0x4e2] = 0x14;
  param_1[0x1e0] = 0;
  param_1[0x1e1] = 0;
  param_1[0x1e2] = 0xffffffff;
  param_1[0x4d6] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x4d1) = 1;
  param_1[0x4d7] = 0;
  param_1[0x4d8] = 0;
  param_1[0x4e0] = 0;
  param_1[0x3eb] = 0xffffffff;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x489));
  param_1[0x4df] = 1;
  param_1[0x490] = 1;
  param_1[0x4da] = 0;
  param_1[0x4db] = 0;
  param_1[0x4dc] = 0;
  param_1[0x4dd] = 0;
  param_1[0x4de] = 0;
  param_1[0x4d9] = 0xffffffff;
  param_1[0x4e3] = 0;
  param_1[0x4e4] = 0;
  param_1[0x48f] = 2;
  *(undefined1 *)((int)param_1 + 0x1345) = 0;
  MVar1 = timeSetEvent(param_1[0x4e1],param_1[0x4e2],&LAB_004b36d0,0,1);
  param_1[0x486] = MVar1;
  ExceptionList = local_c;
  return param_1;
}


