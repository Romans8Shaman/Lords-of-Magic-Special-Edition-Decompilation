
void __cdecl op_buildingmaxlevel(void *vm)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *this;
  int iVar5;
  float fVar6;
  int *piStack_10;
  float fStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  pvVar1 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&piStack_10,&fStack_c);
  if (iVar2 == 0) {
    *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    return;
  }
  fVar6 = 4.2039e-45;
  fStack_c = 4.2039e-45;
  uVar3 = FUN_00482ac0(&DAT_005aa12c,(int)vm,2);
  if (uVar3 != 0) {
    iVar2 = FUN_0043de50(uVar3);
    piVar4 = (int *)FUN_00482ac0(&DAT_005aa12c,iVar2,2);
    uVar3 = FUN_00482ac0(&DAT_005aa12c,iVar2,3);
    if (piVar4 == (int *)0x0) {
      if (uVar3 != 0) {
        fVar6 = *(float *)(uVar3 + 0xd4);
      }
    }
    else {
      this = (int *)FUN_0043dbb0((int)piVar4);
      piStack_10 = (int *)FUN_0043dbd0((int)piVar4);
      iVar2 = (/*IC:00444a7e*/**(code **)(*piVar4 + 0x3c))(piVar4);
      iVar5 = (/*IC:00444a87*/**(code **)(*this + 0x3c))(this);
      if (iVar2 != iVar5) {
        this = (int *)0x0;
      }
      iVar2 = (/*IC:00444a94*/**(code **)(*piVar4 + 0x3c))(piVar4);
      piVar4 = piStack_10;
      iVar5 = (/*IC:00444aa1*/**(code **)(*piStack_10 + 0x3c))(piStack_10);
      if (iVar2 != iVar5) {
        piVar4 = (int *)0x0;
      }
      if (this != (int *)0x0) {
        if (piVar4 != (int *)0x0) {
          if (piVar4[0x35] < this[0x35]) {
            fVar6 = (float)this[0x35];
          }
          else {
            fVar6 = (float)piVar4[0x35];
          }
          goto LAB_00444af2;
        }
        if (this != (int *)0x0) {
          fVar6 = (float)this[0x35];
          goto LAB_00444af2;
        }
      }
      if (piVar4 == (int *)0x0) {
        fVar6 = fStack_c;
      }
      else {
        fVar6 = (float)piVar4[0x35];
      }
    }
  }
LAB_00444af2:
  if (*(int *)((int)pvVar1 + 0x54) == 0) {
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    return;
  }
  iVar2 = *(int *)((int)pvVar1 + 0x50);
  iVar5 = *(int *)((int)pvVar1 + 0x54) + -1;
  *(int *)((int)pvVar1 + 0x54) = iVar5;
  *(undefined4 *)(iVar2 + iVar5 * 8) = 1;
  *(float *)(iVar2 + 4 + iVar5 * 8) = fVar6;
  return;
}


