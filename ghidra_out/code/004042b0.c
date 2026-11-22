
undefined4 __thiscall FUN_004042b0(void *this,void *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0xc),0);
  if ((uVar1 != 0) && ((~*(uint *)(uVar1 + 0x30) & 0x100) != 0)) {
    uVar2 = FUN_00407d60(uVar1);
    if (uVar2 == 0) {
      uVar2 = FUN_00407d80(uVar1);
      if (uVar2 == 0) {
        iVar3 = FUN_004205e0((int)param_1);
        if (iVar3 == 0) {
          iVar3 = DAT_00555148;
        }
        else {
          iVar3 = FUN_00420600((int)param_1);
        }
        iVar4 = FUN_004a8960(&DAT_005ae958,*(int *)((int)param_1 + 0x1c),*(int *)(uVar1 + 0x1c));
        if (iVar3 < iVar4) {
          return 0;
        }
        *(undefined4 *)((int)this + 8) = 0xffffffff;
        *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 0xc);
        *(undefined4 *)this = 2;
        return 1;
      }
    }
  }
  FUN_00403c30(this,param_1);
  *(undefined4 *)((int)this + 0xc) = 0xffffffff;
  return 1;
}


