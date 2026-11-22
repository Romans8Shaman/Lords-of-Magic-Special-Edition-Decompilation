
undefined4 __thiscall FUN_004bbd00(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  void *this_00;
  void *this_01;
  int iStack_8;
  int *local_4;
  
  piVar1 = param_1;
  piVar2 = (int *)FUN_00482ac0(this,*param_1,0);
  local_4 = (int *)FUN_00482ac0(this,*piVar1,3);
  if (piVar2 == (int *)0x0) {
    if (local_4 == (int *)0x0) {
      return 0;
    }
    iVar3 = (/*IC:004bbd3f*/**(code **)(*local_4 + 0x3c))(local_4);
  }
  else {
    if (piVar1[1] < 0) {
      return 0;
    }
    if (piVar2[0x13] <= piVar1[1]) {
      return 0;
    }
    iVar3 = (/*IC:004bbd5c*/**(code **)(*piVar2 + 0x3c))(piVar2);
  }
  if ((iVar3 < 0) || (0xf < iVar3)) {
    this_01 = (void *)0x0;
  }
  else {
    this_01 = (void *)((int)this + iVar3 * 0x1d84 + 0x5068);
  }
  if (this_01 == (void *)0x0) {
    return 0;
  }
  FUN_004bbb70(this_01,(int *)&param_1,&iStack_8);
  uVar4 = FUN_00482ac0(this,(int)param_1,0);
  if (uVar4 == 0) {
    uVar4 = FUN_00482ac0(this,(int)param_1,3);
    if (uVar4 == 0) goto LAB_004bbdf0;
    this_00 = (void *)(*(int *)(uVar4 + 0x44) + 0xc4 +
                      *(int *)(*(int *)(uVar4 + 0x44) + 0x50) * 0x4c);
  }
  else {
    this_00 = (void *)(uVar4 + 0xc4 + iStack_8 * 0x4c);
  }
  FUN_00525f40(this_00,0);
LAB_004bbdf0:
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)(local_4[0x11] + 0xc4 + *(int *)(local_4[0x11] + 0x50) * 0x4c);
  }
  else {
    piVar2 = piVar2 + piVar1[1] * 0x13 + 0x31;
  }
  iVar3 = FUN_00525f40(piVar2,1);
  if (iVar3 == 0) {
    return 0;
  }
  FUN_004bdad0(this_01,piVar2);
  return 1;
}


