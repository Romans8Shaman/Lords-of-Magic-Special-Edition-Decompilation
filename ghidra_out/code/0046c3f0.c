
void __thiscall FUN_0046c3f0(void *this,int *param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  void *pvVar3;
  void *this_00;
  void *this_01;
  int iVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  int local_2c;
  int local_28;
  int local_24;
  int local_1c;
  int local_18;
  int local_10;
  int local_c;
  
  if ((0 < *(int *)((int)this + 0x34)) &&
     (this_00 = (void *)FUN_00491c20(&DAT_005a7b50,*(int *)((int)this + 0x28)),
     this_00 != (void *)0x0)) {
    pcVar8 = (char *)0x0;
    local_2c = 0;
    local_24 = 0;
    local_1c = 0;
    local_28 = FUN_004918d0(this_00);
    this_01 = (void *)FUN_00492de0(&DAT_005a7b50,*(int *)((int)this + 8));
    pvVar3 = DAT_005a7b78;
    if (this_01 != (void *)0x0) {
      pcVar9 = *(char **)((int)this + 0x24);
      if (((char)*(uint *)((int)this + 0x20) == '\x06') &&
         ((*(uint *)((int)this + 0x20) & 0x100) == 0)) {
        uVar2 = *(undefined4 *)((int)this + 0x2c);
        if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
          *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
          FUN_004d4550(pvVar3);
          *(undefined4 *)((int)pvVar3 + 0x90) = 0;
          *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
        }
        else {
          iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
          *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
          iVar5 = *(int *)((int)pvVar3 + 0x50);
          *(undefined4 *)(iVar5 + iVar4 * 8) = 1;
          *(undefined4 *)(iVar5 + 4 + iVar4 * 8) = uVar2;
        }
        pvVar3 = DAT_005a7b78;
        uVar2 = *(undefined4 *)((int)this + 0x30);
        if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
          *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
          FUN_004d4550(pvVar3);
          *(undefined4 *)((int)pvVar3 + 0x90) = 0;
          *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
        }
        else {
          iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
          *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
          iVar5 = *(int *)((int)pvVar3 + 0x50);
          *(undefined4 *)(iVar5 + iVar4 * 8) = 1;
          *(undefined4 *)(iVar5 + 4 + iVar4 * 8) = uVar2;
        }
        pvVar3 = DAT_005a7b78;
        uVar2 = *(undefined4 *)((int)this + 0x34);
        if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
          *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
          FUN_004d4550(pvVar3);
          *(undefined4 *)((int)pvVar3 + 0x90) = 0;
          *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
        }
        else {
          iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
          *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
          iVar5 = *(int *)((int)pvVar3 + 0x50);
          *(undefined4 *)(iVar5 + iVar4 * 8) = 1;
          *(undefined4 *)(iVar5 + 4 + iVar4 * 8) = uVar2;
        }
        FUN_004d05e0(DAT_005a7b78,*(uint *)((int)this + 0x20),*(int **)((int)this + 0x24));
        pvVar3 = DAT_005a7b78;
        if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
          piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
          iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
          *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
          cVar6 = (char)*(undefined4 *)(*piVar1 + -8 + iVar5 * 8);
          pcVar9 = *(char **)(*piVar1 + -4 + iVar5 * 8);
        }
        else {
          *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
          FUN_004d4550(pvVar3);
          *(undefined4 *)((int)pvVar3 + 0x90) = 0;
          cVar6 = '\0';
          *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
        }
        iVar5 = *(int *)((int)pvVar3 + 0x90);
        *(undefined4 *)((int)pvVar3 + 0x90) = 0;
        *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
        if (iVar5 == 0) {
          if (cVar6 != '\b') {
            *(undefined4 *)((int)pvVar3 + 0x90) = 0xe;
            FUN_004d4550(pvVar3);
            *(undefined4 *)((int)pvVar3 + 0x90) = 0;
            *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
            pcVar9 = (char *)0x0;
          }
        }
        else {
          pcVar9 = (char *)0x0;
        }
        pcVar8 = pcVar9;
        if (pcVar9 != (char *)0x0) {
          uVar7 = 0xffffffff;
          pcVar10 = pcVar9;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            cVar6 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar6 != '\0');
          local_18 = ~uVar7 - 1;
          iVar5 = FUN_0047ef30(this_01,(int)pcVar9,local_18);
          if (local_28 <= iVar5) {
            local_28 = iVar5;
          }
          iVar4 = FUN_004918d0(this_00);
          iVar5 = iVar4 - iVar5 >> 1;
          if (iVar5 < 0) {
            local_2c = -iVar5;
          }
          else {
            local_24 = iVar5;
          }
          local_1c = *(int *)((int)this_01 + 8);
        }
      }
    }
    iVar5 = FUN_00491910(this_00,&local_10,local_2c + param_2,param_3);
    if (iVar5 == 0) {
      local_10 = 0;
      local_c = 0;
    }
    else {
      local_10 = (local_2c + param_2) - local_10;
      local_c = param_3 - local_c;
    }
    FUN_004935c0(this_00,param_1,local_10 + local_2c + param_2,local_c + param_3,-1,1);
    if (pcVar8 != (char *)0x0) {
      iVar11 = -1;
      iVar4 = 0;
      iVar5 = FUN_004918f0(this_00);
      FUN_0047f0a0(this_01,param_1,(int)pcVar8,local_24 + param_2,iVar5 + param_3,local_18,iVar4,
                   iVar11);
    }
    iVar5 = FUN_004918f0(this_00);
    FUN_00500650(&DAT_00584ae8,param_2,param_3,local_28 + -1 + param_2,
                 iVar5 + local_1c + -1 + param_3);
  }
  return;
}


