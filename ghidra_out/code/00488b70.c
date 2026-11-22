
void __cdecl op_removedungeonarmy(void *vm)

{
  undefined4 *puVar1;
  void *this;
  int iVar2;
  uint uVar3;
  float fVar4;
  longlong lVar5;
  float fStack_10;
  uint uStack_c;
  uint uStack_8;
  float fStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar3 = 0;
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 == 1) {
    fVar4 = fStack_4;
  }
  else if (uVar3 == 2) {
    fVar4 = (float)((int)fStack_4 >> 8);
  }
  else {
    if (uVar3 != 4) {
      FUN_00404ab0(this,0xe);
      return;
    }
    lVar5 = __ftol((float10)fStack_4);
    fVar4 = (float)lVar5;
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
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  uVar3 = FUN_00482ac0(&DAT_005aa12c,(int)vm,1);
  if (((uVar3 != 0) && (-1 < (int)fVar4)) && ((int)fVar4 < 10)) {
    if (fVar4 == 0.0) {
      puVar1 = *(undefined4 **)(uVar3 + 0x58);
      if (puVar1 != (undefined4 *)0x0) {
        (/*IC:00488ca6*/**(code **)*puVar1)(puVar1,1);
      }
      *(undefined4 *)(uVar3 + 0x58) = 0;
      *(uint *)(uVar3 + 0x30) = *(uint *)(uVar3 + 0x30) | 0x100;
      return;
    }
    iVar2 = (int)fVar4 * 0xc;
    puVar1 = *(undefined4 **)(iVar2 + -4 + *(int *)(uVar3 + 0x50));
    if (puVar1 != (undefined4 *)0x0) {
      (/*IC:00488cd1*/**(code **)*puVar1)(puVar1,1);
    }
    *(undefined4 *)(iVar2 + -4 + *(int *)(uVar3 + 0x50)) = 0;
    *(uint *)(iVar2 + -8 + *(int *)(uVar3 + 0x50)) =
         *(uint *)(iVar2 + -8 + *(int *)(uVar3 + 0x50)) | 1;
  }
  return;
}


