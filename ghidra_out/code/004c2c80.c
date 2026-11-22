
undefined4 FUN_004c2c80(int *param_1)

{
  int *this;
  undefined4 *this_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  this = (int *)FUN_00482ac0(&DAT_005aa12c,*param_1,0);
  this_00 = FUN_00485080(&DAT_005aa12c,param_1[1],0x2f);
  if ((this == (int *)0x0) || (this_00 == (undefined4 *)0x0)) {
    return 0;
  }
  iVar1 = FUN_004c1c50((int)this);
  if ((iVar1 != 0) && (uVar2 = FUN_00482ac0(&DAT_005aa12c,this[0x16d],0), uVar2 != 0)) {
    FUN_004c2450(uVar2);
  }
  if ((this[0x12] == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) &&
     (iVar1 = FUN_0052d160((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)), this[10] == iVar1)) {
    FUN_0052bc40((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
    FUN_004d09a0(DAT_005a7b78,DAT_005a7be4,DAT_005a7be8,0);
  }
  iVar1 = 0;
  uVar2 = FUN_00506100((int)this);
  if (uVar2 != 0) {
    this[0x173] = 0;
    this[0xc] = this[0xc] & 0xdfffffff;
  }
  if (0 < this[0x13]) {
    piVar4 = this + 0x31;
    do {
      iVar3 = FUN_00525fc0(piVar4);
      if (iVar3 == -1) {
        iVar3 = FUN_004164e0(this,iVar1,1);
        if (iVar3 != 0) {
          return 0;
        }
      }
      else {
        iVar1 = iVar1 + 1;
        piVar4 = piVar4 + 0x13;
      }
    } while (iVar1 < this[0x13]);
  }
  iVar1 = FUN_004c1c50((int)this_00);
  if (iVar1 == 0) {
    (/*IC:004c2deb*/**(code **)(*this + 0x2c))(this);
    FUN_00420630((int)this);
    FUN_004c1bc0(this,this_00);
    FUN_00410af0(this,0xffffffff);
    FUN_004c1c20(this_00,(int)this);
    FUN_00420630((int)this_00);
  }
  else {
    piVar4 = (int *)FUN_00482ac0(&DAT_005aa12c,this_00[0x16d],0);
    if (piVar4 != (int *)0x0) {
      FUN_004c23b0(piVar4,(int)this);
      FUN_00416400(&DAT_005aa12c,this[10]);
      (/*IC:004c2dc9*/**(code **)(*piVar4 + 0x2c))(piVar4);
      FUN_00420630((int)piVar4);
      FUN_00410af0(piVar4,0xffffffff);
      FUN_00420630((int)this_00);
      this = piVar4;
    }
  }
  if ((this != (int *)0x0) && (iVar1 = FUN_00416a30((int)this), iVar1 != 0)) {
    FUN_004c2550(this_00[10],this[10]);
  }
  return 1;
}


