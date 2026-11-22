
void __thiscall FUN_004b4c20(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  float local_110;
  int local_108 [5];
  undefined4 local_f3;
  undefined4 local_ef;
  undefined4 local_eb;
  undefined4 local_e7;
  undefined4 local_e3;
  undefined4 local_df;
  undefined4 local_db;
  float local_d7;
  undefined4 local_d3;
  undefined4 local_cf;
  
  if (*(void **)((int)this + 0x4b2c) == (void *)0x0) {
    iVar3 = 1;
  }
  else {
    iVar3 = FUN_004b78c0(*(void **)((int)this + 0x4b2c));
  }
  if (1 < iVar3) {
    FUN_0048cc70(local_108,0x5f);
    fVar5 = 0.0;
    uVar7 = 0;
    uVar6 = 0;
    iVar3 = FUN_0048a400(0x584ae8);
    if (((iVar3 != 0) && (0 < iVar3)) && (iVar3 < 3)) {
      if (((char)DAT_005843f0 == '\x06') && ((DAT_005843f0 & 0x100) == 0)) {
        FUN_004d05e0(DAT_005a7b78,DAT_005843f0,DAT_005843f4);
        pvVar2 = DAT_005a7b78;
        if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
          piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
          iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
          *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
          uVar4 = *(uint *)(*piVar1 + -8 + iVar3 * 8);
          local_110 = *(float *)(*piVar1 + -4 + iVar3 * 8);
        }
        else {
          *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
          FUN_004d4550(pvVar2);
          *(undefined4 *)((int)pvVar2 + 0x90) = 0;
          *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
          uVar4 = 0;
        }
        uVar4 = uVar4 & 0xff;
        if (uVar4 == 1) {
          fVar5 = local_110;
        }
        else if (uVar4 == 2) {
          fVar5 = (float)((int)local_110 >> 8);
        }
        else if (uVar4 == 4) {
          lVar8 = __ftol((float10)local_110);
          fVar5 = (float)lVar8;
        }
        else {
          *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
          FUN_004d4550(pvVar2);
          *(undefined4 *)((int)pvVar2 + 0x90) = 0;
          *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
        }
      }
      uVar6 = DAT_00573428;
      uVar7 = DAT_00584604;
    }
    if (*(int *)((int)this + 0x4b2c) == 0) {
      local_f3 = 1;
    }
    else {
      local_f3 = FUN_004b7dd0(*(int *)((int)this + 0x4b2c));
    }
    local_e3 = DAT_00584424;
    local_ef = param_1;
    local_e7 = DAT_00583560;
    local_d3 = 0;
    local_cf = 0;
    local_eb = param_2;
    local_df = uVar7;
    local_db = uVar6;
    local_d7 = fVar5;
    FUN_00489b70(&DAT_00584ae8,local_108);
  }
  return;
}


