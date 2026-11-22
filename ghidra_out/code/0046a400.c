
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl op_cameraposition(void *vm)

{
  void *this;
  uint uVar1;
  int iVar2;
  void *pvStack_18;
  float fStack_14;
  uint uStack_10;
  void *pvStack_c;
  uint uStack_8;
  void *pvStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar1 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    pvStack_c = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar1 = 0;
    pvStack_c = pvStack_4;
  }
  uVar1 = uVar1 & 0xff;
  if (uVar1 == 1) {
    vm = (void *)(float)(int)pvStack_c;
  }
  else if (uVar1 == 2) {
    vm = (void *)((float)(int)pvStack_c * (float)_DAT_0054d818);
  }
  else {
    if (uVar1 != 4) goto LAB_0046a5bc;
    vm = pvStack_c;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    pvStack_4 = *(void **)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,&uStack_10,(uint *)&pvStack_18,&fStack_14);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uVar1 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    pvStack_4 = *(void **)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar1 = 0;
  }
  uVar1 = uVar1 & 0xff;
  if (uVar1 == 1) {
    pvStack_18 = (void *)(float)(int)pvStack_4;
  }
  else if (uVar1 == 2) {
    pvStack_18 = (void *)((float)(int)pvStack_4 * (float)_DAT_0054d818);
  }
  else {
    if (uVar1 != 4) {
LAB_0046a5bc:
      FUN_00404ab0(this,0xe);
      return;
    }
    pvStack_18 = pvStack_4;
  }
  FUN_00469d00(&DAT_005876d0,pvStack_18,fStack_14,vm);
  FUN_00504ce0(&DAT_00584ae8,1,0);
  return;
}


