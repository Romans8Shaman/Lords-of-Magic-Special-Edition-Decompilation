
undefined4 __thiscall
FUN_004282a0(void *this,undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int *this_00;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  
  this_00 = (int *)FUN_00428840(this,param_3);
  if (this_00 == (int *)0x0) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x48) = 0xffffffff;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 8;
  if (param_4 == 0) {
    if ((this_00[4] & 0x1fU) == 0) {
      return 0;
    }
    this_00[4] = this_00[4] & 0xffffffe0;
    iVar2 = FUN_00427b80(*this_00);
    FUN_00428190(this_00,param_1,param_2,*(uint *)(iVar2 + 0x2c),*(int **)(iVar2 + 0x30));
    return 1;
  }
  if ((*(byte *)(this_00 + 4) & 0x1f) != 0) {
    return 0;
  }
  iVar2 = FUN_00427b80(*this_00);
  uVar4 = *(uint *)(iVar2 + 0x18);
  uVar6 = uVar4 & 0x1f;
  if (uVar6 == 0) {
    return 0;
  }
  iVar3 = FUN_00427b80(*this_00);
  if ((*(byte *)(iVar3 + 0x18) & 0x10) != 0) {
    this_00[4] = this_00[4] | uVar6;
    iVar2 = FUN_00427b80(*this_00);
    FUN_00428190(this_00,param_1,param_2,*(uint *)(iVar2 + 0x24),*(int **)(iVar2 + 0x28));
    return 1;
  }
  iVar3 = FUN_00521e00(this);
  if (iVar3 == 0) {
    return 0;
  }
  if ((*(uint *)(iVar2 + 0x1c) & 1 << ((byte)*(undefined4 *)(iVar3 + 0x1c) & 0x1f)) == 0) {
    return 0;
  }
  if ((*(uint *)(iVar2 + 0x20) & 1 << ((byte)*(undefined4 *)(iVar3 + 0x20) & 0x1f)) == 0) {
    return 0;
  }
  uVar5 = 0;
  piVar7 = (int *)0x0;
  if ((uVar4 & 8) != 0) {
    for (piVar1 = *(int **)((int)this + 0x1c); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[5]) {
      if ((piVar1[4] & 3U) != 0) {
        uVar5 = uVar5 | piVar1[4] & 3U;
        piVar7 = piVar1;
      }
    }
    if (uVar5 == 3) {
      piVar7[4] = piVar7[4] & 0xffffffe0;
      iVar2 = FUN_00427b80(*piVar7);
      FUN_00428190(piVar7,param_1,param_2,*(uint *)(iVar2 + 0x2c),*(int **)(iVar2 + 0x30));
      uVar4 = this_00[4] | 1;
    }
    else if (uVar5 == 0) {
      uVar4 = this_00[4] | 1;
    }
    else {
      uVar4 = this_00[4] | uVar5 ^ 3;
    }
    this_00[4] = uVar4;
    iVar2 = FUN_00427b80(*this_00);
    FUN_00428190(this_00,param_1,param_2,*(uint *)(iVar2 + 0x24),*(int **)(iVar2 + 0x28));
    return 1;
  }
  if ((uVar4 & 4) != 0) {
    for (piVar7 = *(int **)((int)this + 0x1c); piVar7 != (int *)0x0; piVar7 = (int *)piVar7[5]) {
      if ((*(byte *)(piVar7 + 4) & 3) != 0) {
        piVar7[4] = piVar7[4] & 0xffffffe0;
        iVar2 = FUN_00427b80(*piVar7);
        FUN_00428190(piVar7,param_1,param_2,*(uint *)(iVar2 + 0x2c),*(int **)(iVar2 + 0x30));
      }
    }
    this_00[4] = this_00[4] | 3;
    iVar2 = FUN_00427b80(*this_00);
    FUN_00428190(this_00,param_1,param_2,*(uint *)(iVar2 + 0x24),*(int **)(iVar2 + 0x28));
    return 1;
  }
  for (piVar1 = *(int **)((int)this + 0x1c); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[5]) {
    uVar4 = piVar1[4] & 3;
    if ((uVar4 != 0) && (uVar5 = uVar5 | uVar4, (uVar6 & uVar4) != 0)) {
      piVar7 = piVar1;
    }
  }
  if (piVar7 != (int *)0x0) {
    iVar2 = FUN_00427b80(*piVar7);
    if (((*(byte *)(iVar2 + 0x18) & 8) == 0) || (uVar5 == 3)) {
      piVar7[4] = piVar7[4] & 0xffffffe0;
      iVar2 = FUN_00427b80(*piVar7);
      FUN_00428190(piVar7,param_1,param_2,*(uint *)(iVar2 + 0x2c),*(int **)(iVar2 + 0x30));
    }
    else {
      piVar7[4] = piVar7[4] & 0xfffffffcU | ~piVar7[4] & 3U;
    }
  }
  this_00[4] = this_00[4] | uVar6;
  iVar2 = FUN_00427b80(*this_00);
  FUN_00428190(this_00,param_1,param_2,*(uint *)(iVar2 + 0x24),*(int **)(iVar2 + 0x28));
  return 1;
}


