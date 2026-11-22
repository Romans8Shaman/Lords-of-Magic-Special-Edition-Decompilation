
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_004b66c0(undefined4 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054b48e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004c4e20(param_1 + 0x28);
  *param_1 = &PTR_FUN_0054dbf0;
  param_1[0xe1] = 100;
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  local_4 = 0;
  _DAT_005cd368 = 0;
  FUN_004b6900(param_1 + 0x41,0x19);
  FUN_004b6900(param_1 + 0x38,0x1f);
  uVar2 = 0xffffffff;
  pcVar6 = s_NeedID_0055d2e0;
  do {
    pcVar8 = pcVar6;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  iVar5 = 4;
  pcVar6 = pcVar8 + -uVar2;
  pcVar8 = (char *)(param_1 + 0x41);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar8 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar8 = pcVar8 + 1;
  }
  puVar7 = param_1 + 3;
  do {
    puVar9 = puVar7;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    *(undefined1 *)puVar9 = 0;
    FUN_004b6900(puVar7 + 2,0x19);
    *puVar7 = 0xffff;
    puVar7 = (undefined4 *)((int)puVar7 + 0x25);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  puVar7 = param_1 + 0x4d;
  iVar5 = 8;
  do {
    FUN_004b6900(puVar7,0x32);
    puVar7 = (undefined4 *)((int)puVar7 + 0x32);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  puVar7 = param_1 + 0xb4;
  iVar5 = 5;
  do {
    FUN_004b6900(puVar7,0x1f);
    puVar7 = (undefined4 *)((int)puVar7 + 0x1f);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  param_1[0x48] = 1;
  param_1[0xb2] = 0;
  param_1[0xdb] = 0;
  param_1[0xb3] = 0;
  param_1[0x40] = 0;
  param_1[0xde] = 200;
  param_1[0xdf] = 5000;
  param_1[0xdc] = 0;
  DAT_005cd364 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  param_1[1] = 0;
  param_1[0xe2] = 10;
  param_1[0xe0] = 10;
  param_1[0xe3] = 0;
  ExceptionList = local_c;
  return param_1;
}


