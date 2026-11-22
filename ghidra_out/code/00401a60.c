
void __thiscall FUN_00401a60(void *this,int *param_1)

{
  int *this_00;
  int iVar1;
  uint uVar2;
  void *this_01;
  int iVar3;
  undefined *puVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  float fVar8;
  
  this_00 = param_1;
  iVar1 = FUN_00420620((int)param_1);
  if (iVar1 != 0) {
    return;
  }
  uVar2 = FUN_00506100((int)param_1);
  if (uVar2 != 0) {
    return;
  }
  iVar1 = FUN_004205e0((int)param_1);
  if (iVar1 == 0) {
    param_1 = (int *)0x1;
    piVar7 = DAT_00555148;
  }
  else {
    param_1 = (int *)FUN_00420600((int)param_1);
    piVar7 = param_1;
  }
  iVar1 = FUN_00401020(this_00,(int)piVar7);
  *(int *)((int)this + 8) = this_00[7];
  this_01 = (void *)FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0xc),0);
  if (this_01 == (void *)0x0) {
LAB_00401b2b:
    this_01 = (void *)FUN_00401760(this_00,*(int *)((int)this + 8),iVar1);
    if (this_01 == (void *)0x0) goto LAB_00401d0a;
  }
  else {
    iVar3 = FUN_00407d50((int)this_01);
    if ((((iVar3 != 0) || (*(int *)((int)this_01 + 0x48) == this_00[0x12])) ||
        ((iVar3 = FUN_00420620((int)this_01), iVar3 != 0 && (iVar3 = FUN_00458170(), iVar3 != 0))))
       || ((iVar3 = FUN_005071c0(this_01,this_00[0x12]), iVar3 == 0 ||
           (iVar3 = FUN_004a8960(&DAT_005ae958,*(int *)((int)this + 8),*(int *)((int)this_01 + 0x1c)
                                ), iVar1 < iVar3)))) {
      this_01 = (void *)0x0;
    }
    if (this_01 == (void *)0x0) goto LAB_00401b2b;
  }
  iVar1 = FUN_00420620((int)this_01);
  if (((iVar1 == 0) || (iVar1 = FUN_00458170(), iVar1 == 0)) &&
     (iVar1 = FUN_005071c0(this_01,this_00[0x12]), iVar1 != 0)) {
    *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)this_01 + 0x28);
    iVar1 = FUN_004a8960(&DAT_005ae958,this_00[7],*(int *)((int)this_01 + 0x1c));
    uVar2 = FUN_004a8b50(&DAT_005ae958,this_00[7],*(int *)((int)this_01 + 0x1c));
    if (uVar2 != 8) {
      if ((int)param_1 < iVar1) {
        FUN_00407fd0(this,this_00,(int)this_01,iVar1,uVar2,param_1,*(int *)((int)this_01 + 0x1c));
        return;
      }
      iVar3 = FUN_004205e0((int)this_00);
      if (iVar3 == 0) {
        iVar1 = FUN_004019f0(this_00,(int)this_01,uVar2);
        if (iVar1 == 0) {
          return;
        }
      }
      else {
        if (this_00[0x11] != uVar2) {
          FUN_004193e0(this_00,uVar2);
          return;
        }
        if (1 < iVar1) {
          uVar2 = FUN_0047c9e0(&DAT_005aa12c,this_00[0x12]);
          if (uVar2 == 0) {
            if ((DAT_00583100 == '\x02') && (0 < DAT_005ae918)) {
              fVar6 = *(float *)((int)this_01 + 0x5a8);
              iVar1 = *(int *)((int)this_01 + 0x1c);
              fVar5 = (float)this_00[0x16a];
              fVar8 = 0.5;
              iVar3 = this_00[7];
              puVar4 = FUN_004c6fc0();
              iVar1 = FUN_00532820(puVar4,iVar3,fVar5,iVar1,fVar6,fVar8);
              if (iVar1 == 0) goto LAB_00401d0a;
            }
          }
          else {
            iVar1 = FUN_00409bc0((int)this_00,iVar1);
            if (iVar1 != 0) {
              *(undefined4 *)this = 0x30;
              return;
            }
            fVar6 = *(float *)((int)this_01 + 0x5a8);
            iVar1 = *(int *)((int)this_01 + 0x1c);
            fVar5 = (float)this_00[0x16a];
            fVar8 = 0.5;
            iVar3 = this_00[7];
            puVar4 = FUN_004c6fc0();
            iVar1 = FUN_00532820(puVar4,iVar3,fVar5,iVar1,fVar6,fVar8);
            if (iVar1 == 0) {
              if ((*(uint *)((int)this + 0x14) & 0x100) == 0) goto LAB_00401d0a;
              iVar1 = FUN_00408a60(this,this_00,(int)this_01);
              if (iVar1 == 0) {
                return;
              }
            }
            else {
              iVar1 = FUN_004094d0(this,this_00,(int)this_01);
              if (iVar1 != 0) {
                return;
              }
            }
          }
          FUN_0041efa0(this_00,4);
          FUN_00407900((int)this_00);
          return;
        }
      }
      FUN_0041efa0(this_00,3);
      FUN_00407900((int)this_00);
      return;
    }
  }
LAB_00401d0a:
  FUN_00401730(this_00);
  return;
}


