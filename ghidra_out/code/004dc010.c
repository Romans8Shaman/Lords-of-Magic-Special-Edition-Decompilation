
void __cdecl op_getdoodadinfo(void *vm)

{
  void *this;
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  float fStack_10;
  uint uStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  piVar2 = (int *)FUN_00492760(&DAT_005a7b50,(int)vm);
  iVar1 = DAT_005a7b50;
  if ((int)vm < 0) {
    FUN_004d41c0(this,s_doodad_not_found_005727d8);
    return;
  }
  iVar3 = 0;
  if (*piVar2 == 0) {
    pvVar5 = vm;
  }
  else {
    pvVar5 = (void *)0x0;
    if (0 < DAT_005a7b50) {
      do {
        iVar3 = FUN_00491ec0(&DAT_005a7b50,(int)pvVar5);
        if (iVar3 == *piVar2) break;
        pvVar5 = (void *)((int)pvVar5 + 1);
      } while ((int)pvVar5 < iVar1);
    }
  }
  if (iVar3 == 0) {
    pvVar5 = (void *)0xffffffff;
  }
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  else {
    iVar1 = *(int *)((int)this + 0x50);
    iVar3 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar3;
    *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
    *(void **)(iVar1 + 4 + iVar3 * 8) = pvVar5;
  }
  iVar1 = piVar2[1];
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  else {
    iVar3 = *(int *)((int)this + 0x50);
    iVar4 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar4;
    *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
    *(int *)(iVar3 + 4 + iVar4 * 8) = iVar1;
  }
  iVar1 = piVar2[2];
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  else {
    iVar3 = *(int *)((int)this + 0x50);
    iVar4 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar4;
    *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
    *(int *)(iVar3 + 4 + iVar4 * 8) = iVar1;
  }
  iVar1 = piVar2[3];
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  else {
    iVar3 = *(int *)((int)this + 0x50);
    iVar4 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar4;
    *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
    *(int *)(iVar3 + 4 + iVar4 * 8) = iVar1;
  }
  iVar1 = piVar2[4];
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  iVar3 = *(int *)((int)this + 0x50);
  iVar4 = *(int *)((int)this + 0x54) + -1;
  *(int *)((int)this + 0x54) = iVar4;
  *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
  *(int *)(iVar3 + 4 + iVar4 * 8) = iVar1;
  return;
}


