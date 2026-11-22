
void __thiscall FUN_00403920(void *this,int *param_1)

{
  int *this_00;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  this_00 = param_1;
  iVar1 = FUN_004205e0((int)param_1);
  if (iVar1 == 0) {
    param_1 = (int *)0x1;
  }
  else {
    param_1 = (int *)FUN_00420600((int)param_1);
  }
  uVar2 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0xc),0);
  if ((uVar2 != 0) &&
     (((~*(uint *)(uVar2 + 0x30) & 0x100) == 0 || (*(int *)(uVar2 + 0x48) == this_00[0x12])))) {
    *(undefined4 *)((int)this + 0xc) = 0xffffffff;
    return;
  }
  iVar1 = FUN_004a8960(&DAT_005ae958,this_00[7],*(int *)(uVar2 + 0x1c));
  uVar3 = FUN_004a8b50(&DAT_005ae958,this_00[7],*(int *)(uVar2 + 0x1c));
  if (uVar3 == 8) {
    FUN_00401730(this_00);
    return;
  }
  if ((int)param_1 < iVar1) {
    FUN_00407fd0(this,this_00,uVar2,iVar1,uVar3,param_1,*(int *)(uVar2 + 0x1c));
  }
  else {
    iVar4 = FUN_004205e0((int)this_00);
    if (iVar4 == 0) {
      iVar1 = FUN_004019f0(this_00,uVar2,uVar3);
      if (iVar1 != 0) {
        FUN_0041efa0(this_00,3);
        return;
      }
    }
    else {
      if (this_00[0x11] != uVar3) {
        FUN_004193e0(this_00,uVar3);
        return;
      }
      if (iVar1 < 2) {
        FUN_0041efa0(this_00,3);
        return;
      }
      uVar3 = FUN_0047c9e0(&DAT_005aa12c,this_00[0x12]);
      if (uVar3 == 0) {
        FUN_0041efa0(this_00,4);
        return;
      }
      iVar1 = FUN_00408a60(this,this_00,uVar2);
      if (iVar1 != 0) {
        iVar1 = FUN_004094d0(this,this_00,uVar2);
        if (iVar1 == 0) {
          FUN_0041efa0(this_00,4);
          return;
        }
      }
    }
  }
  return;
}


