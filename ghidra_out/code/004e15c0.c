
void __cdecl op_selectarmy(void *vm)

{
  int iVar1;
  void *this;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  longlong lVar7;
  float fStack_10;
  uint uStack_c;
  uint uStack_8;
  float fStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar5 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar5 = 0;
  }
  uVar5 = uVar5 & 0xff;
  if (uVar5 == 1) {
    fVar6 = fStack_4;
  }
  else if (uVar5 == 2) {
    fVar6 = (float)((int)fStack_4 >> 8);
  }
  else {
    if (uVar5 != 4) {
      FUN_00404ab0(this,0xe);
      return;
    }
    lVar7 = __ftol((float10)fStack_4);
    fVar6 = (float)lVar7;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    fStack_4 = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
    iVar2 = FUN_004a51c0(&DAT_005ae958,(int)vm,(int)fVar6);
    puVar3 = FUN_004a8360(&DAT_005ae958,iVar2);
    iVar2 = -1;
    if (puVar3 != (undefined4 *)0x0) {
      iVar2 = puVar3[10];
      FUN_0052b640(&DAT_005a7d90 + DAT_005a7d8c * 0x400,iVar2);
    }
    if (*(int *)((int)this + 0x54) != 0) {
      iVar1 = *(int *)((int)this + 0x50);
      iVar4 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar4;
      *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
      *(int *)(iVar1 + 4 + iVar4 * 8) = iVar2;
      return;
    }
    *(undefined4 *)((int)this + 0x90) = 3;
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


