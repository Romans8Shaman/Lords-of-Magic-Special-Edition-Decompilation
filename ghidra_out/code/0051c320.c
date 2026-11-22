
void __fastcall FUN_0051c320(void *param_1)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 uVar7;
  uint local_10;
  int *local_c;
  float local_4;
  
  if (-1 < *(int *)((int)param_1 + 0xb8)) {
    if (*(int *)((int)param_1 + 0xbc) == 0) {
      FUN_0051d200(param_1,&local_10,5);
      FUN_004d09a0(DAT_005a7b78,local_10,local_c,1);
      pvVar2 = DAT_005a7b78;
      if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
        piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
        iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
        uVar5 = *(uint *)(*piVar1 + -8 + iVar3 * 8);
        local_4 = *(float *)(*piVar1 + -4 + iVar3 * 8);
      }
      else {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
        FUN_004d4550(pvVar2);
        *(undefined4 *)((int)pvVar2 + 0x90) = 0;
        *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
        uVar5 = 0;
      }
      uVar5 = uVar5 & 0xff;
      fVar4 = local_4;
      if (uVar5 != 1) {
        if (uVar5 == 2) {
          fVar4 = (float)((int)local_4 >> 8);
        }
        else if (uVar5 == 4) {
          lVar6 = __ftol((float10)local_4);
          fVar4 = (float)lVar6;
        }
        else {
          *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
          FUN_004d4550(pvVar2);
          *(undefined4 *)((int)pvVar2 + 0x90) = 0;
          *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
          fVar4 = 0.0;
        }
      }
      if (fVar4 == 0.0) goto LAB_0051c423;
      *(undefined4 *)((int)param_1 + 0xbc) = 1;
      uVar7 = 6;
    }
    else {
      uVar7 = 7;
    }
    FUN_0051d200(param_1,&local_10,uVar7);
    FUN_004d09a0(DAT_005a7b78,local_10,local_c,0);
  }
LAB_0051c423:
  FUN_0051c6b0((int)param_1);
  return;
}


