
void __cdecl op_setcitychildoffsets(void *param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float *pfVar4;
  longlong lVar5;
  float local_4;
  
  pfVar4 = (float *)&DAT_005564e0;
  do {
    if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
      iVar1 = *(int *)((int)param_1 + 0x54) + 1;
      *(int *)((int)param_1 + 0x54) = iVar1;
      uVar2 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
      fVar3 = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
    }
    else {
      *(undefined4 *)((int)param_1 + 0x90) = 6;
      FUN_004d4550(param_1);
      *(undefined4 *)((int)param_1 + 0x90) = 0;
      *(undefined4 *)((int)param_1 + 0xa4) = 0;
      uVar2 = 0;
      fVar3 = local_4;
    }
    uVar2 = uVar2 & 0xff;
    if (uVar2 == 1) {
LAB_0043df5c:
      pfVar4[1] = fVar3;
    }
    else {
      if (uVar2 == 2) {
        fVar3 = (float)((int)fVar3 >> 8);
        goto LAB_0043df5c;
      }
      if (uVar2 != 4) goto LAB_0043dfd1;
      lVar5 = __ftol((float10)fVar3);
      pfVar4[1] = (float)lVar5;
    }
    if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
      iVar1 = *(int *)((int)param_1 + 0x54) + 1;
      *(int *)((int)param_1 + 0x54) = iVar1;
      uVar2 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
      local_4 = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
    }
    else {
      *(undefined4 *)((int)param_1 + 0x90) = 6;
      FUN_004d4550(param_1);
      *(undefined4 *)((int)param_1 + 0x90) = 0;
      *(undefined4 *)((int)param_1 + 0xa4) = 0;
      uVar2 = 0;
    }
    uVar2 = uVar2 & 0xff;
    fVar3 = local_4;
    if (uVar2 == 1) {
LAB_0043dfbf:
      *pfVar4 = fVar3;
    }
    else {
      if (uVar2 == 2) {
        fVar3 = (float)((int)local_4 >> 8);
        goto LAB_0043dfbf;
      }
      if (uVar2 != 4) {
LAB_0043dfd1:
        *(undefined4 *)((int)param_1 + 0x90) = 0xe;
        FUN_004d4550(param_1);
        *(undefined4 *)((int)param_1 + 0x90) = 0;
        *(undefined4 *)((int)param_1 + 0xa4) = 0;
        return;
      }
      lVar5 = __ftol((float10)local_4);
      *pfVar4 = (float)lVar5;
    }
    pfVar4 = pfVar4 + -2;
    if ((int)pfVar4 < 0x5564d0) {
      return;
    }
  } while( true );
}


