
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl op_setformation(void *param_1)

{
  void *this;
  uint uVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float10 fVar6;
  float10 fVar7;
  longlong lVar8;
  uint local_18;
  uint local_14;
  uint local_10;
  float local_c;
  float local_4;
  
  this = param_1;
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar4 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar4;
    uVar1 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar4 * 8);
    local_4 = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar4 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar1 = 0;
  }
  uVar1 = uVar1 & 0xff;
  fVar3 = local_4;
  if (uVar1 != 1) {
    if (uVar1 == 2) {
      fVar3 = (float)((int)local_4 >> 8);
    }
    else {
      if (uVar1 != 4) {
LAB_0041fd17:
        FUN_00404ab0(this,0xe);
        return;
      }
      lVar8 = __ftol((float10)local_4);
      fVar3 = (float)lVar8;
    }
  }
  if (((int)fVar3 < 1) || (0xf < (int)fVar3)) {
    FUN_004d41c0(this,s_setform___invalid___units_00555c4c);
  }
  else {
    iVar2 = FUN_0041faf0(&DAT_005787b8,(int)fVar3,0);
    iVar4 = (int)fVar3 + -1;
    if (-1 < iVar4) {
      pfVar5 = (float *)(iVar2 + iVar4 * 8);
      do {
        if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
          iVar2 = *(int *)((int)this + 0x54) + 1;
          *(int *)((int)this + 0x54) = iVar2;
          local_10 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
          local_c = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
        }
        else {
          *(undefined4 *)((int)this + 0x90) = 6;
          FUN_004d4550(this);
          *(undefined4 *)((int)this + 0x90) = 0;
          *(undefined4 *)((int)this + 0xa4) = 0;
          local_10 = 0;
          local_c = local_4;
        }
        iVar2 = FUN_004026a0(&local_10,&local_14,&local_18,(float *)&param_1);
        if (iVar2 == 0) {
          *(undefined4 *)((int)this + 0x90) = 0xe;
          FUN_004d4550(this);
          *(undefined4 *)((int)this + 0x90) = 0;
          *(undefined4 *)((int)this + 0xa4) = 0;
          return;
        }
        if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
          iVar2 = *(int *)((int)this + 0x54) + 1;
          *(int *)((int)this + 0x54) = iVar2;
          uVar1 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
          local_4 = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
        }
        else {
          *(undefined4 *)((int)this + 0x90) = 6;
          FUN_004d4550(this);
          *(undefined4 *)((int)this + 0x90) = 0;
          *(undefined4 *)((int)this + 0xa4) = 0;
          uVar1 = 0;
        }
        uVar1 = uVar1 & 0xff;
        if (uVar1 == 1) {
          fVar6 = (float10)(int)local_4;
        }
        else if (uVar1 == 2) {
          fVar6 = (float10)(int)local_4 * (float10)_DAT_0054d450;
        }
        else {
          if (uVar1 != 4) goto LAB_0041fd17;
          fVar6 = (float10)local_4;
        }
        fVar7 = (float10)fpatan((float10)(float)param_1,fVar6);
        iVar4 = iVar4 + -1;
        *pfVar5 = (float)fVar7;
        pfVar5[1] = (float)SQRT((float10)(float)param_1 * (float10)(float)param_1 + fVar6 * fVar6);
        pfVar5 = pfVar5 + -2;
      } while (-1 < iVar4);
    }
  }
  return;
}


