
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0043d730(int *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined *this;
  longlong lVar7;
  float fStack_1c;
  float fStack_18;
  int aiStack_14 [5];
  
  _DAT_005ae954 = param_1;
  iVar4 = FUN_0043be20((int)param_1);
  if (iVar4 == 0) {
    OutputDebugStringA(s_bi_NULL_in_Building__BeginTurn_005565e0);
  }
  else {
    FUN_004d05e0(DAT_005a7b78,*(uint *)(iVar4 + 8),*(int **)(iVar4 + 0xc));
    FUN_00446e90(param_1);
  }
  iVar4 = (/*IC:0043d774*/**(code **)(*param_1 + 0x3c))(param_1);
  if ((iVar4 < 0) || (0xf < iVar4)) {
    this = (undefined *)0x0;
  }
  else {
    this = &DAT_005af194 + iVar4 * 0x1d84;
  }
  if (this != (undefined *)0x0) {
    iVar4 = (/*IC:0043d7a9*/**(code **)(*param_1 + 0x40))(param_1,aiStack_14);
    if (iVar4 != 0) {
      FUN_004bfd40(this,aiStack_14);
    }
  }
  if ((int *)param_1[0x12] != (int *)0x0) {
    FUN_0041b6d0((int *)param_1[0x12]);
    pvVar3 = DAT_005a7b78;
    if (((param_1[0x16] == 0xe) && (-1 < param_1[0x21])) && ((char)DAT_00579070 != '\0')) {
      iVar4 = param_1[10];
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar3);
        *(undefined4 *)((int)pvVar3 + 0x90) = 0;
        *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
      }
      else {
        iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
        iVar2 = *(int *)((int)pvVar3 + 0x50);
        *(undefined4 *)(iVar2 + iVar5 * 8) = 1;
        *(int *)(iVar2 + 4 + iVar5 * 8) = iVar4;
      }
      FUN_004d05e0(DAT_005a7b78,DAT_00579070,DAT_00579074);
      pvVar3 = DAT_005a7b78;
      if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
        piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
        iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
        uVar6 = *(uint *)(*piVar1 + -8 + iVar4 * 8);
        fStack_18 = *(float *)(*piVar1 + -4 + iVar4 * 8);
      }
      else {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
        FUN_004d4550(pvVar3);
        *(undefined4 *)((int)pvVar3 + 0x90) = 0;
        *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
        uVar6 = 0;
      }
      uVar6 = uVar6 & 0xff;
      if (uVar6 != 1) {
        if (uVar6 == 2) {
          fStack_18 = (float)((int)fStack_18 >> 8);
        }
        else if (uVar6 == 4) {
          lVar7 = __ftol((float10)fStack_18);
          fStack_18 = (float)lVar7;
        }
        else {
          *(undefined4 *)((int)pvVar3 + 0x90) = 0xe;
          FUN_004d4550(pvVar3);
          *(undefined4 *)((int)pvVar3 + 0x90) = 0;
          *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
          fStack_18 = fStack_1c;
        }
      }
      param_1[0x22] = param_1[0x22] + (int)fStack_18;
    }
  }
  return;
}


