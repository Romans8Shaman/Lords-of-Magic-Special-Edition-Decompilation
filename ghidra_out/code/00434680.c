
undefined4 __thiscall FUN_00434680(void *this,uint param_1,uint param_2)

{
  int *piVar1;
  void *pvVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  void *local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;
  undefined4 local_4;
  
  uVar6 = param_2;
  if (*(char *)((int)this + 4) == '\0') {
    return 0;
  }
  uVar3 = *(uint *)(param_1 + 8);
  if (param_2 == uVar3) {
    uVar3 = *(uint *)(param_1 + 0xc);
  }
  param_1 = uVar3;
  local_1c = this;
  uVar4 = FUN_00434100(this);
  pvVar2 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  else {
    iVar7 = *(int *)((int)DAT_005a7b78 + 0x50);
    iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
    *(undefined4 *)(iVar7 + iVar5 * 8) = 1;
    *(uint *)(iVar7 + 4 + iVar5 * 8) = uVar6;
  }
  pvVar2 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  else {
    iVar7 = *(int *)((int)DAT_005a7b78 + 0x50);
    iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
    *(undefined4 *)(iVar7 + iVar5 * 8) = 1;
    *(uint *)(iVar7 + 4 + iVar5 * 8) = param_1;
  }
  pvVar2 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  else {
    iVar7 = *(int *)((int)DAT_005a7b78 + 0x50);
    iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
    *(undefined4 *)(iVar7 + iVar5 * 8) = 1;
    *(undefined4 *)(iVar7 + 4 + iVar5 * 8) = uVar4;
  }
  FUN_00432c70(local_1c,&local_10,(int *)&local_14,(int *)&local_18,(int *)&param_2);
  uVar6 = FUN_00432ae0(local_10,local_14,local_18,param_2);
  pvVar2 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  else {
    iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
    iVar7 = *(int *)((int)pvVar2 + 0x50);
    *(undefined4 *)(iVar7 + iVar5 * 8) = 1;
    *(uint *)(iVar7 + 4 + iVar5 * 8) = uVar6;
  }
  FUN_004d05e0(DAT_005a7b78,DAT_00578a60,DAT_00578a64);
  pvVar2 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
    local_8 = *(uint *)(*piVar1 + -8 + iVar7 * 8);
    local_4 = *(undefined4 *)(*piVar1 + -4 + iVar7 * 8);
  }
  else {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    local_8 = 0;
  }
  iVar7 = FUN_004026a0(&local_8,&local_c,(uint *)&local_1c,(float *)&param_1);
  if (iVar7 == 0) {
    *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    return 1;
  }
  return local_c;
}


