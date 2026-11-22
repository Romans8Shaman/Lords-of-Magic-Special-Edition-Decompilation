
void __thiscall FUN_005041a0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if ((*(int *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x23590 + (int)this) != 3) ||
     (iVar1 = FUN_004a8470((void *)((int)this + 0x29e70),param_1,param_2,0), iVar1 < 0)) {
    iVar1 = FUN_004a6e60((void *)((int)this + 0x29e70),param_1,param_2);
  }
  iVar2 = FUN_004f6000((void *)((int)this + 0x29e8c),iVar1);
  uVar3 = FUN_00482ac0((void *)((int)this + 0x25644),iVar1,7);
  if (uVar3 == 0) {
    iVar4 = iVar1;
  }
  else {
    iVar4 = *(int *)(uVar3 + 0x44);
  }
  FUN_00473870((void *)((int)this + 0x2531c),iVar4);
  iVar4 = FUN_004f6000((void *)((int)this + 0x29e8c),*(int *)((int)this + 0x252e4));
  *(int *)((int)this + 0x252e4) = iVar1;
  if (iVar4 != 0) {
    if (-1 < *(int *)(iVar4 + 0x38)) {
      *(undefined4 *)(iVar4 + 0x38) = 0xffffffff;
      *(byte *)(iVar4 + 0x34) = *(byte *)(iVar4 + 0x34) | 2;
    }
    if (*(int *)(iVar4 + 4) == 7) {
      FUN_005040d0(&DAT_005ae974,iVar4);
    }
    if (*(int *)(iVar4 + 4) == 0) {
      FUN_00504140(&DAT_005ae974,iVar4);
    }
  }
  if (iVar2 == 0) {
    return;
  }
  if (*(int *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x23590 + (int)this) == 3) {
    if (*(int *)(iVar2 + 4) == 0) {
      iVar4 = FUN_00407d50(iVar2);
      if ((iVar4 != 0) && (iVar4 = FUN_00502bd0(0x584ae8), iVar4 == 0)) {
        return;
      }
    }
    else if (*(int *)(iVar2 + 4) == 7) {
      return;
    }
  }
  iVar1 = FUN_0052d710((void *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this),iVar1);
  if (*(int *)(iVar2 + 0x38) != iVar1) {
    *(int *)(iVar2 + 0x38) = iVar1;
    *(byte *)(iVar2 + 0x34) = *(byte *)(iVar2 + 0x34) | 2;
  }
  if (*(int *)(iVar2 + 4) == 7) {
    FUN_005040d0(&DAT_005ae974,iVar2);
  }
  if (*(int *)(iVar2 + 4) == 0) {
    FUN_00504140(&DAT_005ae974,iVar2);
  }
  return;
}


