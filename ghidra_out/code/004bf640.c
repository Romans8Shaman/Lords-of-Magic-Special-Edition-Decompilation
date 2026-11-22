
void __thiscall FUN_004bf640(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *this_00;
  uint local_8;
  int *local_4;
  
  uVar1 = FUN_00482ac0(&DAT_005aa12c,DAT_005ae8a0,3);
  uVar2 = FUN_00482ac0(&DAT_005aa12c,DAT_005ae8a0,2);
  *(int *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = DAT_005aa7d4;
  *(undefined4 *)((int)this + 0x10) = DAT_005aadb0;
  *(undefined4 *)((int)this + 0x14) = DAT_005ae898;
  *(undefined4 *)((int)this + 0x18) = DAT_005ae89c;
  if (uVar1 != 0) {
    iVar3 = FUN_00451970(uVar1);
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + iVar3;
  }
  if (uVar2 != 0) {
    iVar3 = FUN_00440e90(uVar2);
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + iVar3;
  }
  uVar4 = FUN_0050b9a0(0x5aa12c);
  *(undefined4 *)((int)this + 0x1c) = uVar4;
  iVar3 = FUN_0050b9d0(0x5aa12c);
  *(int *)((int)this + 0x20) = iVar3;
  if ((param_1 < 0) || (0xf < param_1)) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = &DAT_005af194 + param_1 * 0x1d84;
  }
  iVar3 = *(int *)((int)this + 0xc);
  if (iVar3 == param_1) {
    iVar3 = *(int *)((int)this + 0x10);
  }
  else if (*(int *)((int)this + 0x10) != param_1) goto LAB_004bf70f;
  FUN_004bcb90(this_00,iVar3);
LAB_004bf70f:
  uVar4 = FUN_004bcb60(this_00,*(int *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x24) = uVar4;
  uVar4 = FUN_004bcb60(this_00,*(int *)((int)this + 0x10));
  *(undefined4 *)((int)this + 0x28) = uVar4;
  iVar3 = FUN_004bf800(this,&local_8,1);
  if (iVar3 != 0) {
    FUN_004d05e0(DAT_005a7b78,local_8,local_4);
  }
  return;
}


