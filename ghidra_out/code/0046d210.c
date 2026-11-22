
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0046d210(void *this,undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  if ((((param_2 < 0) || (*(int *)((int)this + 0xc) <= param_2)) ||
      (iVar5 = *(int *)((int)this + 4), iVar5 == 0)) || (param_1 == (undefined4 *)0x0)) {
    return 0;
  }
  iVar3 = param_2 * 0x30;
  if ((*(uint *)(iVar3 + 0x10 + iVar5) & param_1[2]) == 0) {
    OutputDebugStringA(s_category_not_allowed_00557924);
    return 0;
  }
  uVar6 = *(uint *)(iVar3 + 0x14 + iVar5);
  if ((uVar6 & 0x10) != 0) {
    uVar4 = FUN_0046d030(this,param_1,param_2);
    return uVar4;
  }
  iVar7 = 0;
  if ((uVar6 & 2) != 0) {
    iVar2 = *(int *)(iVar3 + 0x28 + iVar5);
    if (*(int *)(iVar3 + 0x18 + iVar5) < iVar2) {
      OutputDebugStringA(s_max_qty_exceeded_00557910);
      return 0;
    }
    iVar7 = param_1[3];
    param_1[3] = iVar7 + iVar2;
  }
  puVar1 = (undefined4 *)(*(int *)((int)this + 4) + 0x1c + iVar3);
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  puVar1[2] = param_1[2];
  puVar1[3] = param_1[3];
  if (DAT_00583120 != 2) {
    if (DAT_005a9e04 == this) {
      if (*(int *)((int)this + 0x38) == param_2) {
        uVar6 = DAT_00583108 - DAT_00583118 >> 0x1f;
        iVar3 = (DAT_00583108 - DAT_00583118 ^ uVar6) - uVar6;
        uVar6 = DAT_0058310c - DAT_0058311c >> 0x1f;
        iVar5 = (DAT_0058310c - DAT_0058311c ^ uVar6) - uVar6;
        if ((uint)(DAT_00583128 - _DAT_00583124) < 1000) {
          if (iVar5 <= iVar3) {
            iVar5 = iVar3;
          }
          if (iVar5 < 4) {
            DAT_00583120 = 1;
            goto LAB_0046d35c;
          }
        }
        DAT_00583120 = 3;
      }
      else {
        DAT_00583120 = 4;
      }
    }
    else {
      DAT_00583120 = 5;
    }
  }
LAB_0046d35c:
  FUN_0046d3c0(this,(int)param_1,param_2,iVar7);
  if (DAT_005a9e04 != (void *)0x0) {
    *(undefined4 *)((int)DAT_005a9e04 + 0x38) = 0xffffffff;
    *(undefined4 *)((int)DAT_005a9e04 + 0x28) = 0xffffffff;
    *(undefined4 *)((int)DAT_005a9e04 + 0x2c) = 0xffffffff;
    *(undefined4 *)((int)DAT_005a9e04 + 0x34) = 0;
    FUN_00472700(&DAT_005a9e04,0,0,0);
  }
  *(undefined4 *)((int)this + 0x48) = 1;
  return 1;
}


