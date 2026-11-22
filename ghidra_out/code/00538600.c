
undefined4 __cdecl
FUN_00538600(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 local_4bc;
  undefined1 local_4b8 [32];
  undefined1 *local_498;
  undefined4 local_494;
  undefined1 *local_490;
  int local_480 [144];
  undefined4 local_240 [112];
  undefined4 local_80 [24];
  undefined4 local_20 [8];
  
  local_490 = (undefined1 *)&local_4bc;
  if (DAT_005d51f0 == 0) {
    piVar3 = local_480;
    for (iVar1 = 0x90; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = 8;
      piVar3 = piVar3 + 1;
    }
    puVar2 = local_240;
    for (iVar1 = 0x70; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 9;
      puVar2 = puVar2 + 1;
    }
    local_4bc = 0x212;
    puVar2 = local_80;
    for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 7;
      puVar2 = puVar2 + 1;
    }
    local_498 = &LAB_00538750;
    puVar2 = local_20;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 8;
      puVar2 = puVar2 + 1;
    }
    local_494 = 0;
    DAT_005d51ec = 7;
    FUN_00538000(local_480,0x120,0x101,0x54eca0,0x54ed20,&DAT_005d4154,&DAT_005d51ec,(int)local_4b8)
    ;
    piVar3 = local_480;
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = 5;
      piVar3 = piVar3 + 1;
    }
    DAT_005d51e8 = 5;
    FUN_00538000(local_480,0x1e,0,0x54eda0,0x54ee18,&DAT_005d4150,&DAT_005d51e8,(int)local_4b8);
    DAT_005d51f0 = 1;
  }
  *param_1 = DAT_005d51ec;
  *param_2 = DAT_005d51e8;
  *param_3 = DAT_005d4154;
  *param_4 = DAT_005d4150;
  return 0;
}


