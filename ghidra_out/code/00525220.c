
void __cdecl op_clearunitacks(void *param_1)

{
  void *this;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  float fVar5;
  longlong lVar6;
  float local_10;
  uint local_c;
  uint local_8;
  float local_4;
  
  this = param_1;
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    uVar2 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_4 = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar2 = 0;
  }
  uVar2 = uVar2 & 0xff;
  if (uVar2 == 1) {
    fVar5 = local_4;
  }
  else if (uVar2 == 2) {
    fVar5 = (float)((int)local_4 >> 8);
  }
  else {
    if (uVar2 != 4) {
      FUN_00404ab0(this,0xe);
      return;
    }
    lVar6 = __ftol((float10)local_4);
    fVar5 = (float)lVar6;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    local_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    local_4 = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    local_8 = 0;
  }
  iVar1 = FUN_004026a0(&local_8,(uint *)&param_1,&local_c,&local_10);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  if ((((int)param_1 < 0) || (DAT_005cd2f0 <= (int)param_1)) || (DAT_005cd2f4 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_005cd2f4 + (int)param_1 * 1000;
  }
  if (iVar1 != 0) {
    if (fVar5 == 3.22299e-44) {
      iVar3 = 0;
      if (0 < *(int *)(iVar1 + 800) + -1) {
        puVar4 = (undefined4 *)(iVar1 + 0x2f8);
        do {
          *puVar4 = 0xffffffff;
          iVar3 = iVar3 + 1;
          puVar4 = puVar4 + 1;
        } while (iVar3 < *(int *)(iVar1 + 800) + -1);
      }
      *(undefined4 *)(iVar1 + 800) = 0;
      return;
    }
    if (fVar5 == 3.36312e-44) {
      iVar3 = 0;
      if (0 < *(int *)(iVar1 + 0x34c) + -1) {
        puVar4 = (undefined4 *)(iVar1 + 0x324);
        do {
          *puVar4 = 0xffffffff;
          iVar3 = iVar3 + 1;
          puVar4 = puVar4 + 1;
        } while (iVar3 < *(int *)(iVar1 + 0x34c) + -1);
      }
      *(undefined4 *)(iVar1 + 0x34c) = 0;
      return;
    }
    if (fVar5 == 3.50325e-44) {
      iVar3 = 0;
      if (0 < *(int *)(iVar1 + 0x378) + -1) {
        puVar4 = (undefined4 *)(iVar1 + 0x350);
        do {
          *puVar4 = 0xffffffff;
          iVar3 = iVar3 + 1;
          puVar4 = puVar4 + 1;
        } while (iVar3 < *(int *)(iVar1 + 0x378) + -1);
      }
      *(undefined4 *)(iVar1 + 0x378) = 0;
    }
  }
  return;
}


